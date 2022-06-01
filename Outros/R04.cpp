#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Struct
struct dados{
char nome[30];
int acertos;
int erros;
int tempo;
double nf;
}equipe[10];

//Principal
int main(){
int num;
double maior = 0;
cout << "Quantas equipes? ";
cin >> num;

for(int i = 0; i < num; i++){
cin.ignore();
cout << "Nome da equipe " << i+1 << ": ";
cin.getline(equipe[i].nome, 30);
cout << "Numero de acertos da equipe " << i+1 << ": ";
cin >> equipe[i].acertos;
cout << "Numero de erros da equipe " << i+1 << ": ";
cin >> equipe[i].erros;
cout << "Tempo da equipe " << i+1 << ": ";
cin >> equipe[i].tempo;
equipe[i].nf = (5.*equipe[i].acertos - 2.*equipe[i].erros + 1.0)/(equipe[i].tempo);
cout << "Nota da equipe: " << equipe[i].nf << endl;
if (equipe[i].nf > maior)
maior = equipe[i].nf;
}

cout << "Equipes vencedoras: " << endl;
for(int i = 0; i < num; i++){
if(equipe[i].nf == maior)
cout << equipe[i].nome << ' ';
}
cout << endl;


return 0;

}