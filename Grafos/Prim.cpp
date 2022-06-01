#include <iostream>
#include <iomanip>
#include <climits>
#include <list>
using namespace std;

// Caso de de teste: 9 0 0 0 1 4 0 7 8 1 2 8 1 7 11 2 3 7 2 5 4 2 8 2 3 4 9 3 5 14 4 5 10 5 6 2 6 7 1 6 8 6 7 8 7 -1 -1 -1

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

// Algoritmo de prim
void prim(list<no>adj[], int nVertices, int start)
{
    int u; // V. de origem
    int v; // V.de destino
    int weight = 0; // Peso
    bool intree[30]; // false: nao esta na arvore, true: esta na arvore
    int distance[30];
    int parent[30];
    int destino;
    int dist;
    int i; // contador
    int soma = 0; // Custo
    list<no>::iterator it; // Varre list<no> adj[]

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
            if(distance[destino] > weight && intree[destino] == false)
            {
                distance[destino] = weight;
                parent[destino] = v;
            }
        }
// Escolha
        v = 0;
        dist = INT_MAX;
        for(u = 0; u < nVertices; u++)
        {
            if(intree[u] == false && dist > distance[u])
            {
                dist = distance[u];
                v = u;
            }
        }
    }
    for(i = 1; i < nVertices; i++)
    {
        cout << parent[i] << ' ' << i << endl;
        soma += distance[i];
    }
    cout << "Custo: " << soma << endl;
}

// Principal
int main()
{

    int nVertices; // Max: 10
    int orientado; // 0: Não orientado, 1: orientado
    int start; // Vertice inicial do grafo
    int u; // Vertice de origem
    int v; // Vertice de destino
    int p; // peso
    int i = 0; // cont
    list<no> adj[30]; // Lista de adjacencias
    list<no>::iterator q;

    cin >> nVertices >> orientado >> start;
    cin >> u >> v >> p;
    while (u != -1 && v != -1 && p != -1)
    {
        cria_aresta(adj, u, v, p, orientado);
        cin >> u >> v >> p;
    }
    /*for(q = adj[1].begin(); q != adj[1].end(); q++)
    cout << q->v << ' ' << q->peso << endl;
    */
    cout << "Arvore Geradora Minima:" << endl;
    prim(adj, nVertices, start);

    return 0;

}
