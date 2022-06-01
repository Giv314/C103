#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
int n, vet[90], x, cont = 0;

do{

cin >> n;

}while(!(n <= 10));

for(int i = 0; i < n; i++){
cin >> vet[i];
}

cin >> x;
cout << "X: " << x << endl;
for(int i = 0; i < n; i++){
if(vet[i] == x && cont == 0){
cout << "Posicao no vetor: ";
cont++;
}
if(vet[i] == x && cont != 0){
cout << i << ' ';
cont++;
}
}
if(cont == 0)
cout << "Valor nao encontrado no vetor." << endl;

cout << endl;


return 0;

}