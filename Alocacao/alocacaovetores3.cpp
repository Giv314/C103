#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
int *p = NULL; // Ponteiro pra alocacao
int n; // tamanho do vetor
int *vetor;
int maior = -1000;

// Ler o tamanho do vetor
cin >> n;
// Alocar memoria
vetor = new int [n];
p = vetor;
// Armazena os dados no vetor e verifica qual é maior
for(int i = 0; i < n; i++){
cin >> *p;
if(*p > maior)
maior = *p;
p++;
}
// Mostra o maior elemento
cout << maior << endl;
// desaloca o vetor da memoria e retorna 0
delete [] vetor;
return 0;

}