#include <iostream>
using namespace std;
class Children
{
	char name[50];
	char surname[50];
	int age;
public:
	void fillData();
	void showData(); 
};

int main()
{
	Children deti1;
	Children deti2;

	cout << "Внесите данные!\n";
	deti1.fillData();
	deti2.fillData();
	deti1.showData();
	deti2.showData();

	return 0;
}
void  Children::fillData()
{
	cout << "Имя: ";
	cin.getline(name, 50);
	cout << "Фамилия: ";
	cin.getline(surname, 50);
	cout << "Возраст: ";
	cin >> age;
	cin.get();
}

void  Children::showData()
{
	cout << name << " " << surname << " " << age << " лет\n";
}