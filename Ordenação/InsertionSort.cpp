#include <iostream>
using namespace std;

void InsertionSort(int vet[], int n);

int main() {
	int n;
	cin>>n;
	int v[n];
	for(int i = 0; i < n; i++) cin>>v[i];

	InsertionSort(v, n);

	for(int i = 0; i < n; i++) cout<<v[i]<<" ";
	return 0;
}

void InsertionSort(int vet[], int n) {
	for(int i = 1; i < n; i++) {
		int aux = vet[i], j = i - 1;
		while((j >= 0) && (vet[j] > aux)) {
            vet[j + 1] = vet[j];
            j = j - 1;
        }
        vet[j + 1] = aux;
	}
}