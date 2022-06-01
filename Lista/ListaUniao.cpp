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
    list<int>::iterator p1;
    list<int>::iterator p2;
    int aux;

    // Adicionando elementos nas listas 1 e 2
    cin >> aux;
    while(aux != 0)
    {
        lista1.push_back(aux);
        cin >> aux;
    }
    cin >> aux;
    while(aux != 0)
    {
        lista2.push_back(aux);
        cin >> aux;
    }

    while(!lista1.empty() || !lista2.empty())
    {
        p1 = lista1.begin();
        p2 = lista2.begin();

        if(*p1 < *p2)
        {
            lista3.push_back(*p1);
            lista1.pop_front();
        }
        if(*p2 < *p1){
            lista3.push_back(*p2);
            lista2.pop_front();
        }
        if(*p1 == *p2){
            lista3.push_back(*p1);
            lista1.pop_front();
            lista2.pop_front();
        }

}
    // Mostrando a lista 3
    for(p1 = lista3.begin(); p1!= lista3.end(); p1++)
        cout << *p1 << ' ';
    cout << endl;

    return 0;

}
