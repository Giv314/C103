#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){

int *vetor = NULL; // ponteiro pro vetor, null
int tam; // tamanho do vetor

// Le o tamanho vei
cout << "Quantos elementos? ";
cin >> tam;

// Criar o veto véi
vetor =  new int [tam];

// Ler os elementos do vetô vei
cout << "Digita ai os elemento vei" << endl;
for(int i = 0; i < tam; i++){
cin >> vetor[i];

}

// Mostrar os elemento vei
cout << "Elementos inserido vei:" << endl;
for(int i = 0; i < tam; i++)
cout << vetor[i] << " ";
cout << endl;
delete [] vetor; // Desaloca o vetor da memoria ram heap vei

return 0;

}