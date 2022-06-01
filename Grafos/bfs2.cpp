#include <iostream>
#include <list>

using namespace std;

struct no
{
   int v; // vertice de destino da aresta
   int peso; // peso da aresta
};

void bfs(list<no>adj[], int nVertices, int s)
{
    int state[30];
    int p[30];
    list<int> Q; // Lista de inteiros
    int i = 0;//contador 
    int u = 0, v = 0; // vars aux para mostrar os vértices
    list<no>::iterator q; // iterador para varrer a lista de adjacências
    
	
	for(u=0; u<nVertices; u++)
	{
            if(u != s){
		state[u]= -1;//undiscovered
		p[u]=-1;
            }
	}

	state[s]=0;//discovered
	p[s]=-1;
	Q.push_back(s);
	
	while (!Q.empty())
	{
		u=Q.front();
		Q.pop_front();
		cout<< u << endl;
		for(q = adj[u].begin(); q != adj[u].end(); q++ )
		{
			v=q->v;
			cout<< u << ' ' << v << endl;
			if (state[v] == -1)
			{
				state[v]=0;//discovered
				p[v]=u;
				Q.push_back(v);
			}
		}
		state[u]=1;//processed

	}
	
}

int main()
{
	list<no> adj[20]; // lista de adjacências
	int nVertices; // numero de vértices do grafo
        no aux; // var aux para inserir as arestas na lista de adjacências
	int u, v; // vértices de origem e destino de uma aresta
	int p; // peso da aresta
	int i = 0; // contador
	list<no>::iterator q; // iterador para varrer a lista de adjacências
	int orientado=0; //0: Não orientado, 1: orientado
	int s; // Vertice inicial
	
	// Lendo numero de vertices do grafo
	cin >> nVertices;

	//Lendo o vértice inicial
	cin >> s; 

	// Lendo aresta e mandando para a função
	cin >> u >> v >> p;
	while (u != -1 && v != -1 && p != -1)
	{
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
        aux.v = u;
	adj[v].push_back(aux);
        cin >> u >> v >> p;
	}
	bfs(adj,nVertices,s);
	
	return 0;
}