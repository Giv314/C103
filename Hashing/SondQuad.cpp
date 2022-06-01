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

//Funcao Sondagem quadratica
int hash1(int k, int i, int m, int c1, int c2){
int aux; // Aux para k mod m
int res; // Valor da sond.quadratica
aux = hash_aux(k, m);
// Calculo da sondagem quadratica
res = (aux+c1*i+c2*i*i)%m;
return res;

}

int main(){
int k; // chave
int m; // tamanho
int i; // contador
int c1, c2; // Constantes
// Ler K e m e mostrar o resultado
cin >> k >> m >> c1 >> c2;
for(i=0; i < m-1; i++)
cout << hash1(k, i, m, c1, c2) << ' ';
cout << hash1(k, i, m, c1, c2) << endl;
return 0;

}