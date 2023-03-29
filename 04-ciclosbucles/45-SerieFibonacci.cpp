/*Hacer un programa que realice la serie fibonacci
1   1   2   3   5   8   13  ... n*/

#include <iostream>
using namespace std;
int main(){
    int n, x = 0, y = 1, z = 1;

    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "       1 ";

    for(int i = 1; i < n; i++){
        z = x + y;              //z = 1 + 1
        cout << z << " ";       //z = 2
        x = y;                  //x = 1.0
        y = z;                  //y = 2
    }

    return 0;
}