#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;


double fibonacci(int num1){

double res;
for (int i = 1; i <= num1; i++) {
res = num1 + i;
}

return res;
}



void fatorial(double &py, double &pfat){
pfat = 1;
for(int i = 1; i < py; py --){
pfat *= py;
}
}


double somatoria(double a, double b, double x){
double soma = 0;

while(a <= b){
soma += a;
a += x;
}

return soma;

}

void funcao(){
int c;
double a, b, x, soma, fat;
double y, valfib, n;
cin >> a >> b >> x;
soma = somatoria(a, b, x);
cin >> y;
fatorial(y, fat);
cin >> n;
valfib = fibonacci(n);
cout << soma << endl;
cout << fat << endl;
cout << valfib << endl;

}

int main(){
int c;
double a, b, x, soma, fat;
double y, valfib, n;

cin >> c;
switch (c){
case 1: 
cin >> a >> b >> x;
soma = somatoria(a, b, x);
cout << soma << endl;
break;
case 2: 
cin >> y;
fatorial(y, fat);
cout << fat << endl;
break;
case 3:
cin >> n;
valfib = fibonacci(n);
cout << valfib << endl;
break;
case 4:
funcao();

break;
default: cout << "Opcao nao encontrada!" << endl;
}


return 0;

}