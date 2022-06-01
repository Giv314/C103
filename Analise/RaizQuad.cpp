#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

// Calculo da raiz quadrada
double raiz(double x, double xzero, double e){
double num1; 
num1 = abs((xzero*xzero) - x);
if(num1 <= e)
return xzero;
else
num1 = ((xzero*xzero)+ x)/(2*xzero);
return raiz(x, num1, e);
}

int main(){
double x, xzero, res;
double e;
// Entrar com os dados
cin >> x >> xzero >> e;
// Calcular a raiz
res = raiz(x, xzero, e);
// Mostrar o resultado
cout << fixed << setprecision(2) << res << endl;
return 0;

}