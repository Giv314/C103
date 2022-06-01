#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// Estrutura
struct dado{
int status;
int k;
};
// Funcao k mod m
int h1(int k, int m){
int res;
res = k % m; //k mod m
if(res < 0)
res += m;
return res;
}
//Funcao para colisoes
int h2(int k, int m){
return 1 + (k%(m-1));
}
// Funcao DoubleHashing
int hash1(int k, int i, int m){
int res;
res = h1(k,m)+i*h2(k,m)%m;
if(res < 0)
res += m;
if(res >= m)
res -= m;
return res;
}
// Funcao Insercao
int hash_insert(dado t[], int m, int k){
int i = 0;
int j = 0;
do{
j = hash1(k,i,m);
if (t[j].status != 1){
t[j].k = k;
t[j].status = 1;
return j;
}else
i++;
}while (i != m);
return -1;
}
// Funcao Pesquisa
int hash_search(dado t[], int m, int k){
int i; 
int j; // Retorno da funcao hashing
i = 0;
do{
j = hash1(k,i,m);
if (t[j].k == k)
return j;
else
i++;
}while (t[j].status != 0 && i < m);
return -1;
}
// Funcao Remocao
int hash_remove(dado t[], int m, int k){
int j;
j = hash_search(t,m,k);
if(j != -1){
t[j].status = 2;
t[j].k = -1;
return 0; // consegui remover
}else
return -1; // k nao esta na tabela
}

// PRINCIPAL
int main(){
int op; // Opcao escolhida
int m; // tamanho da tabela
int k; // Chave
int res1; //Retorno da funcao hash_insert
int res2; // Ret. da funcao hash_remove
dado t[30];
int i = 0; // contador
cin >> m;
cin >> op;
// Igualando todos os status a -1 e status a 0
for(int i = 0; i < m; i++){
t[i].k = -1;
t[i].status = 0;
}
//Switch para opções
while(op != 5){
switch(op){
case 1: // Inserir
cin >> k;
res1 = hash_insert(t,m,k);
cin >> op;
break;
case 2: // Pesquisar
cin >> k;
cout << hash_search(t,m,k) << endl;
cin >> op;
break;
case 3: // Remover
cin >> k;
res2 = hash_remove(t,m,k);
cin >> op;
break;
case 4: // Listar
for(i = 0; i < m-1; i++)
cout << t[i].k << ' ';
cout << t[i].k << endl;
cin >> op;
break;
}
}
return 0;
}