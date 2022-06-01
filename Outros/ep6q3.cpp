#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double maior(double vet[], int num){

double y;
y = vet[0];
for(int i = 1; i <= num; i++){
if(y <= vet[i])
y = vet[i];
}
return y;
}

int main(){
int num;
double vet[5];
double y;
cout << "Quantos elementos (1-5): ";
cin >> num;
while(num > 5 || num < 1){
cout << "Quantos elementos (1-5): ";
cin >> num;
}
cout << "Digite os 5 numeros: ";
for(int i = 0; i < num; i++){
cin >> vet[i];
}
y = maior(vet, num);
cout << "Maior elemento: " << y << endl;
return 0;

}