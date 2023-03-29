#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Algoritmo de ordenamiento por selección
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Imprimir el arreglo ordenado
    cout << "El arreglo ordenado es: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
