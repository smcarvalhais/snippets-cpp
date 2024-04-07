#include <iostream>
using namespace std;

void BubbleSort(int vet[], int n);

int main() {
	int n;
	cin>>n;
	int v[n];
	for(int i = 0; i < n; i++) cin>>v[i];

	BubbleSort(v, n);

	for(int i = 0; i < n; i++) cout<<v[i]<<" ";
	return 0;
}

void BubbleSort(int vet[], int n) {
	for(int i = 0; i < n - 1; i++)
		for(int j = 0; j < n - 1 - i; j++)
			if(vet[j] > vet[j + 1]) swap(vet[j], vet[j + 1]);
}

/*
void BubbleSort(int vet[], int n) {
	for(int i = n - 1; i > 0; i--)
		for(int j = 0; j < i; j++)
			if(vet[j] > vet[j + 1]) swap(vet[j], vet[j + 1]);
}

void OrdBolhaM(int vet[], int n) {
	bool movimentou;
	int i = n - 1;
	do {
		movimentou = false;
		for(int j = 0; j < i; j++) {
			if (vet[j]>vet[j+1]) {
				swap(vet[j], vet[j+1]);
				movimentou=true;
			}
		}
		i = i -  1;
	} while((i > 0) && (movimentou == true));
}
*/