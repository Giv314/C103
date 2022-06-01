#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void converte(double a, double b, double c, double &ro, double &tet, double &fi){

ro = sqrt(pow(a, 2) + pow(b, 2) + pow(c,2));
tet = (atan(b/a))*180/3.14159;
fi = (acos(c/ro))*180/3.14159;
return;

}


int main(){

double x, y, z, ro, tet, fi;
cout << "Valor de x: ";
cin >> x;
cout << "Valor de y: ";
cin >> y;
cout << "Valor de z: ";
cin >> z;
converte(x, y, z, ro, tet, fi);
cout << "P(" << fixed << setprecision(0) << ro << ";";
cout << fixed << setprecision(0) << tet << ";"; 
cout << fixed << setprecision (0) << fi << ")" << endl;

return 0;

}