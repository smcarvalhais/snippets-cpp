#include <iostream>
using namespace std;

void MergeSort(int vet[], int n);

int main() {
	int n;
	cin>>n;
	int v[n];
	for(int i = 0; i < n; i++) cin>>v[i];

	MergeSort(v, n);

	for(int i = 0; i < n; i++) cout<<v[i]<<" ";
	return 0;
}

int * aux;
void merge (int vet[], int esq, int meio, int dir) {
	int i, j;
	for (i = meio + 1; i > esq; i--) aux[i - 1] = vet[i - 1];
	for (j = meio; j < dir; j++) aux[dir + meio - j] = vet[j + 1];
	for (int k = esq; k <= dir; k++) {
		if (aux[j] < aux[i]) {
			vet[k] = aux[j];
			j--;
		} else {
			vet[k] = aux[i];
			i++;
		}
	}
}

void mergesortR (int vet[], int esq, int dir) {
	if (esq < dir) {
		int meio = (esq + dir)/2;
		mergesortR(vet, esq, meio);
		mergesortR(vet, meio + 1, dir);
		merge(vet, esq, meio, dir);
	}
}

void MergeSort (int vet[], int n) {
	aux = new int[n];
	mergesortR(vet, 0, n - 1);
	delete[] aux;
}