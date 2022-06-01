#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Calcula soma dos numeros pares de 1 até n
int recursiva(int n){

if(n == 0)
return 0;
else
return n+recursiva(n-2);

}

int main(){
int n, ret = 0;
// Ler n
cin >> n;
if(n%2 == 1)
n--;
// Calcular soma dos numeros pares de 1 até n
ret = recursiva(n);
// Mostrar o resultado
cout << "Soma: " << ret << endl;
return 0;
}