#include <iostream>
using namespace std;
//функция к заданию 1
template <typename T>
double findAverage(T arr[], int size) {
    if (size == 0) {
        return 0.0; 
    }

    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}
//Функции к заданию 2
template <typename T>
void solveLinearEquation(T a, T b) {
    if (a == 0) {
        if (b == 0) {
            cout << "Бесконечное количество решений" << "\n";
        }
        else {
            cout << "Уравнение не имеет решений" << "\n";
        }
    }
    else {
        T x = -b / a;
        cout << "x = " << x << "\n";
    }
}
template <typename T>
void solveQuadraticEquation(T a, T b, T c) {
    if (a == 0) {
        solveLinearEquation(b, c);
    }
    else {
        T discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            T x1 = (-b + sqrt(discriminant)) / (2 * a);
            T x2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "x1 = " << x1 << ", x2 = " << x2 << "\n";
        }
        else if (discriminant == 0) {
            T x = -b / (2 * a);
            cout << "x = " << x << "\n";
        }
        else {
            cout << "Уравнение не имеет действительных корней" << "\n";
        }
    }
}
//функция к заданию 3
double roundWithPrecision(double num, int precision) {
    double multiplier = pow(10, precision);
    return round(num * multiplier) / multiplier;
}
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    double average = findAverage(arr, size);
    cout << "Среднее арифметическое: " << average << "\n";
    cout << "\n";
    //Task_2
    solveLinearEquation(2.0, 4.0); 
    solveQuadraticEquation(1.0, -3.0, 2.0);
    cout << "\n";
    //Task_3
    double num = 3.14159265359;
    int precision = 3;
    double roundedNum = roundWithPrecision(num, precision);
    cout << "Результат: " << roundedNum << "\n";
}
