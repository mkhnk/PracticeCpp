#include <iostream>
using namespace std;
int main()
{
float PI=3.14159, *p1, *p2;
p1=p2=&PI;
cout<<"�� ������ p1="<<p1<<" �������� *p1="<<*p1<<"\n";
cout<<"�� ������ p2="<<p2<<" �������� *p2="<<*p2<<"\n";
return 0;
}