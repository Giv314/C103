#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

double fat = 1;
int x;
cin >> x;
for(int i = 1; i <= x; i++){
fat *= i;
cout << fat << endl;
}
return 0;

}