#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int sequencial(int vet[], int tam, int x){ // Funcao que implementa a busca sequencial
int retorno; // Retorna o valor
int j;
int aux = 0;
for(j = 0; j < tam; j++){
if(vet[j] == x){
retorno = j; // Se x for encontrado, retorna a posição do mesmo no vetor
aux++;
}
}
if(aux == 0){
retorno = -1; // Se x não for encontrado, retorna -1
}
return retorno;
}

int main(){

int vet[100]; //Vetor
int tam = 0; // Tamanho
int x; // Numero a ser procurado
int i = 0; //Contador
int k; // Numero que deve receber -1
int res; // Recebe retorno da funcao
cin >> k;
while(k != -1){
vet[i] = k;
tam++;
i++;
cin >> k;
}
cin >> x;
res = sequencial(vet, tam, x);
if (res == -1){
cout << x << " nao encontrado" << endl;
}
else 
cout << x << " encontrado na posicao " << res << endl;
}
