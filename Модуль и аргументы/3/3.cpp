#include <iostream> 
#include <string> 
#include <math.h> 
#define PI 3.14159 
using namespace std; 
class complex
{
public:
complex();
double modul();
double argument();
private: double x; double y;
void show_complex();
};
int main()
{
complex chislo;
cout<<"Modul kompleksnogo chisla="<<chislo.modul(); 
cout<<endl<<"Argument kompleksnogo chisla="<<chislo.argument()<<endl;
return 1;
}
complex::complex()
{
cout<<"Vvedite x\t"; cin>>x; 
cout<<"Vvedite y\t"; cin>>y; 
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