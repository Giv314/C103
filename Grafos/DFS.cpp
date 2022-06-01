#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

// Caso de teste: 5 1 0 1 0 3 1 2 1 4 2 4 3 2 3 4 -1 -1
// Caso 2: 6 1 0 1 0 3 1 2 1 3 1 4 1 5 3 4 4 2 4 5 5 2 -1 -1

struct no
{
    int v; // Vertice
};

void ordenacao_topologica(int f[], int nVertices)
{
    int vet[10];
    int i,j; // contadores
    int trab;
    bool troca;
    int limite;

    for(i = 0; i < nVertices; i++){
        vet[i] = f[i];
    }

    troca = true;
    limite = nVertices-1;

    while (troca)
    {
        troca = false;
        for (i=0; i<limite; i++)
            if (f[i] < f[i+1])
            {
                trab = f[i];
                f[i] = f[i+1];
                f[i+1] = trab;
                j = i;
                troca = true;
            }
        limite = j;
    }
    for(i = 0; i < nVertices; i++){
        for(int j = 0; j < nVertices; j++){
            if(f[i] == vet[j])
                cout << j << ' ';
        }
    }
    cout << endl;
}

void dfs_visit(int v, int &time, int pi[], list<no>adj[], int nVertices, int color[], int f[], int d[])
{
    list<no>::iterator it;
    color[v] = 1; // Gray
    time++;
    d[v] = time;
    for(it = adj[v].begin(); it != adj[v].end(); it++)
    {
        if (color[it->v] == 0)
        {
            pi[it->v] = v;
            dfs_visit(it-> v, time, pi, adj, nVertices, color, f, d);
        }
    }
    color[v] = -1; // Black
    time++;
    f[v] = time;
}

void dfs(list<no>adj[], int nVertices)
{
    int color[10];
    int pi[10];
    int time;
    int u;
    int d[10];
    int f[10];
    for(u = 0; u < nVertices; u++)
    {
        color[u] = 0; // White
        pi[u] = 0; // null
    }
    time = 0;
    for(u = 0; u < nVertices; u++)
    {
        if(color[u] == 0)
            dfs_visit(u, time, pi, adj, nVertices, color, f, d);
    }
    ordenacao_topologica(f, nVertices);
}

void cria_aresta(list<no>adj[], int u, int v, int orientado)
{
    no aux; // inserir as arestas na lista de adjacências
    aux.v = v;
    adj[u].push_back(aux);
    if (orientado == 0)
    {
        aux.v = u;
        adj[v].push_back(aux);
    }
}


int main()
{
    int nVertices;
    int orientado; // 0: Não orientado, 1: orientado
    int u; // Origem
    int v; // Destino
    list<no> adj[30]; // Lista de adjacencias
    list<no>::iterator q;

    cin >> nVertices >> orientado;
    cin >> u >> v;
    while (u != -1 && v != -1)
    {
        cria_aresta(adj, u, v, orientado);
        cin >> u >> v;
    }
    dfs(adj, nVertices);

    return 0;

}
