#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float mediaImpares(int *vetor, int N)
{
    int *p = NULL; // ponteiro usado para varrer o vetor
    float media = 0;
    float cont = 0; // contador de numeros impares

    p = vetor;
    for(int i = 0; i < N; i++)
    {
        // Condicao para numeros positivos
        if(*p % 2 == 1){
            media += *p;
            cont++;
        }
        // Condicao para numeros negativos
        if(*p < 0){
         *p = abs(*p);
         if(*p % 2 == 1)
            media -= *p;
            cont++;
        }
        p++;
    }
    media = media*1.0/cont*1.0;
return media;

}

int main()
{
    int n; // tamanho do vetor que será alocado
    int *vet; // vetor que será alocado
    float media; // armazena o valor da media dos impares

    vet = new int [n];
    cin >> n;

// Lendo n numeros inteiros
    for(int i = 0; i < n; i++)
        cin >> vet[i];
    media = mediaImpares(vet, n);
    cout << "Media dos elementos impares: ";
    cout << fixed << setprecision(2) << media << endl;
    delete [] vet; // desaloca o vetor da memoria

    return 0;

}
