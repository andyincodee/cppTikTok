/*La sentencia do - while:
    do{
        conjunto de instrucciones;
    }while(expresión lógica);*/
#include <iostream>
using namespace std;

int main()
{
    int i = 5;

    do
    {
        cout << i << endl;
        i--;
    } while (i >= -5);

    return 0;
}