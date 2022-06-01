#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

int soma(list<int> lista){
int s = 0;
list <int>::iterator p; // interador que varre a lista
// Somando os elementos e retornando
for(p=lista.begin(); p!=lista.end(); p++){
s += *p;
}
return s;
}

int main(){
list <int> lista; // ponteiro para a lista
list <float>::iterator p; // interador que varre a lista
int a; // auxiliar pra inserir elementos na lista
cin >> a;
while(a != 0){
lista.push_front(a); // Insere x no início da pilha
cin >> a;
}
cout << soma(lista) << endl; // Mostra a soma dos nós
// Desalocando memória usada pela lista    
while(!lista.empty())
lista.pop_front();
return 0;





return 0;

}