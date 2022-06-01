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
return (1+k)%(m-1);
}
// Funcao DoubleHashing
int hash1(int k, int i, int m){
int res;
res = h1(k,m)+i*h2(k,m)%m;
cout << res << endl;
if(res < 0)
res += m;
if(res >= m)
res -= m;
return res;
}

// Funcao que insere elementos
int hash_insert(dado t[], int m, int k){
int i = 0;
int j = 0;
do{
j = hash1(k, i, m);
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
for(int i = 0; i < m; i++)
cout << t[i].k << ' ';
cout << endl;

return 0;

}