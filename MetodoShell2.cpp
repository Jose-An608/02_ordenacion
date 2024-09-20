#include <iostream>
using namespace std;

int main() {
    int m, cen, k, j, aux;

    cout << "Digite la cantidad de numeros del arreglo: " << endl;
    cin >> m;

    cout << endl;

    cout << "Digite los numeros del arreglo: " << endl << endl;

    int arr[m];

    for (int i = 0; i < m; i++) {
        cout << "Elemento " << "[" << i << "]" << endl;
        cin >> arr[i];
    }

    // Mostrando el arreglo
    cout << "Arreglo:  " << endl;
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Arreglo ordenado: " << endl;

    // Algoritmo del método de Shell
    k = m / 2;

    while (k > 0) {
        cen = 1;
        while (cen == 1) {
            cen = 0;
            j = 0;
            while (j + k < m) {
                if (arr[j + k] < arr[j]) {
                    aux = arr[j];
                    arr[j] = arr[j + k];
                    arr[j + k] = aux;
                    cen = 1;
                }
                j++;
            }
        }
        k = k / 2; // Reducir el valor de k
    }

    // Mostrando el arreglo ordenado
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}