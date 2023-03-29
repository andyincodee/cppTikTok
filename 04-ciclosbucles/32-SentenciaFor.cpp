/*La sentencia For:

    for(expresion 1; expresion lógica; expresion 2){
        conjunto de instrucciones;
    }*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 10; i > 0; i--)
    {
        cout << "Hola" << endl;
        cout << i << endl;
    }
}