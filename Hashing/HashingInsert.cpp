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

// Hashing
int hash_aux(int k, int m){
int res;
res = k % m; //k mod m
return res;
}
// Sondagem linear
int hashing(int k, int i, int m){
int res1; // retorno
res1 = (hash_aux(k, m)+i)% m;
return res1;
}

// Funcao que insere elementos
int hash_insert(dado t[], int m, int k){
int i = 0;
int j = 0;
do{
j = hashing(k, i, m);
if (t[j].status != 1){
t[j].k = k;
t[j].status = 1;
return j;
}else
i = i+1;
}while (i != m);
return -1;
}

// Funcao principal
int main(){
int m;
int k;
int res;
int i=0; // Contador
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
for(i = 0; i < m-1; i++)
cout << t[i].k << ' ';
cout << t[i].k << endl;

return 0;

}