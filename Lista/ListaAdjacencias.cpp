#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;
// Caso de teste: 0 0 1 2 0 2 6 1 2 5 2 3 7
struct no{
int v; // Vertice 
int peso; // tamanho da aresta
};

int main(){

list<no> adj[10]; // Listas de adjacencias
list<no>::iterator p; // Iterador p varrer lista
no aux; // Insere as arestas em adj
int u, v; // Vertices de origem e destino das arestas
int peso; // peso da aresta 
int nVertices = 4; // Numero de vertices do grafo
int orientado; // 1: Orientado, 2: não
int i; // Contador
cin >> orientado;

// Inserindo arestas
for(i = 0; i < nVertices; i++){
cin >> u >> v >> peso;
aux.v = v;
aux.peso = peso;
adj[u].push_back(aux);
if(orientado == 0){
aux.v = u;
adj[v].push_back(aux);
}
}
// Mostrando o grafo
cout << "Lista de adjancencias: " << endl;
for(i = 0; i < nVertices; i++)
for(p = adj[i].begin(); p != adj[i].end(); p++)
cout << i << ' ' << p->v << ' ' << p->peso << endl;


return 0;

}