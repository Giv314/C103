#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){

double matriz[10][10];
int i, j, n1;
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
cout << "Elementos da diagonal principal: ";
for(int i = 0; i < n1; i++){
for(int j = 0; j < n1; j++){
if(i == j)
cout << matriz[i][j] << " ";
}
}
cout << endl;

cout << "Elementos da diagonal secundaria: ";
for(int i = 0; i < n1; i++){
for(int j = 0; j < n1; j++){
if(i + j == n1 - 1)
cout << matriz[i][j] << " ";
}
}
cout << endl;


return 0;

}