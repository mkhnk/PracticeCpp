#include <iostream>
using namespace std;
int main()
{
double mas[10]={1.29, 3.23, 7.98, 5.54, 8.32, 2.48, 7.1};
double *p1;
p1=&mas[0];
cout<<*p1<<endl;
p1=p1+3;
cout<<*p1<<endl;
return 0;
}