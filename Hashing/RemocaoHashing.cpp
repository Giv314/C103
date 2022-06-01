#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

// Estrutura
struct dado{
int status; // 0-vazio, 1-ocupado, 2-removido
int k; 
};

// Hashing aux
int hash_aux(int k, int m){
int res;
res = k % m; //k mod m
if(res < 0)
res += m;
return res;
}

// Sondagem linear
int h(int k, int i, int m){
return (hash_aux(k, m)+i)% m;
}


// Insere elementos na tabela
int hash_insert(dado t[], int m, int k){
int i = 0;
int j = 0;
do{
j = h(k, i, m);
if (t[j].status != 1){
t[j].k = k;
t[j].status = 1;
return j;
}else
i = i+1;
}while (i != m);
return -1;
}

// Procura o dado
int hash_search(dado t[], int m, int k){
int i; 
int j; // Retorno da funcao hashing
i = 0;
do{
j = h(k,i,m);
if (t[j].k == k)
return j;
else
i = i + 1;
}while (t[j].status != 0 && i < m);
return -1;
}

//Remove dado
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

// Funcao principal
int main(){
int m; // Tamanho
int k; // Chaves
int res; // Retorno 
int num; // numero a ser removido
int i; // contador
dado t[30];
// Le o Tamanho do vetor
cin >> m;
// Iguala todos os status a -1
for(i = 0; i < m; i++){
t[i].k = -1;
t[i].status = 0;
}
// Le as chaves
cin >> k;
while(k!=0){
res = hash_insert(t, m, k);
cin >> k;
}
// Entrada do valor a ser removido
cin >> num;
res = hash_remove(t, m, num);
for(i = 0; i < m-1; i++)
cout << t[i].k << ' ';
cout << t[i].k << endl;
}