#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstring>
using namespace std;

struct dados{
char nome[30];
int numacertos;
int numerros;
int tempo;
double nf;

}equipe[10];

int main(){
int num;
double maior = 0;
do{
cout << "Quantas equipes? ";
cin >> num;
}while(!(num <= 10 && num > 0));

for(int i = 0; i < num; i++){
cin.ignore();
cout << "Nome da equipe " << i+1 << ": " ;
cin.getline(equipe[i].nome, 30);
cout << "Numero de acertos: ";
cin >> equipe[i].numacertos;
cout << "Numero de erros: ";
cin >> equipe[i].numerros;
cout << "Tempo (Minutos): ";
cin >> equipe[i].tempo;
equipe[i].nf = (5.*equipe[i].numacertos - 2*equipe[i].numerros + 1)/equipe[i].tempo;
if(equipe[i].nf > maior)
maior = equipe[i].nf;
}

cout << "Equipe(s) vencedora(s): ";
for(int i = 0; i < num; i++){
if(maior = equipe[i].nf)
cout << equipe[i].nome << endl;
}

return 0;

}