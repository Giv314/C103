#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;
// Teste: 1 2 3 5 0 1 3 5 7 0

int main()
{
    list<int> lista1;
    list<int> lista2;
    list<int> lista3;
    list<int>::iterator it;
    list<int>::iterator q;
    int aux;

    // Adicionando elementos nas listas 1 e 2
    cin >> aux;
    while(aux != 0)
    {
        lista1.push_front(aux);
        cin >> aux;
    }
    cin >> aux;
    while(aux != 0)
    {
        lista2.push_front(aux);
        cin >> aux;
    }
    // Adicionando elementos na lista 3
    for(it = lista1.begin(); it != lista1.end(); it++){
        for(q = lista2.begin(); q!= lista2.end(); q++){
          if(*it < *q){
          lista3.push_front(*it);
          }
        }
    }

    // Mostrando a lista 3
    for(it = lista3.begin(); it!= lista3.end(); it++)
        cout << *it << ' ';
    cout << endl;

    // Desalocando memoria
    while(!lista1.empty() && lista2.empty() && lista3.empty())
    {
        lista1.pop_front();
        lista2.pop_front();
        lista3.pop_front();
    }


    return 0;

}
