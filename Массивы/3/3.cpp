#include <iostream>
using namespace std;
double* giveMemoryToArr(double* startPtr, int sizeOfArr);
void fillArr(double* ptrArr, int sizeOfArr);
void showArr(double* ptrArr, int sizeOfArr);
double* freeMemory(double* ptrArr);
int main()
{
	double* pArrForFill = 0;
	char userAnswer = 0;
	do
	{
		int sizeOfArray = 0;
		cout << "������ �������: ";
		cin >> sizeOfArray;
 
		pArrForFill = giveMemoryToArr(pArrForFill, sizeOfArray);
		fillArr(pArrForFill, sizeOfArray);
		showArr(pArrForFill, sizeOfArray);
		pArrForFill = freeMemory(pArrForFill);
 
		cout << "\n���������� (1). ����� (0): ";
		cin >> userAnswer;
	} while (userAnswer != '0');
 
	return 0;
}
 
double* giveMemoryToArr(double* ptrArr, int sizeOfArr)
{
	ptrArr = new double[sizeOfArr];
	return ptrArr;
}
void fillArr(double* ptrArr, int sizeOfArr)
{
	for (int i = 0; i < sizeOfArr; i++)
	{
		ptrArr[i] = (i + 1) * 0.2;		
	}
}
void showArr(double* ptrArr, int sizeOfArr)
{
	for (int i = 0; i < sizeOfArr; i++)
	{
		cout << ptrArr[i] << "  ";
	}
	cout << endl;
}
double*  freeMemory(double* ptrArr)
{
	delete[] ptrArr;
	ptrArr = 0;
	return ptrArr;
}