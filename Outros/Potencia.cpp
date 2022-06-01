#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){

int x, b, aux, res;
cout << "Valor de x: ";
cin >> x;
cout << "Valor de b: ";
cin >> b;
aux = x;
for(int i = 1; i < b; i++){
x *= aux;
}
cout << "Valor de x elevado a b: " << x << endl;



return 0;

}