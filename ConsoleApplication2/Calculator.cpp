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
        cout << "1. ��������" << endl;
        cout << "2. ���������" << endl;
        cout << "3. ���������" << endl;
        cout << "4. �������" << endl;
        cout << "5. ���������" << endl;
        cout << "6. ����� ���������" << endl;
        cout << "7. �����" << endl;

        int choice;
        cin >> choice;

        if (choice == 7) {
            break;
        }

        int a, b;
        int n;

        if (choice == 1) {
            cout << "������� ������ �����: ";
            cin >> a;
            cout << "������� ������ �����: ";
            cin >> b;
            cout << add(a, b) << endl;
        }
        else if (choice == 2) {
            cout << "������� �����������: ";
            cin >> a;
            cout << "������� ����������: ";
            cin >> b;
            cout << subtract(a, b) << endl;
        }
        else if (choice == 3) {
            cout << "������� ������ ���������: ";
            cin >> a;
            cout << "������� ������ ���������: ";
            cin >> b;
            cout << multiply(a, b) << endl;

        }
        else if (choice == 4) {
            cout << "������� �������: ";
            cin >> a;
            cout << "������� ��������: ";
            cin >> b;
            cout << divide(a, b)<< endl;

        }
        else if (choice == 5) {
            cout << "������� ����� ��� ���������� ����������: ";
            cin >> n;
            cout << factorial(n) << endl;

        }
        else if (choice == 6) {
            cout << "������� ������ ��� ����� ���������: ";
            cin >> n;
            cout << fibonacci(n) << endl;

        }
        else {
            cout << "������������ ����� ��������." << endl;
        }
    }
}
