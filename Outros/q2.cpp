#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Calculo da potencia
int potencia(int x, int exp){
int res = 1;
int aux = x;
if(exp == 0){
res = 1;
}else{
for(int i = 0; i < exp; i++)
res *= aux;
}
return res;
}

//Calculo do Fatorial
int fatorial(int x){
int resfat = 1;
for(int i = 1; i <= x; i++){
resfat *= i;
}
return resfat;
}

//Calculo de SX
double SX(int x, int n){
double res, res2;
int pot;
int fat;
int aux = 0;
int sinal = 1;
for(int i = 0; i < n; i++){
pot = potencia(x, aux);
fat = fatorial(aux);
res = (1.0*pot)/(fat)*sinal;
res2 += 1.0*res;
sinal *= -1;
aux += 2;
}
return res2;
}

//Funcao principal
int main(){
int n, x;
double res;
do{
cout << "Quantos termos? ";
cin >> n;
}while(!(n >= 1 && n <= 20));
cout << "Valor de x: ";
cin >> x;
res = SX(x, n);
cout << "S(x) = " << res << endl;

return 0;

}