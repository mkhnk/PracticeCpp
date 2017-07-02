#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159
using namespace std;
class complex {
public:
void vvod(); 
double modul(); 
double argument();
private:
double x; 
double y;
void show_complex(); 
};
void complex::vvod()
{
cout<<"Vvedite x\t"; cin>>x; cout<<"Vvedite y\t"; cin>>y;
show_complex();
}
double complex::modul()
{
return pow(x*x+y*y,0.5);
}
double complex::argument()
{
return atan2(y,x)*180/PI;
}
void complex::show_complex()
{
if (y>=0) cout<<x<<"+"<<y<<"i"<<endl; else cout<<x<<y<<"i"<<endl;
}
int main()
{
complex chislo; 
chislo.vvod();
cout<<"Modul kompleksnogo chisla="<<chislo.modul(); 
cout<<endl<<"Argument kompleksnogo chisla="<<chislo.argument()<<endl;
return 0;
}