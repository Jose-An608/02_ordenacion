//Seleccion directa	
#include <iostream>
using namespace std;

void SeleccionDir(int [], int);

int main(){
	int m;
	
	cout << "Digite la cantidad de numeros del arreglo: " << endl;
	cin >> m;
	
	cout << endl;
	
	cout << "Digite los numeros del arreglo: " << endl << endl;
	
	int arr[m];
	
	for (int i = 0; i<m; i++){
		cout << "Elemento " << "[" << i << "]" << endl;
		cin >> arr[i];
		
	}
	
	//Mostrando el arreglo
	cout << "Arreglo:  " << endl;
	for(int i = 0; i<m; i++){
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	SeleccionDir(arr, m);
	
	return 0;
}

void SeleccionDir(int arr[], int m){
	int menor, k;
	
	
	//Algoritmo del metodo de seleccion directa
	for (int i = 0; i<m-1; i++){
		menor = arr[i];
		k = i;
		for(int j = i+1; j<m; j++){
			if (menor > arr[j]){
				menor = arr[j];
				k = j;
			}
		}
		arr[k] = arr[i];
		arr[i] = menor;
	}
	
	cout << "Arreglo ordenado " << endl;
	
	for (int i = 0; i<m; i++){
		cout << arr[i] << " ";
	}
	
}
