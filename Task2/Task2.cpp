﻿// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>
#include <ctime>;

int main()
{
    setlocale(NULL, "RUS");
    cout << "Введите длину массива:"<<endl;
    int arr[20];
    for (int i = 0; i < 20; i++) {
        int a = 1 + rand() % 2;
        if (a == 1) {
            arr[i]=1 + rand() % 20;
        }
        else
        {
            arr[i] = -20 + rand() % 20;
        }
        cout << arr[i] << endl;
    }
    cout << "Изменённый массив:" << endl;
    for (int i = 0; i < 20; i++) {
        int a = 1 + rand() % 2;
        if (arr[i] < 0) {
            arr[i]=0;
        }
        cout << arr[i] << endl;
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
