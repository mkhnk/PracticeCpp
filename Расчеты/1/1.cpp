#include <iostream> 
#include <math.h> 
#define PI 3.14159 
using namespace std;
class figure
{
public:
int n;
float *p;
figure();
float perimetr();
virtual float square();
virtual void show_parametri();
};
figure::figure()
{
cout<<"Это абстрактный конструктор"<<endl;
}
float figure::perimetr()
{
int i;
float psum;
for(psum=0,i=0;i<n;psum+=p[i],i++);
return psum;
}
float figure::square()
{
cout<<"Квадратная фигура не абстрактна"<<endl;
return 0;
}
void figure::show_parametri()
{
cout<<"Абстрактная фигура";
}
class _circle:public figure
{
public:
_circle();
float perimetr();
virtual float square();
virtual void show_parametri();
};
class RecTangle:public figure
{
public:
RecTangle();
virtual float square();
virtual void show_parametri();
};
int main()
{
_circle RR;
RR.show_parametri(); 
RecTangle PP; 
PP.show_parametri();
}
_circle::_circle()
{
cout<<"Параметры окружности"<<endl;
n=1;
p=new float[n]; cout<<"Введите радиус = "; 
cin>>p[0];
}
float _circle::perimetr()
{
return 2*PI*p[0];
}
float _circle::square()
{
return PI*p[0]*p[0];
}
void _circle::show_parametri()
{
cout<<"Это окружность"<<endl;

cout<<"Радиус="<<p[0]<<endl;
cout<<"Периметр="<<perimetr()<<endl;
cout<<"Площадь="<<square()<<endl;
}
RecTangle::RecTangle()
{
cout<<"Параметры прямоугольника"<<endl;
n=4;
p=new float[n];
cout<<"Введите длину сторон = ";
cin>>p[0]>>p[1];
p[2]=p[0];
p[3]=p[1];
}
float RecTangle::square()
{
return p[0]*p[1];
}
void RecTangle::show_parametri()
{
cout<<"Это прямоугольник"<<endl;
cout<<"a="<<p[0]<<" b="<<p[1]<<endl;
cout<<"Периметр="<<perimetr()<<endl;
cout<<"Площадь="<<square()<<endl;
}