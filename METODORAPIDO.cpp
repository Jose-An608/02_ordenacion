//Ordenacion por quicksort
#include <iostream>
using namespace std;

void QuickSort(int [], int , int );
void Reduce(int [], int , int );

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
	
	//funcion quicksort
	
	QuickSort(arr, 0,  m-1);
	
	cout << endl;

	//Mostrando el arreglo ordenado
	cout << "El arreglo ordenado es: " << endl;
	
	for (int i = 0; i<m; i++){
		cout << arr[i] << " ";
		
	}	
	return 0;
}

void QuickSort(int arr[], int inicio, int final){
	if (inicio<final){
		Reduce(arr, inicio, final);
}
}

void Reduce(int arr[], int inicio, int final){
	int aux;
	int izq = inicio;
	int der = final;
	int pos = izq;
	int cen = 1;
	while( cen == 1){
		cen = 0;
		
		while((arr[pos] <= arr[der]) && (pos != der)){
			der = der-1;
		}
		if (pos != der){
			aux = arr[pos];
			arr[pos] = arr[der];
			arr[der] = aux;
			pos = der;
			
			while((arr[pos] >= arr[izq]) && (pos != izq)){
				izq++;
			}
			if(pos != izq){
				aux=arr[pos];
				arr[pos]=arr[izq];
				arr[izq]=aux;
				pos=izq;
				cen=1;
				
			}
		}
		if((pos-1) > inicio){
			Reduce(arr, inicio, pos-1);
		}
		if((pos+1)<final){
			Reduce(arr, pos+1, final);
		}
	}
	
}
