#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

int main(){

list <int> lista; // ponteiro para a lista
list <int>::iterator p; // interador que varre a lista
int soma = 0; // Soma os elementos da lista
//Inserindo elementos na lista
lista.push_back(2);
lista.push_back(1);
lista.push_back(3);
for(p=lista.begin(); p!=lista.end(); p++){
cout << *p << " "; // Mostra elementos
soma += *p; // Soma os elementos
}
// Mostrando a soma
cout << "soma = " << soma << endl;

// Desalocando memória usada pela lista    
while(!lista.empty())
lista.pop_front();
return 0;

}