#include <iostream>
#include <cmath>

using namespace std;

void geo21(); //Декларування функції типу void(задача geo21)

void SumOfSeries20();//Декларування функції типу void(задача Solve20)
double factorial(int temp);

void SumOfSeries28();//Декларування функції типу void(задача Solve28)

int main()
{
	int choice = 0; //Декларування змінної задля choice

	while (choice != 4) {
		cout.clear();
		cout << "Виберiть яку з цих задач будете вирiшувати: "
			"\n1. Geometry#21"
			"\n2. Solve20"
			"\n3. Solve28"
			"\n4. Вийти з програми" << endl;


		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			// Geo21
			geo21();
			break;
		}
		case 2:
		{
			// Solve20
			SumOfSeries20();
			break;
		}
		case 3:
		{
			// Solve28
			SumOfSeries28();
			break;
		}
		case 4:
		{
			cout << "Програма завершена";
			break;
		}
		default:
		{
			cout << "Такого варiанту немає\n";
			break;
		}
		}
	}
}

void geo21() { // Функція типу void, що не повертає значень
	float x, y, r; // Декларування змінних типу float
	bool ar1, ar2; // Декларування змінних типу bool
	int n, count = 0;

	cout << "Кількість разів: ";
	cin >> n;

	cout << "Уведiть радiус кола: ";
	cin >> r;

	for (int i = 1; i <= n; i++)
	{

		if (r > 0)
		{
			cout << "Уведiть точку за кординатою х : ";
			cin >> x;
			cout << "Уведiть точку за кординатою y : ";
			cin >> y;


			ar1 = pow((x - 0), 2) + pow((y - 0), 2) < pow(r, 2) && y > 0 && x > 0 && y > x;; //Рівняння першої фігури(верхньої)
			ar2 = pow((x - 0), 2) + pow((y - 0), 2) > pow(r, 2) && y < x && x<0 && y>-2 * r; //Рівняння другої фігури(нижньої)

			if (ar1 || ar2) {
				count++;
				cout << "In" << endl;
			}
			else {

			}

		}
		else {
			cout << "Радіус не може бути від'ємним" << endl;
		}
	}
	cout << "Лічильник : " << count << " з " << n << endl;
}

void SumOfSeries20()
{
	int k = 0, n;
	const double pi = 3.14;
	double x;

	cout << "Введіть х: ";
	cin >> x;

	cout << "Обмеження n: ";
	cin >> n;


	double sum = 0;


	if (!cin || n < 0)
	{
		cout << "Неправильне введення даних" << endl;
	}
	else
	{
		for (k; k <= n; k++)
		{
			int count = 0;
			float rad = x * 180.0 / pi;
			cout << rad << endl;
			
			if (fabs(-1 + cos(rad)) < 1) {
				double part1 = pow(-1, k) * pow((-1 + cos(rad)), k);
				double part2 = k;

				double solving = -1.0 * (part1 / part2);

				sum += solving;
				solving = 0;

				count = k % 3;

				if (count == 2) {
					cout << "Сума ряду: " << sum << endl;
				}
			}
			else {
				cout << "|-1 + cos(x)| не менше за 1" << endl;
			}
		}
	}
}

double factorial(int temp)
{
	int equals = 1;
	for (int i = 1; i <= temp; i++)
	{
		equals *= i;
	}
	return equals;
}

void SumOfSeries28()
{
	int k = 1;
	const double pi = 3.14, e = 2.718;
	double x, g = 1E+7;
	
	cout << "Введіть х: ";
	cin >> x;

	double sum = 0;

	do
	{
		k++;
		int count = 0;
		int temp = (2 * k) + 1;

		double part1 = pow(e, temp) + k;
		double part2 = sqrt(factorial(k)*1.0);

		double solving = part1 / part2;

		sum += solving;
		solving = 0;

		count = k % 3;

		if (count == 2) {
			cout << "Сума ряду: " << sum << endl;
		}
	} while (sum < g);
}