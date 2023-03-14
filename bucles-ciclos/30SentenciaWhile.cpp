/*--- CICLOS O BUCLES ---
La sentencia While:
    while (expresion logica){
        conjunto de instrucciones;
    }*/

/*while(i <= 10){
    cout << i << endl;
    i++;
}*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    i = 10;

    while (i >= 0)
    {
        cout << i << endl;
        i--;
    }

    return 0;
}