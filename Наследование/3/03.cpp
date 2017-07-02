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
			cout << "������� ��� ��������: ";
			cin >> massive[i].name;
			cout << "������� �������: ";
			cin >> massive[i].age;
			cout << "������� ����������: ";
			cin >> massive[i].rasstoyanie;
			cout << "������� �����: ";
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
		os << "��� - " << massive.name << " | ������� - " << massive.age << " | ���������� - " << massive.rasstoyanie << " | ����� - " << massive.money;
		return os;
	}
};
int main()
{
	int N;
	cout << "������� ���������� ���������: ";
	cin >> N;
	Shofer *Shofers=new Shofer[N];
	vvodShofer(Shofers,N);
	
	cout << "������ ���� ���������:" << endl;
	for(int i=0; i<N; i++)
	{
		cout << Shofers[i] << endl;
	}
	cout << "�������� � ������������ �������:" << endl;
	cout << maxShofer(Shofers,N) << endl;
	cout << "����� ������� ��������:" << endl;
	cout << molodoyShofer(Shofers,N) << endl;
	delete [] Shofers;
	return 0;
}