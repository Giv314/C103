#include<iostream>
#include <iomanip>

using namespace std;

// Potenciacao
double potencia(double num1, double num2){
double aux;
for(int i = 0; i < num2; i++){
num1 *= aux;
}
return num1;
}

// Fatorial
double fat(double x){
double resfat = 1;
for(int i = 0; i < x; x--){	
resfat *= x;
}
return resfat;
}

// Formula 01
double formula1(double n, double p){
double nfat, pfat, npfat;
double res;
nfat = fat(n);	
pfat = fat(p);
npfat = fat(n-p);
res = nfat/(pfat*npfat);
return res;
}
// Formula 02
double formula2(double &n, double &p){
int nfat, npfat;
double res;
nfat = fat(n);	
npfat = fat(n-p);
res = nfat/npfat;
return res;
}

//Formula 03
void formula3(double n, double p, double &res3){
int pmaisdois = p + 2;
res3 = potencia(n, pmaisdois);
}

//Formula 04
double formula4(double &x, double &y){
double  res;
res = potencia(x-1, y);
return res;
}


//Principal
int main()
{
double n, p, n2, p2, x, y;
n2 = n;
p2 = p;
double res1, res2, res3, res4;
cin >> n >> p >> x >> y;

res1 = formula1(n, p);
res2 = formula2(n2, p2);
formula3(n, p, res3);
res4 = formula4(x, y);
cout << fixed << setprecision(4) << res1 << endl;
cout << fixed << setprecision(4) << res2 << endl;
cout << fixed << setprecision(4) << res3 << endl;
cout << fixed << setprecision(4) << res4 << endl;
}
