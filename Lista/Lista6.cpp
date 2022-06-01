#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

int contar(list<int> lista){
int s = 0;
list <int>::iterator p; // interador que varre a lista
// Conta quantos elementos tem e retorna
for(p=lista.begin(); p!=lista.end(); p++){
s++;
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
cout << contar(lista) << endl; // Mostra quantos nós tem
// Desalocando memória usada pela lista    
while(!lista.empty())
lista.pop_front();
return 0;


return 0;

}