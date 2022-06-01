#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main(){

int cont = 0;
int i, n;
cin >> n;
i=1;
i = n;
while (i > 1)   
{
cout << i << endl;
i /= 2;
cont++;
}

cout << "O(cont) = " << cont << endl;


return 0;

}