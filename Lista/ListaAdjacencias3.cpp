#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

struct no{
int v; // Vertice 
int p; // tamanho da aresta
};

// Funcao cria arestas
void cria_aresta(list<no>adj[], int u, int v, int p, int orientado){
no aux;
aux.v = v;
aux.p = p;
adj[u].push_back(aux);
if(orientado == 0){
aux.v = u;
adj[v].push_back(aux);
}
}


// Funcao main
int main(){

list<no> adj[10]; // Listas de adjacencias
list<no>::iterator it; // Iterador p varrer lista
int u, v; // Vertices de origem e destino das arestas
int p; // peso da aresta 
int nVertices; // Numero de vertices do grafo
int orientado; // 1: Orientado, 0: não
int i; // Contador

cin >> nVertices >> orientado; // Inserindo o numero de vertices e se é orientado
cin >> u >> v >> p;
while(u != -1 && v!= -1 && p != -1){
cria_aresta(adj, u, v, p, orientado);
cin >> u >> v >> p;
}

// Mostrando o grafo
for(i = 0; i < nVertices; i++)
for(it = adj[i].begin(); it != adj[i].end(); it++)
cout << i << ' ' << it->v << ' ' << it->p << endl;


return 0;

}