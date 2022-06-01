#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

void bubbleSort(int vetor[], int tamanho)
{
    int i,j; // contadores
    int trab;
    bool troca;
    int limite;
    troca = true;
    limite = tamanho-1;

    while (troca)
    {
        troca = false;
        for (i=0; i<limite; i++)
            if (vetor[i] > vetor[i+1])
            {
                trab = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = trab;
                j = i;
                troca = true;
            }
        limite = j;
    }
}

int main()
{
// Declarar as variaveis
    int vet[50];
    int i = 0;
    int n; //Numero de elementos do vetor
    int aux;
// Ler o vetor
    cin >> aux;
    while(aux != 0)
    {
        vet[i] = aux;
        i++;
        cin >> aux;
    }
    n = i;
// Ordenar o vetor
    bubbleSort(vet, n);
// Mostrar o vetor ordenado
    for(i = 0; i < n; i++)
    cout << vet[i] << ' ';
    cout << endl;
    return 0;
}
