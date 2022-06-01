#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Funcao k mod m
int h1(int k, int m)
{
    int res;
    res = k % m; //k mod m
    if(res < 0)
        res += m;
    return res;
}

//Funcao para colisoes
int h2(int k, int m)
{
    return 1 + (k%(m-1));
}
// Funcao DoubleHashing
int hash1(int k, int m, int i)
{
    int res;
    res = h1(k,m)+i*h2(k,m)%m;
    if(res < 0)
        res += m;
    if(res >= m)
        res -= m;
    return res;
}


int main()
{
    int k; // chave
    int m; // tamanho
    int i; // contador
// Ler K e m e mostrar o resultado
    cin >> k >> m;
    for(i=0; i < m-1; i++)
        cout << hash1(k, m, i) << ' ';
    cout << hash1(k, m, i) << endl;
    return 0;

}
