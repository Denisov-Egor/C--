// Шоколадка имеет вид прямоугольника, разделенного на N×M долек.
// Шоколадку можно один раз разломить по прямой на две части.
// Определите, можно ли таким образом отломить от шоколадки ровно K долек.

#include <iostream>
using namespace std;

int main()
{
    int N, M, K;

    cout << "Введите размер шоколадки:" << endl;
    cin >> N >> M;

    cout << "Введите на сколько хотите разрезать шоколадку:" << endl;
    cin >> K;

    if ( N / K == 0 && M / K == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}