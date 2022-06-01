#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){


int n, i, x, cont = 0, j;
cout << "Digite o valor de n: ";
cin >> n;
for(i = 0; i < n; i++){ // f(n) = n
j = 1;
while(j < n){ //f(n) = log2(n)
x = 2*i;
cont++;
j*=2;
}
}
// t(n) = n * log2(n)
cout << cont << " repeticoes" << endl;


return 0;

}