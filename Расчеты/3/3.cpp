#include <iostream>
using namespace std;
int main()
{
float PI=3.14159;
float *p1;
double *p2;
p1=&PI;
p2=(double *)p1;
cout<<"�� ������ p1="<<p1<<" �������� *p1="<<*p1<<"\n";
cout<<"�� ������ p2="<<p2<<" �������� *p2="<<*p2<<"\n";
return 0;
}