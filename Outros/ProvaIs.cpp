#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int conta(int n, int k){
if(n == 0)
return 0;
else
return conta(n/10, k) + (n%10 == k);
}


int main(){
int n, k, a, b, res;
cin >> a >> b;
while((a!= -1) && (b!= -1)){
n = a;
k = b;
res = conta(n, k);
cout << res << endl;
cin >> a >> b;
}



return 0;

}