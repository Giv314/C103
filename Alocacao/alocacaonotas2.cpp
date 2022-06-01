#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

struct aluno
{
    double n1;
    double n2;
    double n3;
    double n4;
};

int main()
{
    int quant;
    aluno *notas;
    double media;
    double meme = 0; // Media da media
// Lendo a quantidade de alunos
    cout << "Quantidade de alunos: ";
    cin >> quant;
    notas = new aluno [quant];
// Lendo as notas
    for(int i = 0; i < quant; i++)
    {
        cout << "Aluno " << i+1 << ": ";
        cin >> notas[i].n1;
        cin >> notas[i].n2;
        cin >> notas[i].n3;
        cin >> notas[i].n4;
    }

    cout << "Media de cada aluno: " << endl;
    for(int i = 0; i < quant; i++)
    {
        cout << "Aluno " << i+1 << ": ";
        media = (notas[i].n1 + notas[i].n2 + notas[i].n3 + notas[i].n4)/4;
        cout << media << endl;
        meme += media;
    }
    meme = meme/quant;
    cout << "Media da media: " << meme << endl;
// Desalocar memoria
    delete [] notas;
}
