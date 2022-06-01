#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void CalcularTabuada(int num){


for(int i = 1; i <= 10; i++){

cout << num << " X " << i << " = " << num*i << endl;


}
}



int main(){

int n;
cin >> n;
CalcularTabuada(n);


return 0;

}