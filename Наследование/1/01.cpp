#include <iostream>
#include <string.h>
using namespace std;

class Kafel 
{	
public:
	char brand[50];
	int size_h;
	int size_w;
	double price;
	void getData(); 
};

int main()
{
	Kafel keramogranit;
	strcpy(keramogranit.brand, "������������");
	cout << "������������. ������ ������ = ";
	cin >> keramogranit.size_h;
	cout << "������������. ������ ������ = ";
	cin >> keramogranit.size_w;
	cout << "������������. ���� = ";
	cin >> keramogranit.price;
	
	Kafel keramida;
	strcpy(keramida.brand, "��������");
	cout << "��������. ������ ������ = ";
	cin >> keramida.size_h;
	cout << "��������. ������ ������ = ";
	cin >> keramida.size_w;
	cout << "��������. ���� = ";
	cin >> keramida.price;
	
	keramogranit.getData();
	keramida.getData();
	return 0;
}
void Kafel::getData()
{
	cout << brand << " = " << size_h  << 'x' << size_w << " - " << price << " ������" << endl;
};