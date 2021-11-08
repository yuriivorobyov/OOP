#include "Football.h"
#include<Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int Menu;
	Game a;
	Football g;
	do {
		cout << " [1] - Ввести стан гри" << endl;
		cout << " [2] - Показати стан гри" << endl << endl;
		cout << " [0] - Вийти з програми" << endl << endl;
		cout << " Введіть значення - "; cin >> Menu;
		cout << endl;
		switch (Menu)
		{
		case 1:
			cin >> g;
			break;
		case 2:
			a = g;
			cout << a;
			cout << g;
			break;
		case 0:
			break;
		default:
			cout << " --Помилка-- \n Введіть правильне значення! " << endl << endl;
		}
	} while (Menu != 0);
	return 0;
}
