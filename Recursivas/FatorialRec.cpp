#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int fatorial(int n){
if(n == 0)
return 1;
else
return n*fatorial(n-1);
}

int fib(int n){
if(n == 0 || n == 1)
return 1;
else
return fib(n-1) + fib(n-2);

}

int main(){
int n;
cin >> n;
cout << "Fatorial: " << fatorial(n) << endl;
cout << "Sequencia Fibonacci: " << fib(n) << endl;


return 0;

}