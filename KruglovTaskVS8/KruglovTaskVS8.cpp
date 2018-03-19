// KruglovTaskVS8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "ClassPI.h"

using namespace std;



void Task1();
double CustomRand();
void PrintList(double in);

int main()
{
	Task1();

	_getch();
    return 0;
}

void Task1()
{
	srand(time(0));
	vector <double> mainVector(10);
	generate(mainVector.begin(), mainVector.end(), CustomRand);
	for_each(mainVector.begin(), mainVector.end(), PrintList);

	ClassPI pi;
	cout << "\nMultiplication by PI:\n";
	transform(mainVector.begin(), mainVector.end(), mainVector.begin(), pi);
	for_each(mainVector.begin(), mainVector.end(), PrintList);

}

double CustomRand()
{
	double out = rand() % 1000 * 0.01;

	return out;
}

void PrintList(double in)
{
	cout << in << endl;
}

