#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double fator(double x){
double fat = 1;
for(int i = 1; i <= x; i++)
fat *= i;
return fat;
}

double soma(int x, double numtermos){
double y = 0;
int i = 0, sinal = 1;
while(numtermos != 0){
y += (pow(x, i)/fator(i))*sinal;
i+=2;
sinal *= -1;
numtermos -= 1;
}
return y;
}

int main(){
int num;
double x, y;
cout << "No. termos (>= 1 e <=20): ";
cin >> num;
while(!(num >= 1 && num <= 20)){
cout << "No. termos (>= 1 e <=20): ";
cin >> num;
}
cout << "Valor de x: ";
cin >> x;
y = soma(x, num);
cout << "cos(x) = " << y << endl;
return 0;
}