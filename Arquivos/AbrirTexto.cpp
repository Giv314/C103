#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){

fstream arq, arq2;
double x, soma = 0;
char nomearquivo[10];
cout << "Digite o nome do seu arquivo: ";
cin >> nomearquivo;
arq.open(nomearquivo, ifstream::in);
while(!arq.eof()){
arq >> x;
soma += x;
}
cout << "Soma: " << soma << endl;
arq.close();
arq2.open("virus.txt", ofstream::out);
arq2 << soma;
arq2.close();

return 0;

}