#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

struct info{
int codigo;
float preco;
};

int main(){
info *produto = NULL; // Ponteiro pra alocacao
int tam; // tamanho desejado

// Ler o tamanho desejado
cout << "Tamanho desejado: ";
cin >> tam;

// Aloca memoria pra struct
produto = new info [tam];

// Armazena os dados
for(int i = 0; i < tam; i++){
cout << "Codigo " << i << ": ";
cin >> produto[i].codigo;
cout << "Preco " << i << ": ";
cin >> produto[i].preco;
}
// Mostra os dados
for(int i = 0; i < tam; i++){
cout << "Codigo " << i << ": ";
cout << produto[i].codigo << endl;
cout << "Preco " << i << ": ";
cout << produto[i].preco << endl;
}
cout << endl;
delete [] produto;


return 0;

}