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
		cout << " [1] - ������ ���� ���" << endl;
		cout << " [2] - �������� ���� ���" << endl << endl;
		cout << " [0] - ����� � ��������" << endl << endl;
		cout << " ������ �������� - "; cin >> Menu;
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
			cout << " --�������-- \n ������ ��������� ��������! " << endl << endl;
		}
	} while (Menu != 0);
	return 0;
}
