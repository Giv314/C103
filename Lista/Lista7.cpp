#include <iostream>
#include <iomanip>
#include <cmath>
#include <list>
using namespace std;

int main(){
int n; // Numero de operacoes
int op; // Opcao desejada
int aux; // auxiliar para codigo 
list <int> estoques; // Lista de estoques
list <int> vendas; // Lista de vendas
list <int>::iterator p; // Varrer a lista
cin >> n; // Le o numero de operacoes
// Repeticao para as operacoes
for(int i = 0; i < n; i++){
cin >> op;
switch(op){
case 1: 
cin >> aux;
estoques.push_front(aux); // Insere elemento na lista de estoques
break;
case 2: 
vendas.push_front(aux); // Insere aux nas vendas
estoques.pop_front(); // Remove 1 elemento dos estoques
break;
}
}
// Mostra estoques e vendas
cout << "Estoque: ";
for(p=estoques.begin(); p!=estoques.end(); p++)
cout << *p << ' ';
cout << endl;
cout << "Venda: ";
for(p=vendas.begin(); p!=vendas.end(); p++)
cout << *p << ' '; 
cout << endl;
return 0;

// Desalocando memória usada pela lista    
while(!vendas.empty() && estoques.empty()){
vendas.pop_front();
estoques.pop_front();
}
return 0;

}