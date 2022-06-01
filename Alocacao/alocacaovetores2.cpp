#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
int n; // tamanho
double *vetor; // vetor
double media; // media dos valores atribuidos

// Ler o tamanho do vetor
cin >> n;
// Alocar memoria
vetor = new double [n];
// Armazena os dados
for(int i = 0; i < n; i++){
cin >> vetor[i];
}
// Mostra os dados
for(int i = 0; i < n; i++){
media += vetor[i];
}
media = media/n;
cout << fixed << setprecision(2) << media << endl;

delete [] vetor; // desaloca o vetor da memoria
return 0;

}