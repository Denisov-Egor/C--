// Даны три целых числа. 
// Найдите наибольшее из них (программа должна вывести ровно одно целое число). Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Введите три целых числа:" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a;
    }
    if (b > a && b > c)
    {
        cout << b;
    }
    if (c > a && c > b)
    {
        cout << c;
    }
}