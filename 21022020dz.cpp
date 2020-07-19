/*
Задание 1: В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы.
#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 100;
	int mas[size]{};
	cout << "*** Случайные числа ***" << endl;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		mas[i] = rand() % 10 + 1;
		cout << mas[i] << '\t';
	}
	int max = mas[0];
	int min = mas[0];
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] > max) max = mas[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] < min) min = mas[i];
	}
	cout << "\nМаксимальный элемент = " << max;
	cout << "\nМинимальный элемент = " << min;
}
*/
/*
Задание 2: Пользователь вводит прибыль фирмы за год(12 месяцев).Затем пользователь вводит диапазон(например, 3 и 6 – поиск между 3 - м и 6 - м месяцем).Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна с учетом выбранного диапазона.
#include <iostream>
using namespace std;
int main()
{
	int r1, r2, imax, imin;
	const int n = 12;
	double arr[n];
	cout << "Profit:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "month " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "Enter month_start, month_end:\n";
	cin >> r1 >> r2;
	imax = imin = r1 - 1;
	for (int i = r1; i < r2; i++)
	{
		if (arr[i] > arr[imax]) imax = i;
		if (arr[i] < arr[imin]) imin = i;
	}
	cout << "Max profit: month " << imax + 1 << "\n";
	cout << "Min profit: month " << imin + 1 << "\n";
	return 0;
}
*/
/*
Задание 3: В одномерном массиве, состоящем из N вещественных чисел вычислить :
• Сумму отрицательных элементов.
• Произведение элементов, находящихся между min и max элементами.
• Произведение элементов с четными номерами.
• Сумму элементов, находящихся между первым и последним отрицательными элементами.
#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите n: ";
	int n;
	cin >> n;
	const int size = 100;
	if (n < 1 || n > size)
	{
		cout << "Error" << endl;
		return 0;
	}
	cout << "***Случайные числа***" << endl;
	int a = -10;
	int b = 10;
	int mas[size]{};
	srand(time(0));
	int sum_min = 0;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % (b - a + 1) + a;
		cout << mas[i] << '\t';
		if (mas[i] < 0) sum_min = sum_min + mas[i];
	}
	cout << "\nСумма отрицательных элементов = " << sum_min;
	int pmin = 0, pmax = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < mas[pmin]) pmin = i;
		if (mas[i] > mas[pmax])	pmax = i;
	}
	pmin = pmin + 1;
	pmax = pmax + 1;
	cout << "\nПозиция минимального элемента = " << pmin;
	cout << "\nПозиция максимального элемента = " << pmax;
	pmin = pmin - 1;
	pmax = pmax - 1;
	int proizv_ot_pmin_do_pmax = 1;
	for (int i = pmin + 1; i < pmax; i++)
		proizv_ot_pmin_do_pmax *= mas[i];
	cout << "\nПроизведение элементов, находящихся между min и max элементами = " << proizv_ot_pmin_do_pmax;
	int proizv_el_s_chet_nom = 1;
	for (int i = 0; i < n; i = i + 2)
	{
		proizv_el_s_chet_nom = proizv_el_s_chet_nom * mas[i];
	}
	cout << "\nПроизведение элементов с четными номерами = " << proizv_el_s_chet_nom;
	int first = -1;
	int last = -1;
	int summ_mezhdu_firs_and_lust = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0 && first < 0)
			first = i;
		if (mas[i] < 0)
			last = i;
	}
	for (int i = first + 1; i < last; i++)
		summ_mezhdu_firs_and_lust += mas[i];
	cout << "\nПозиция первого отрицательного элемента = " << first + 1;
	cout << "\nПозиция последнего отрицательного элемента = " << last + 1;
	cout << "\nСумма элементов, находящихся между первым и последним отрицательными элементами = " << summ_mezhdu_firs_and_lust;
	return 0;
}
*/

