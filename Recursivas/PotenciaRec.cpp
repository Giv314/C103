#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

// Calcular a^n
int recursiva(int a, int n){

if(n == 0)
return 1;
else
return a*recursiva(a, n-1);

}


int main(){
int a, n, res;
// Leitura de a e n
cin >> a >> n;
// Calcular a^n
res = recursiva(a, n);
// Mostrar a^n
cout << res << endl;


return 0;

}