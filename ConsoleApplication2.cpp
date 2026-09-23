// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>;
#include <Windows.h> 
#pragma execution_character_set("utf-8")
using namespace std;
int main()
{
	SetConsoleCP(65001); // устанавливаем кодировку входящего потока данных на UTF-8 
	SetConsoleOutputCP(65001); // устанавливаем кодировку исходящего потока данных на UTF-8

	int operation{ 1 };
	float first{ 0 };
	float second{ 0 };
	float res{ 0 };

	cout << "\n Операции: \n 1. Сложить 2 числа\n 2. Вычесть первое из второго\n 3. Перемножить два числа\n 4. Разделить первое на второе\n 5. Возвести в степень N первое число\n 6. Найти квадратный корень из числа\n 7. Найти 1 процент от числа\n 8. Найти факториал из числа\n 9. Выйти из программы";

	while (true) {
		cout << "\n Выберите операцию:";
		cin >> operation;
		if (operation == 1) {
			cout << "\n Первое число:";
			cin >> first;
			cout << "\n Второе число:";
			cin >> second;
			res = first + second;
		}
		if (operation == 2) {
			cout << "\n Первое число:";
			cin >> first;
			cout << "\n Второе число:";
			cin >> second;
			res = second - first;
		}
		if (operation == 3) {
			cout << "\n Первое число:";
			cin >> first;
			cout << "\n Второе число:";
			cin >> second;
			res = second * first;
		}
		if (operation == 4) {
			cout << "\n Первое число:";
			cin >> first;
			cout << "\n Второе число:";
			cin >> second;
			res = first / second;
		}
		if (operation == 5) {
			cout << "\n Число:";
			cin >> first;
			res = first;
			cout << "\n Степень:";
			cin >> second;
			res = pow(first,second);
		}
		if (operation == 6) {
			cout << "\n Число:";
			cin >> first;
			res = sqrt(first);
		}
		if (operation == 7) {
			cout << "\n Число:";
			cin >> first;
			res = first * 0.01;
		}
		if (operation == 8) {
			cout << "\n Число:";
			cin >> first;
			second = 1;
			res = 1;
			for (int i{ 0 }; i < first; i++) {
				res = res * second;
				second++;
			}
		}
		if (operation == 9) {
			cout << "Сайонара!";
			break;
		}
		cout << "\n Результат:";
		cout << res;
	}



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
