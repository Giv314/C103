// Bibliotecas
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Armazenar os dados de cada barraca
struct dados{
char nome[40];
double peso;
double preco;
}barraca[50];

// Funcao principal
int main(){
// Declaracao das variaveis
int num;
double precomedio = 0;

do{
cout << "Digite o numero de barracas participantes (1-50): ";
cin >> num;
}while(!(num > 0 && num <= 50));

for(int i = 0; i < num; i++){
cin.ignore();
cout << "Digite o nome da barraca " << i+1 << ": ";
cin.getline(barraca[i].nome, 50);
cout << "Digite o peso da porcao (gramas): ";
cin >> barraca[i].peso;
cout << "Digite o preco da porcao (R$): ";
cin >> barraca[i].preco;
precomedio += barraca[i].preco;
}
//Calculo do preco medio
precomedio /= num;

//Saida de dados
cout << "Preco medio: " << precomedio << endl;
cout << "Barracas com preco abaixo do preco medio: " << endl;
for(int i = 0; i < num; i++){
if(barraca[i].preco < precomedio)
cout << barraca[i].nome << endl;
}


return 0;

}