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
	strcpy(keramogranit.brand, "Керамогранит");
	cout << "Керамогранит. Высота кафеля = ";
	cin >> keramogranit.size_h;
	cout << "Керамогранит. Ширина кафеля = ";
	cin >> keramogranit.size_w;
	cout << "Керамогранит. Цена = ";
	cin >> keramogranit.price;
	
	Kafel keramida;
	strcpy(keramida.brand, "Керамида");
	cout << "Керамида. Высота кафеля = ";
	cin >> keramida.size_h;
	cout << "Керамида. Ширина кафеля = ";
	cin >> keramida.size_w;
	cout << "Керамида. Цена = ";
	cin >> keramida.price;
	
	keramogranit.getData();
	keramida.getData();
	return 0;
}
void Kafel::getData()
{
	cout << brand << " = " << size_h  << 'x' << size_w << " - " << price << " рублей" << endl;
};