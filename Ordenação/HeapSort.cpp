#include <iostream> 
using namespace std;

void HeapSort(int a[], int n);

int main() {
	int n;
	cin>>n;
	int v[n + 1];
	for(int i = 1; i < n + 1; i++) cin>>v[i];

	HeapSort(v, n);
	
	for(int i = 1; i < n + 1; i++) cout<<v[i]<<" ";
	return 0;
}

void MaxHeapify(int vet[], int i, int n) {
	int j, temp;
	temp = vet[i];
	j = 2 * i;
 	while (j <= n) {
		if(j < n && vet[j + 1] > vet[j]) j += 1;
		if(temp > vet[j]) break;
		else if(temp <= vet[j]) {
			vet[j/2] = vet[j];
			j = 2*j;
		}
	}
	vet[j/2] = temp;
	return;
}

void HeapSort(int vet[], int n) {
	for(int i = n/2; i >= 1; i--) MaxHeapify(vet, i, n);
	for(int i = n; i >= 2; i--) {
		swap(vet[i], vet[1]);
		MaxHeapify(vet, 1, i - 1);
	}
}