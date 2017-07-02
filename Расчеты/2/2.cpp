#include <iostream>
using namespace std;
int main()
{
float PI=3.14159, *p1, *p2;
p1=p2=&PI;
cout<<"По адресу p1="<<p1<<" хранится *p1="<<*p1<<"\n";
cout<<"По адресу p2="<<p2<<" хранится *p2="<<*p2<<"\n";
return 0;
}