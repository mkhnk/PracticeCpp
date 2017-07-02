#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159
using namespace std;
class complex 
{
public:
double x;
double y;
double modul()
{
return pow(x*x+y*y,0.5);
}
double argument()
{
return atan2(y,x)*180/PI;
}
void show_complex()
{
if (y>=0)
cout<<x<<"+"<<y<<"i"<<endl; else
cout<<x<<y<<"i"<<endl;
}
};
int main()
{
complex chislo;
chislo.x=2.5;
chislo.y=-1.432;
chislo.show_complex();
cout << "Modul chisla=" << chislo.modul();
cout<<endl<<"Argument chisla="<<chislo.argument()<<endl; 
return 0;
}