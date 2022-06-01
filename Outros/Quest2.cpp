#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <fstream>
using namespace std;

struct produto{

char nome[50];
int valor;
int quantidade;

}x[100], y[100];


void busca_produtos(produto x[], int &quantidade_produtos){

quantidade_produtos = 0;
ifstream arq;
arq.open("Supermercado.txt", ifstream::in);

while(!arq.eof()){
arq.getline(x[quantidade_produtos].nome, 50);
arq >> x[quantidade_produtos].valor >> x[quantidade_produtos].quantidade;
arq.ignore();
quantidade_produtos++;

}

arq.close();

}



int main(){

int quant;
int soma = 0;
char c;
busca_produtos(x, quant);
cin >> c;

while (c != 'S'){
for(int i = 0; i < quant; i++){
cin >> y[i].nome;
if(strcmp(y[i].nome, x[i].nome) != 0)
cout << "Produto nao encontrado";
else{
y[i].valor = x[i].valor;
soma += y[i].valor;
cout << "Total: " << soma << endl;
}
cin >> y[i].quantidade;
if(y[i].quantidade > x[i].quantidade)
cout << "Quantidade indisponivel" << endl;
}
}


return 0;

}