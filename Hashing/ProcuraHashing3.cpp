#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

// Estrutura
struct dado{
int status;
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
int res1; // retorno
res1 = (hash_aux(k, m)+i)% m;
return res1;
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

// Funcao principal
int main(){
int m; // Tamanho
int k; // Chaves
int res; // Retorno 
int num; // numero a ser procurado
dado t[30];
// Le o Tamanho do vetor
cin >> m;
// Iguala todos os status a -1
for(int i = 0; i < m; i++){
t[i].k = -1;
t[i].status = 0;
}
// Le as chaves
cin >> k;
while(k!=0){
res = hash_insert(t, m, k);
cin >> k;
}
// Entrada do valor a ser procurado
cin >> num;
res = hash_search(t, m, num);
if(res == -1)
cout << "Chave " << num << " nao encontrada" << endl;
else
cout << "Chave " << num << " encontrada na posicao " << res << endl;
return 0;

}