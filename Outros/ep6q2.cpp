#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void converte(int &x, int &horas, int &minutos){
while(x >= 3600){
horas++;
x -= 3600;
}
while(x >= 60){
minutos++;
x -= 60;
}
}

int main(){
int x, horas = 0, minutos = 0;
cout << "Quantidade em segundos: ";
cin >> x;
converte(x, horas, minutos);
cout << horas << "h " << minutos << "min " << x << "seg" << endl;
return 0;

}