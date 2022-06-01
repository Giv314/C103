#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;


int main(){
int n; // Numero de termos
int t1 = 1; // "Anterior"
int t2 = 1; // Termo 2
int aux;
cout << "Digite o numero de termos: ";
cin >> n;
// cout << '1' << ' ';
for(int i = 0; i < n/2; i++){
cout << t1 << ' ';
cout << t2 << ' ';
aux = t1 + t2;
t2 += aux;
t1 = aux;
}
cout << endl;

return 0;

}
// Seq: 1 1 2 3 5 8 13 21...