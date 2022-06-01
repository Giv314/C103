#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){

double matriz[10][10];
int i, j, n1;
double s1 = 0, s2 = 0;
do{
cout << "Digite a ordem da matriz (1-10): ";
cin >> n1;
}while(n1 > 10 || n1 < 1);


cout << "Digite os elementos da matriz: " << endl;
for(int i = 0; i < n1; i++){
for(int j = 0; j < n1; j++){
cout << "Matriz " << "[" << i << "][" << j << "]: ";
cin >> matriz[i][j];
}
}
cout << "Matriz:" << endl;
for(int i = 0; i < n1; i++){
for(int j = 0; j < n1; j++){
cout << matriz[i][j] << "\t";
}
cout << endl;
}

for(int i = 0; i < n1; i++){
for(int j = 0; j < n1; j++){
if(i < j)
s1+= matriz[i][j];
else
if(i > j)
s2 += matriz[i][j];
}
}
cout << endl;
cout << "Soma dos elementos acima da diagonal principal = " << s1 << endl;
cout << "Soma dos elementos abaixo da diagonal principal = " << s2 << endl;

return 0;

}