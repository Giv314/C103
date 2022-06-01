#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Ordena vetor
void insercao(int vetor[], int tam){
int i, j;
int chave;
for(j = 1; j < tam; j++){
chave = vetor[j];
i = j - 1;
while((i >= 0) && (vetor[i] < chave)){
vetor[i+1] = vetor[i];
i--;
}
vetor[i+1] = chave;
}
}

int main(){
// Declarar as variaveis
int vet[50];
int i = 0;
int n; //Numero de elementos do vetor
int aux;
// Ler o vetor
cin >> aux;
while(aux != 0){
vet[i] = aux;
i++;
cin >> aux;
}
n = i;
// Ordenar o vetor
insercao(vet, n);
// Mostrar o vetor ordenado
for(i = 0; i < n; i++)
cout << vet[i] << " ";
cout << endl;
return 0;
}