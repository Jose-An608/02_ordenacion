#include <iostream>
using namespace std;


void interDirDer(int [], int);
//void interDirIz(int, int);
//void interDirCen(int, int);
//void interDirBi(int, int);

int main(){
	int m,n;
	cout << "Digite su cantidad de elementos del arreglo: " << endl;
	cin >> m;
	
	int arr[m];
	
	for ( int i = 0; i<m; i++){
		cout << "Numero "<<"[" << i << "]" << endl;
		cin >> arr[i];
		
	}
	
	cout << "MENU: " << endl << endl;
	cout << "1. Ordenacion por intercambio directo por la derecha. " << endl;
	cout << "2. Ordenacion por intercambio directo por la izquierda. " << endl;
	cout << "3. Ordenacion por intercambio directo con senial. " << endl;
	cout << "4. Ordenacion por intercamnio directo bidireccional. " << endl;
	cout << "Opcion " << endl;
	cin >> n;
	
	
	switch(n){
		case 1:
			interDirDer(arr, m);
			break;
		
		case 2:
		//	interDireIz(arr, m);
			break;
		
		case 3:
		//	interDirCen(arr, m);
			break;
			
		case 4:
		//	interDirBi(arr, m);
			break;
			
		default:
			cout << "Numero incorrecto..." << endl;
			
	}
	
	
	return 0;
}

void interDirDer(int arr[], int m ){
	int aux;
	cout << "El arreglo ordenador es: " << endl;
	
	for (int i = 0; i<m-1; i++){
		for ( int j = 0; j<m-i; j++){
			if (arr[j] > arr[j+1]){
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
	}
	
	for ( int i = 0; i<m; i++){
		cout << arr[i] << " ";
	}
}
//void interDirIz(int, int);
//void interDirCen(int, int);
//void interDirBi(int, int);

