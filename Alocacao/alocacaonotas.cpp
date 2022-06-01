#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

struct info{
double nota1;
double nota2;
double nota3;
double nota4;
};

int main(){
info *aluno = NULL; // Ponteiro pra alocacao
int n; // numero de alunos
double m = 0; // media de notas

// Ler o numero de alunos
cin >> n;

// Aloca memoria pra struct
aluno =  new info [n];

// Armazena os dados
for(int i = 0; i < n; i++){
cin >> aluno[i].nota1;
cin >> aluno[i].nota2;
cin >> aluno[i].nota3;
cin >> aluno[i].nota4;
}
// Mostra os dados
for(int i = 0; i < n; i++){
m += (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3 + aluno[i].nota4)/4;
}
m = m/n;
cout << fixed << setprecision(2) << m << endl;
delete [] aluno;


return 0;

}