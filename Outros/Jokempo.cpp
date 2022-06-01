#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int verifica(int jog, int res){
if(jog == 1 && res == 3 || jog == 2 && res == 1 || jog == 3 && res == 2)
return 1;
else
if(jog == res)
return 2;
else
return 0;
}

int jogcomp(int jog, int comp){
if(comp % 2 == 0)
return 1;
if(comp % 3 == 0)
return 2;
else
return 3;
}

int main(){
int jog; // Jogada
// Implementa valores aleatorios
unsigned seed = time(0);
srand(seed);
int comp = rand(); // Valor do computador
int res; // Jogada do computador
int res2 = 1; // 0-perdeu, 1-ganhou
//Printa mensagem na tela e pergunta a jogada
cout << "[1] Pedra" << endl << "[2] Papel" << endl << "[3] Tesoura" << endl;
cout << "Digite sua jogada: ";
cin >> jog;
while(jog > 3 || jog < 1){
cout << "Digite sua jogada: ";
cin >> jog;
}
// Funcao verifica quem ganhou
res = jogcomp(jog, comp);
switch (res){
case 1 : cout << "O computador jogou pedra!" << endl;
break;
case 2: cout << "O computador jogou papel!" << endl;
break;
case 3: cout << "O computador jogou tesoura!" << endl;
}
// Comparacoes finais
res2 = verifica(jog, res);
switch(res2){
case 0: cout << "Vc Perdeu. Tente novamente. " << endl;
break;
case 1: cout << "Parabens. Vc ganhou! " << endl;
break;
case 2: cout << "Deu empate!" << endl;
}

return 0;

}