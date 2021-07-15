#include <iostream>
#include <cmath>
#include "Koren5.h"
#include "Sr_zn_mas.h"
#include"week.h"

using namespace std;
int main()
{

	int Chislo, Stepen;
	double Result = 0;
	
	cout << "Enter chislo:\n";
	cin >> Chislo;
Result = VichWithDifffff(Chislo, 5);
cout << "\nresult = " << Result;

}
//return 0;
 
//2 задача
/* int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите массив a[i]: " << endl;
	int n;
	cout << "n=";
	cin >> n;

	double* a = new double[n];

	for (int i = 0; i < n; i++)
	{

		cin >> a[i];
	}
	
	cout << "\nSr=" << Work(a, n) << "\n";

	delete[]a;
	system("pause");
	return 0;
} */

//3 задача
/* int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите дату:";
	int Date(int D, int M, int Y);
	int D, M, Y;
	char C;
	string S[7] = { "Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота" };
	cin >> D >> C >> M >> C >> Y;
	cout << S[Date(D, M, Y)] << endl;

	system("pause");
	return 0;
}
*/
	