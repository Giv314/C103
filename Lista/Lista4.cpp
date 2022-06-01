#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

bool encontrar(list<float> lista, float x){
bool res; // Retorna 1 se encontrou ou 0 se não.
while(!lista.empty()){
if(*lista.begin() == x){
lista.pop_front();
return 1;
}
else
lista.pop_front();
}
return 0;
}

int main(){

list <float> lista; // ponteiro para a lista
list <float>::iterator p; // interador que varre a lista
int a; // auxiliar pra inserir elementos na lista
int x; // numero a ser procurado na lista
//Inserindo elementos na lista
cin >> a;
while(a != 0){
lista.push_front(a); // Insere x no início da pilha
cin >> a;
}
cin >> x; // Le qual elemento procurar
if(encontrar(lista, x) == 1)
cout << "Encontrado" << endl;
else
cout << "Nao encontrado" << endl;

return 0;

}