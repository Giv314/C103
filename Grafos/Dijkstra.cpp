#include <iostream>
#include <climits>
#include <list>
using namespace std;

// Caso de de teste: 5 1 0 2 0 1 10 0 4 5 1 2 1 1 4 2 2 3 4 3 0 7 3 2 6 4 1 3 4 2 9 4 3 2 -1 -1 -1
struct no
{
    int peso; // tamanho das arestas
    int v; // Vertice de destino
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
    no aux; // inserir as arestas na lista de adjacências

    aux.v = v;
    aux.peso = p;
    adj[u].push_back(aux);
    if (orientado == 0)
    {
        aux.v = u;
        adj[v].push_back(aux);
    }
}

// Algoritmo
void dijkstra(list<no>adj[], int nVertices, int start, int end)
{
    int u;
    int v;
    int weight = 0;
    bool intree[30]; // false: nao esta na arvore, true: esta na arvore
    int distance[30];
    int parent[30];
    int destino;
    int dist;
    int i = 0; // contador
    list<no>::iterator it; // Varre list<no> adj[]
    list<int> pilha; // Lista auxiliar para mostrar o custo

    for(u = 0; u < nVertices; u++)  // para cada u em V[g]
    {
        intree[u] = false;
        distance[u] = INT_MAX;
        parent[u] = -1;
    }
    distance[start] = 0;
    v = start;

// Expansão
    while(intree[v] == false)
    {
        intree[v] = true;
        for(it = adj[v].begin(); it!= adj[v].end(); it++)  // Para cada p em adj[v]
        {
            destino = it->v;
            weight = it->peso;
            if(distance[destino] > distance[v]+weight)
            {
                distance[destino] = distance[v]+weight;
                parent[destino] = v;
            }
        }
// Escolha
        v = 1;
        dist = INT_MAX;
        for(u = 1; u < nVertices; u++)
        {
            if(intree[u] == false && dist > distance[u])
            {
                dist = distance[u];
                v = u;
            }
        }
    }
// Saida de dados
    i = end;
    pilha.push_front(end);
    while(parent[i] != -1){
    pilha.push_front(parent[i]);
    i = parent[i];
    }
    cout << "Menor caminho: ";
    while(!pilha.empty())  // Enquanto a pilha n ficar vazia
    {
        cout << *pilha.begin() << ' '; // Aponta pro primeiro elemento da lista
        pilha.pop_front(); // Remove o primeiro elemento da lista
    }
    cout << endl;
    cout << "Custo: " << distance[end] << endl;
}

// Principal
int main()
{

    int nVertices; // Max: 10
    int orientado; // 0: Não orientado, 1: orientado
    int start; // Vertice inicial
    int u; // Vertice de origem
    int v; // Vertice de destino
    int p; // peso
    int i = 0; // cont
    int end; // Vertice de destino
    list<no> adj[30]; // Lista de adjacencias

    cin >> nVertices >> orientado >> start >> end;
    cin >> u >> v >> p;
    while (u != -1 && v != -1 && p != -1)
    {
        cria_aresta(adj, u, v, p, orientado);
        cin >> u >> v >> p;
    }

    dijkstra(adj, nVertices, start, end);
    return 0;

}
