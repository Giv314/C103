#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;
// Caso de teste: 5 0 0 1 0 0 4 0 1 2 0 1 3 0 1 4 0 2 3 0 3 4 0 -1 -1 -1

struct no
{
    int v; // Vertice
    int peso; // tamanho da aresta
};

void bfs(list<no> adj[], int nVertices, int s)
{
    int state[30]; // Estado de cada grafo
    int p[30]; //pais
    int i = 0; // Contador
    int u = 0;
    int v = 0;
    list<no>::iterator it; // Iterador p varrer lista
    list<int> Q;

    for(u = 0; u < nVertices; u++)
    {
        if(u!=s)
        {
            state[u] = -1; // undiscovered
            p[u] = -1;
        }
    }

        state[s] = 0; // discovered
        p[s] = -1;
        Q.push_back(s); // Coloca s no final da fila

        while(!Q.empty())
        {
            u = Q.front();
            Q.pop_front();
            cout << u << endl;
            for(it = adj[u].begin(); it!= adj[u].end(); it++)
            {
                v = it->v;
                cout << u << ' ' << v << endl;
                if(state[v] == -1)
                {
                    state[v] = 0;
                    p[v] = u;
                    Q.push_back(v);
                }
            }
            state[u] = 1; // processed
      }
}

int main()
{
    int nVertices; // numero de vertices
    int s; // Vertice inicial
    int u;
    int v;
    int peso;
    no aux; // No auxiliar para inserir elementos
    list<no> adj[30]; // Lista de adjacencias
    list<no>::iterator q;
    int i = 0; // contador

    cin >> nVertices;
    cin >> s;

    cin >> u >> v >> peso;
    while(u != -1 && v!= -1 && peso != -1)
    {
        aux.v = v;
        aux.peso = peso;
        adj[u].push_back(aux);
        aux.v = u;
        adj[v].push_back(aux);
        cin >> u >> v >> peso;
    }
    bfs(adj, nVertices, s);
    return 0;

}
