#include <iostream>
using namespace std;

int main()
{
    int i = 1, total = 1, resul = 0, n;
    cout << "Suma de factoriales: " << endl;
    cin >> n;

    while (i <= n)
    {
        total = total * i;
        resul = resul + total;
        i++;
    }

    cout << "total de: " << resul;

    return 0;
}