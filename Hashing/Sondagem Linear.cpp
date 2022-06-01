#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int hash_aux(int k, int m){
int res;
res = k % m; //k mod m
if(res < 0)
res += m; // soma m se res < 0
return res;
}

int hash1(int k, int i, int m){
int res1; // retorno
res1 = (hash_aux(k, m)+i)% m;
return res1;
}

int main(){
int k; // chave
int m; // tamanho
int i; // contador
// Ler K e m e mostrar o resultado
cin >> k >> m;
for(i=0; i < m-1; i++)
cout << hash1(k,i,m) << ' ';
cout << hash1(k,i,m) << endl;
return 0;

}