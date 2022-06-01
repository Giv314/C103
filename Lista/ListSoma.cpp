#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

float calcSoma(list<float> lista)
{
    list <float>::iterator p;
    float soma;
    for(p = lista.begin(); p != lista.end(); p++)
        soma += *p;
    return soma;
}

int main()
{
    list<float> lista;
    float soma;
    float aux; // variavel aux que armazena dados na lista

    cin >> aux;
    while(aux != 0)
    {
        lista.push_front(aux);
        cin >> aux;
    }
    soma = calcSoma(lista);
    cout << fixed << setprecision(2) << "soma = " << soma << endl;

    return 0;

}
