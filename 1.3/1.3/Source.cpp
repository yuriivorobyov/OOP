#include <iostream>
#include <Windows.h>
#include "Point.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i, n, s;
    float x, y;
    const int con = 5;
    Point p[con];
    do
    {
        cout << "\t Виберіть операцію:" << endl;
        cout << "1: Задати точку" << endl;
        cout << "2: Вивести точку з номером" << endl;
        cout << "3: Вивести всі точки" << endl;
        cout << "4: Переміщення точки по осі X" << endl;
        cout << "5: Переміщення точки по осі Y" << endl;
        cout << "6: Відстань між двома точками" << endl;
        cout << "0: Вихід з програми" << endl;
        cin >> s;
        switch (s)
        {
        case 1:
            cout << "Введіть номер точки:";
            cin >> i;
            cout << "Задайте координати точки x y:";
            cin >> x;
            cin >> y;
            p[i].Init(x, y);
            break;
        case 2:
            cout << "Введіть номер точки:";
            cin >> i;
            p[i].toString();
            break;
        case 3:
            for (i = 0; i < con; i++)
                p[i].toString();
            break;
        case 4:
            cout << "Введіть номер точки:";
            cin >> i;
            p[i].moveX();
            break;
        case 5:
            cout << "Введіть номер точки:";
            cin >> i;
            p[i].moveY();
            break;
        case 6:
            cout << "Введіть номер першої точки:";
            cin >> i;
            cout << "Введіть номер другої точки:";
            cin >> n;
            p[i].r1(p[n]);
            break;

        default:
            cout << "Ви ввели невірний номер операції" << endl;
        }
    } while (s != 0);
}
