#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Fatorial
int fat(int num){
int resfat = 1;
for(int i = 1; i <= num; i++){
resfat *= i;
}
return resfat;
}

//Combina 
double combina(int m, int p){
int mfat, pfat, mpfat;
double res;
mfat = fat(m);
cout << "Fatorial de m: " << mfat << endl;
pfat = fat(p);
cout << "Fatorial de p: " << pfat << endl;
mpfat = fat(m-p);
cout << "Fatorial de m-p: (" << m-p << ") = " << mpfat << endl;
res = (mfat*1.)/(mpfat*pfat);
return res;
}

//Principal
int main(){
int m, p;
double c;
cout << "Valor de m: ";
cin >> m;
cout << "Valor de p: ";
cin >> p;
c = combina(m, p);
cout << "Valor de C: " << c << endl;
return 0;

}