/*Необходимо выполнить ВСЕ задания:

1.	Разработать программу, которая, используя только стандартные алгоритмы и функторы, умножает каждый элемент списка чисел с плавающей  точкой на число PI



2.	Разработать программу, которая:
a.	Реализует иерархию геометрических фигур состоящую из:
i.	Класс Shape. 
1.	Содержит информацию о положении центра фигуры (координаты x и y).
2.	Содердит метод IsMoreLeft, позволяющий определить расположена ли данная фигура левее (определяется по положению центра) чем фигура переданная в качестве аргумента
3.	Содердит метод IsUpper, позволяющий определить расположена ли данная фигура выше (определяется по положению центра) чем фигура переданная в качестве аргумента
4.	Определяет чисто виртаульную функцию рисования Draw (каждая фигура в реализации этой функци должна выводить на стандартный вывод свое название и положение цента)
ii.	Класс Circle производный от класса Shape
1.	Реализует Draw
iii.	Класс Triangle производный от класса Shape
1.	Реализует Draw
iv.	Класс Square производный от класса Shape
1.	Реализует Draw

b.	Содержит список list<Shape*>, заполенный указателями на различные фигуры

c.	С помощью стандартных алгоритмов и адаптеров выводит (Draw) все фигуры

d.	С помощью стандартных алгоритмов и адаптеров сортирует список по положению центра слева-направо (имется в виду, что в начале списка должны идти фигуры находящиеся левее, координата x ) и выводит фигуры (Draw)

e.	С помощью стандартных алгоритмов и адаптеров сортирует список по положению центра справа-налево и выводит фигуры

f.	С помощью стандартных алгоритмов и адаптеров сортирует список по положению центра сверху-вниз и выводит фигуры

g.	С помощью стандартных алгоритмов и адаптеров сортирует список по положению центра снизу-вверх и выводит фигуры


*/

#include "stdafx.h"
#include "ClassPI.h"
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

void Task1();
double CustomRand();
void PrintList(double in);

void Task2();
Shape* randShape();

int main()
{
	//Task1();
	Task2();

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

void Task2()
{
	srand(time(0));
	list<Shape*> mainList(10);
	generate(mainList.begin(), mainList.end(), randShape);
	cout << "Origin list:\n";
	for_each(mainList.begin(), mainList.end(), mem_fun(&Shape::Draw));

	cout << "\nSort by left:\n";
	
	
	/*Shape *q1 = new Circle(3, 2);
	Shape *q2 = new Triangle(1, 4);
	vector<Shape*> li;
	li.push_back(q1);
	li.push_back(q2);
	cout << (li[0]->IsMoreLeft(*q2));*/

	//sort(li.begin(), li.end(), mem_fun_ref(&Shape::IsMoreLeft));
	//for_each(li.begin(), li.end(), mem_fun(&Shape::Draw));
	
	
	
	//sort(mainList.begin(), mainList.end(), mem_fun_ref(&Shape::IsMoreLeft));
	//for_each(mainList.begin(), mainList.end(), mem_fun(&Shape::Draw));
	
	
	
	/*Shape *shapeCircle = new Circle(2, 3);
	shapeCircle->Draw();
	Shape *shape2 = new Triangle(3, 4);
	shape2->Draw();
	Shape *shape3 = new Square(5, 7);
	shape3->Draw();*/
}

Shape* randShape()
{
	int index = rand() % 3;
	int x = rand() % 50;
	int y = rand() % 50;

	if (index == 0)
	{
		Shape *shape = new Circle(x, y);
		return shape;
	}
	if (index == 1)
	{
		Shape *shape = new Triangle(x, y);
		return shape;
	}		
	if (index == 2)
	{
		Shape *shape = new Square(x, y);
		return shape;
	}
		
}