#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
int *p = NULL; // Ponteiro pra alocacao
int n; // tamanho do vetor
int *vetor;
int quant = 0; // quantidade de numeros pares e positivos

// Ler o tamanho do vetor
cin >> n;
// Alocar memoria
vetor = new int [n];
p = vetor;
// Armazena os dados e verifica se é par e positivo
for(int i = 0; i < n; i++){
cin >> *p;
if(*p % 2 == 0 && *p > 0)
quant++;
p++;
}
// Mostra a quantidade de pares e positivos
cout << quant << endl;
// desaloca o vetor da memoria e retorna 0
delete [] vetor;
return 0;

}