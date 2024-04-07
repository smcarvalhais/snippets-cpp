#include <iostream>
using namespace std;

void SelectionSort(int vet[], int n);

int main() {
	int n;
	cin>>n;
	int v[n];
	for(int i = 0; i < n; i++) cin>>v[i];

	SelectionSort(v, n);
	
	for(int i = 0; i < n; i++) cout<<v[i]<<" ";
	return 0;
}

void SelectionSort(int vet[], int n) {
	for(int i = 0; i < n - 1; i++) {
		int indiceDoMenor = i;
		for(int j = i + 1; j < n; j++)
			if (vet[j] < vet[indiceDoMenor]) indiceDoMenor = j;
        swap(vet[i], vet[indiceDoMenor]);
	}
}

/*
void OrdSelecao(int vet[], int n) {
	for(int i = 0; i < n - 1; i++) {
		int indice_do_menor = i;
		for(int j = i + 1; j < n; j++) {
			if(vet[j]<vet[indice_do_menor]) indice_do_menor = j;
			swap(vet[i], vet[indice_do_menor]);
		}
	}
}
*/