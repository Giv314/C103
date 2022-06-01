#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

int main(){

list <int> pilha; // ponteiros
int x; // Dados

// Lendo dados e inserindo na lista
for(int i = 0; i < 4; i++){
cin >> x;
pilha.push_front(x); // Insere x no início da pilha
}
// Mostrando e removendo elementos
while(!pilha.empty()){ // Enquanto a pilha n ficar vazia
cout << *pilha.begin() << ' '; // Aponta pro primeiro elemento da lista
pilha.pop_front(); // Remove o primeiro elemento da lista
}



return 0;

}