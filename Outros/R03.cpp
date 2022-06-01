#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Potencia
int potencia(int x, int num){
int aux;
aux = x;
if(num == 0)
x = 1;
else{
for(int i = 1; i < num; i++){
x *= aux;
}
}
return x;
}


//Fatorial
int fator(int x){
int resfat = 1;
for(int i = 1; i <= x; i++){
resfat *= i;
}
return resfat;
}


//Soma
double soma(int num, int x){
int fat, pot; 
double res = 0;
double res2 = 0;
double sinal = -1;
int aux = 0;
for(int i = 0; i < num; i++){
pot = potencia(x, aux);
fat = fator(aux);
sinal *= (-1);
res = (1.0*pot)/(fat);
res *= sinal;
res2 += res;
aux += 2;
}
return res2;
}


//Principal
int main(){
int x, num;
double res;
do{
cout << "No. termos (>= 1 e <= 20): ";
cin >> num;
}
while(!(num >= 1 && num <= 20));
cout << "Valor de x: ";
cin >> x;
res = soma(num, x);
cout << "cos(x) = " << fixed << setprecision(4) << res << endl;
return 0;
}