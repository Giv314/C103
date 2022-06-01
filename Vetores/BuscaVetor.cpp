#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int sequencial(int vet[], int tam, int x){ // Funcao que implementa a busca sequencial
int aux = 0; // Fica igual a zero quando o elemento x nao esta no vetor
int retorno; // Retorna o valor
for(int j = 0; j < tam; j++){ 
if(vet[j] == x){
retorno = j; // Se x for encontrado, retorna a posição do mesmo no vetor
aux++;
}
if(aux == 0)
retorno = -1; // Se x não for encontrado, retorna -1
}
return retorno;
}


int main(){

int num; // Numero que entrará no vetor
int i = 0; // Contador
int vet[100]; // Vetor
int tam; // Tamanho do vetor
int x; // Numero que o usuario quer achar
int ret; // Armazena o retorno da funcao sequencial

// Atribuindo valores ao vetor
cin >> num;
while(num != -1){
vet[i] = num;
i++;
cin >> num;
}
cin >> x;
ret = sequencial(vet, i, x);
// Print do retorno da funcao sequencial
if(ret != -1) 
cout << x << " encontrado na posicao " << ret << endl;
else
cout << x << " nao foi encontrado" << endl;

return 0;
}