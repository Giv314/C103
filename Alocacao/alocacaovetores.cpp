#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
int *p = NULL; // Ponteiro pra alocacao
int n; // tamanho do vetor
int *vetor;

// Ler o tamanho do vetor
cin >> n;
// Alocar memoria
vetor = new int [n];
p = vetor;
// Armazena os dados
for(int i = 0; i < n; i++){
cin >> *p;
p++;
}
// Mostra os dados
p = vetor;
for(int i = 0; i < n; i++){
cout << *p << ' ';
p++;
}
cout << endl;

delete [] vetor; // desaloca o vetor da memoria
return 0;

}