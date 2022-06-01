#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

// Struct de dados do produto
struct dados
{
int codigo; // codigo do produto
int quantidade; // quantidade em estoque
float preco; // preco unitario
};

// Ordena o prod
void quickSort(int tamanho, int i, int j, dados prod[]){
int esq, dir, pivo;
dados trab;
esq = i;
dir = j;
pivo = prod[(int)round((esq + dir)/2.0)].codigo;
do{
while (prod[esq].codigo < pivo)
esq++;
while (prod[dir].codigo > pivo)
dir--;
if (esq <= dir){
trab = prod[esq];
prod[esq] = prod[dir];
prod[dir] = trab;
esq++;
dir--;
}
}while (esq <= dir);
if (dir-i >= 0)
quickSort(tamanho,i,dir, prod);
if (j-esq >= 0)
quickSort(tamanho,esq,j, prod);
}

int main(){

int n; //num de produtos a serem cadastrados
int esq; // esquerda
int dir; //direita
dados prod[100];

do{
cin >> n; // Ler a quantidade de produtoa
}while(!(n <= 100));

// Ler os dados dos produtos
for(int i = 0; i < n; i++)
cin >> prod[i].codigo >> prod[i].quantidade >> prod[i].preco;
esq = 0;
dir = n-1;

// Ordenar os produtos em relação ao codigo
quickSort(n, esq, dir, prod);

// Mostrar os dados de cada produto
for(int i = 0; i < n; i++){
cout << "Codigo: " << prod[i].codigo << endl;
cout << "Quantidade em estoque: " << prod[i].quantidade << endl;
cout << fixed << setprecision(2) << "Preco unitario: R$ " << prod[i].preco << endl;
cout << endl;
}

return 0;

}