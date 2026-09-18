// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
	int operation{ 1 };
	int first{ 0 };
	int second{ 0 };
	int res{ 0 };

	while (true) {
		cout << "\n Choose operation:";
		cin >> operation;
		if (operation == 1) {
			cout << "\n First number:";
			cin >> first;
			cout << "\n Second number:";
			cin >> second;
			res = first + second;
		}
		if (operation == 2) {
			cout << "\n First number:";
			cin >> first;
			cout << "\n Second number:";
			cin >> second;
			res = second - first;
		}
		if (operation == 3) {
			cout << "\n First number:";
			cin >> first;
			cout << "\n Second number:";
			cin >> second;
			res = second * first;
		}
		if (operation == 4) {
			cout << "\n First number:";
			cin >> first;
			cout << "\n Second number:";
			cin >> second;
			res = first / second;
		}
		if (operation == 5) {
			cout << "\n Number:";
			cin >> first;
			res = first;
			cout << "\n Degree:";
			cin >> second;
			res = pow(first,second);
		}
		if (operation == 6) {
			cout << "\n Number:";
			cin >> first;
			res = sqrt(first);
		}
		if (operation == 7) {
			cout << "\n Number:";
			cin >> first;
			res = first * 0.01;
		}
		if (operation == 8) {
			cout << "\n Number:";
			cin >> first;
			second = 1;
			res = 1;
			for (int i{ 0 }; i < first; i++) {
				res = res * second;
				second++;
			}
		}
		if (operation == 9) {
			break;
		}
		cout << "\n Result:";
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
