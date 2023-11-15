#include "Calculator.h"
#include <iostream>
using namespace std;

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

int Calculator::divide(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a / b;
}

int Calculator::factorial(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }

    int result = 1;
    int i = 2;
    while (i <= n) {
        result *= i;
        i++;
    }
    return result;
}

int Calculator::fibonacci(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int a = 0;
    int b = 1;
    int result = 0;
    int i = 2;
    while (i <= n) {
        result = a + b;
        a = b;
        b = result;
        i++;
    }
    return result;

}

void Calculator::Start()
{

    while (true) {
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Факториал" << endl;
        cout << "6. Число Фибоначчи" << endl;
        cout << "7. Выход" << endl;

        int choice;
        cin >> choice;

        if (choice == 7) {
            break;
        }

        int a, b;
        int n;

        if (choice == 1) {
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << add(a, b) << endl;
        }
        else if (choice == 2) {
            cout << "Введите уменьшаемое: ";
            cin >> a;
            cout << "Введите вычитаемое: ";
            cin >> b;
            cout << subtract(a, b) << endl;
        }
        else if (choice == 3) {
            cout << "Введите первый множитель: ";
            cin >> a;
            cout << "Введите второй множитель: ";
            cin >> b;
            cout << multiply(a, b) << endl;

        }
        else if (choice == 4) {
            cout << "Введите делимое: ";
            cin >> a;
            cout << "Введите делитель: ";
            cin >> b;
            cout << divide(a, b)<< endl;

        }
        else if (choice == 5) {
            cout << "Введите число для вычисления факториала: ";
            cin >> n;
            cout << factorial(n) << endl;

        }
        else if (choice == 6) {
            cout << "Введите индекс для числа Фибоначчи: ";
            cin >> n;
            cout << fibonacci(n) << endl;

        }
        else {
            cout << "Некорректный выбор операции." << endl;
        }
    }
}
