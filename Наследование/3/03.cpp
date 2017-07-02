#include <iostream>
#include <string>
#include <clocale>
using namespace std;
class Voditel
{
	public: 
	string name;
	int age;
};
class Shofer:Voditel
{
public:
	double rasstoyanie;
	double money;
 
	friend void vvodShofer(Shofer *massive, int N)
	{
		for(int i=0; i<N; i++)
		{
			cout << "Введите имя водителя: ";
			cin >> massive[i].name;
			cout << "Введите возраст: ";
			cin >> massive[i].age;
			cout << "Введите расстояние: ";
			cin >> massive[i].rasstoyanie;
			cout << "Введите тариф: ";
			cin >> massive[i].money;
		}
	}
	double Cost()
	{
		return (this->rasstoyanie)*(this->money);
	}
	friend Shofer molodoyShofer(Shofer *massive, int N)
	{
		int min=100;
		int kolvo=0;
		for(int i=0;i<N;i++)
		{
			if((massive[i].age)<min)
			{
				kolvo=i;
				min=massive[i].age;
			}
		}
		return massive[kolvo];
	}
	friend Shofer maxShofer(Shofer *massive,int N)
	{
		double max=0.0;
		int kolvo=0;
		for(int i=0;i<N;i++)
		{
			if((massive[i].Cost())>max)
			{
				max=massive[i].Cost();
				kolvo=i;
			}
		}
		return massive[kolvo];
	}
	friend ostream&  operator << (ostream & os, Shofer massive)
	{
		os << "Имя - " << massive.name << " | Возраст - " << massive.age << " | Расстояние - " << massive.rasstoyanie << " | Тариф - " << massive.money;
		return os;
	}
};
int main()
{
	int N;
	cout << "Введите количество водителей: ";
	cin >> N;
	Shofer *Shofers=new Shofer[N];
	vvodShofer(Shofers,N);
	
	cout << "Список всех водителей:" << endl;
	for(int i=0; i<N; i++)
	{
		cout << Shofers[i] << endl;
	}
	cout << "Водитель с максимальным тарифом:" << endl;
	cout << maxShofer(Shofers,N) << endl;
	cout << "Самый молодой водитель:" << endl;
	cout << molodoyShofer(Shofers,N) << endl;
	delete [] Shofers;
	return 0;
}