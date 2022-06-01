#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

int main(){

list <int> fila; // ponteiros
int x; // Dados

// Lendo dados e inserindo na lista
for(int i = 0; i < 4; i++){
cin >> x;
fila.push_back(x); // Insere x no início da fila
}
// Mostrando e removendo elementos
while(!fila.empty()){ // Enquanto a fila n ficar vazia
cout << *fila.begin() << ' '; // Aponta pro primeiro elemento da lista
fila.pop_front(); // Remove o primeiro elemento da lista
}



return 0;

}