//Ordenacion por insercion

#include <iostream>
using namespace std;
int main(){
	
	int m, k, aux;
	
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
	
	cout << "Arreglo ordenado: " << endl;
	
	//Algoritmo del ordenacion por insercion
	for (int i = 1; i<m; i++){
		aux = arr[i];
		k = i-1;
		while((k >= 0) && (aux<arr[k])){
			arr[k+1] = arr[k];
			k = k-1;
		}
		arr[k+1] =aux;
	}
	//Mostrando el arreglo ordenado
	for (int i = 0; i<m; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
