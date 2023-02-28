#include <iostream>
#include <math.h> // Математическая библиотека
#include "Test.h"

using namespace std;

int main()
{
    int k;
    do
    {
        int s;
        setlocale(LC_ALL, "RUS"); // Указывает программе, что локализация произойдет на русский язык
        cout << "Введите номер задания с 1-30: " << endl;
        cin >> s;

        switch (s)
        {
        case 1:
#pragma region Задание №1
            try
            {
                Test q;
                double t, l;
                cout << "Введите значение переменной t " << endl;
                cin >> t;
                cout << "Введите значение переменной l " << endl;
                cin >> l;
                cout << "R = " << q.task1(t, l) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №1
            break;
        case 2:
#pragma region Задание №2
            try
            {
                Test q;
                double n, p, e, y;
                cout << "Введите значение переменной n " << endl;
                cin >> n;
                cout << "Введите значение переменной p " << endl;
                cin >> p;
                cout << "Введите значение переменной e " << endl;
                cin >> e;
                cout << "Введите значение переменной y " << endl;
                cin >> y;
                cout << "R = " << q.task2(n, p, e, y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №2
            break;
        case 3:
#pragma region Задание №3
            try
            {
                Test q;
                double n, y;
                cout << "Введите значение переменной n " << endl;
                cin >> n;
                cout << "Введите значение переменной y " << endl;
                cin >> y;
                cout << "G = " << q.task3(n, y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №3
            break;
        case 4:
#pragma region Задание №4
            try
            {
                Test q;
                double a, t;
                cout << "Введите значение переменной a " << endl;
                cin >> a;
                cout << "Введите значение переменной t " << endl;
                cin >> t;
                cout << "D =" << q.task4(a, t) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №4
            break;
        case 5:
#pragma region Задание №5
            try
            {
                Test q;
                double x;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "L =" << q.task5(x) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №5
            break;
        case 6:
#pragma region Задание №6
            try
            {
                Test q;
                double x, y, e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "M =" << q.task6(x, y, e) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №6
            break;
        case 7:
#pragma region Задание №7
            try
            {
                Test q;
                double m;
                cout << "Введите значение переменной m" << endl;
                cin >> m;
                cout << "N =" << q.task7(m) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №7
            break;
        case 8:
#pragma region Задание №8
            try
            {
                Test q;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "T =" << q.task8(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №8
            break;
        case 9:
#pragma region Задание №9
            try
            {
                Test q;
                double n, y, x;
                cout << "Введите значение переменной n" << endl;
                cin >> n;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "V =" << q.task9(n, y, x) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №9
            break;
        case 10:
#pragma region Задание №10
            try
            {
                Test q;
                double e, y, x, k;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной k" << endl;
                cin >> k;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "U =" << q.task10(e, y, x, k) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №10
            break;
        case 11:
#pragma region Задание №11
            try
            {
                Test q;
                double y, x;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "S =" << q.task11(y, x) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №11
            break;
        case 12:
#pragma region Задание №12
            try
            {
                Test q;
                double x, t;
                cout << "Введите значение переменной t" << endl;
                cin >> t;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "K =" << q.task12(x, t) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №12
            break;
        case 13:
#pragma region Задание №13
            try
            {
                Test q;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "E =" << q.task13(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №13
            break;
        case 14:
#pragma region Задание №14
            try
            {
                Test q;
                double e, y, x;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "R =" << q.task14(e, y, x) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №14
            break;
        case 15:
#pragma region Задание №15
            try
            {
                Test q;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "H =" << q.task15(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №15
            break;
        case 16:
#pragma region Задание №16
            try
            {
                Test q;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "S =" << q.task16(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №16
            break;
        case 17:
#pragma region Задание №17
            try
            {
                Test q;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "N =" << q.task17(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №17
            break;
        case 18:
#pragma region Задание №18
            try
            {
                Test q;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Z =" << q.task18(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №18
            break;
        case 19:
#pragma region Задание №19
            try
            {
                Test q;
                double n, y, g;
                cout << "Введите значение переменной n" << endl;
                cin >> n;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной g" << endl;
                cin >> g;
                cout << "P =" << q.task19(n, y, g) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №19
            break;
        case 20:
#pragma region Задание №20
            try
            {
                Test q;
                double e, y, x, k;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной k" << endl;
                cin >> k;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "U =" << q.task20(e, y, x, k) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №20
            break;
        case 21:
#pragma region Задание №21
            try
            {
                Test q;
                double e, y, h;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной h" << endl;
                cin >> h;
                cout << "P =" << q.task21(e, y, h) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №21
            break;
        case 22:
#pragma region Задание №22
            try
            {
                Test q;
                double u, y, x, n;
                cout << "Введите значение переменной u" << endl;
                cin >> u;
                cout << "Введите значение переменной n" << endl;
                cin >> n;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "T =" << q.task22(u, y, x, n) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №22
            break;
        case 23:
#pragma region Задание №23
            try
            {
                Test q;
                double e, y, f;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной f" << endl;
                cin >> f;
                cout << "G =" << q.task23(e, y, f) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №23
            break;
        case 24:
#pragma region Задание №24
            try
            {
                Test q;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "F =" << q.task24(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №24
            break;
        case 25:
#pragma region Задание №25
            try
            {
                Test q;
                double e, y, f;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной f" << endl;
                cin >> f;
                cout << "G =" << q.task25(e, y, f) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №25
            break;
        case 26:
#pragma region Задание №26
            try
            {
                Test q;
                double p;
                cout << "Введите значение переменной p" << endl;
                cin >> p;
                cout << "Z =" << q.task26(p) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №26
            break;
        case 27:
#pragma region Задание №27
            try
            {
                Test q;
                double e, y, x, v;
                cout << "Введите значение переменной v" << endl;
                cin >> v;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "W =" << q.task27(e, y, x, v) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №27
            break;
        case 28:
#pragma region Задание №28
            try
            {
                Test q;
                double e, y, h;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной h" << endl;
                cin >> h;
                cout << "T =" << q.task28(e, y, h) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №28
            break;
        case 29:
#pragma region Задание №29
            try
            {
                Test q;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "N =" << q.task29(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №29
            break;
        case 30:
#pragma region Задание №30
            try
            {
                Test q;
                double e, y, r;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной r" << endl;
                cin >> r;
                cout << "W =" << q.task30(e, y, r) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

#pragma endregion Задание №30
            break;

        default: cout << "Такого задания нет!"<< endl;
        }

        cout << "Повторить? 1/0 - ";
        cin >> k;
    } while (k != 0);
    return 0;
}