// На вход дается натуральное число N. Выведите следующее за ним четное число

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    cout << n + 2 - n % 2;
}