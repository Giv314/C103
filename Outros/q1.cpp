#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){

double matriz[50][50];
double maiorpr = 0;
double maiorsec = 0;
int ordem;

do{
cout << "Ordem da matriz (2-50): ";
cin >> ordem;
}while(!(ordem <= 50 && ordem >= 2));

for(int i = 0; i < ordem; i++){
for(int j = 0; j < ordem; j++){
cout << "Matriz [" << i+1 << "][" << j+1 << "]: ";
cin >> matriz[i][j];
}
}

for(int i = 0; i < ordem; i++){
for(int j = 0; j < ordem; j++){
if(i == j && matriz[i][j] > maiorpr)
maiorpr = matriz[i][j];
}
}
cout << "Maior(es) elemento(s) da diagonal principal: " << endl;
for(int i = 0; i < ordem; i++){
for(int j = 0; j < ordem; j++){
if(matriz[i][j] == maiorpr)
cout << matriz[i][j] << ": linha " << i+1 << ", coluna " << j+1 << endl;
}
}

for(int i = 0; i < ordem; i++){
for(int j = 0; j < ordem; j++){
if(i+j == ordem - 1 && matriz[i][j] > maiorsec)
maiorsec = matriz[i][j];
}
}

cout << "Maior(es) elemento(s) da diagonal secundaria: " << endl;
for(int i = 0; i < ordem; i++){
for(int j = 0; j < ordem; j++){
if(maiorsec == matriz[i][j])
cout << matriz[i][j] << ": linha " << i+1 << ", coluna " << j+1 << endl;
}
}


return 0;

}