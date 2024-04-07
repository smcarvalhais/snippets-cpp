#include <iostream>
using namespace std;

void QuickSortRec(int vet[], int esq, int dir);

int main() {
	int n;
	cin>>n;
	int v[n];
	for(int i = 0; i < n; i++) cin>>v[i];
	
	QuickSortRec(v, 0, n - 1);
	
	for(int i = 0; i < n; i++) cout<<v[i]<<" ";
	return 0;
}

void QuickSortRec(int vet[], int esq, int dir) {
	int i= esq, j = dir;
	int pivo = vet[(i+j)/2];
	do {
		while (vet[i]<pivo) i++;
		while (vet[j]>pivo) j--;
		if (i <= j) {
			swap(vet[i], vet[j]);
			i++;
			j--;
		}
	} while (i <= j);
	if (esq < j) QuickSortRec(vet, esq, j);
	if (dir > j) QuickSortRec(vet, i, dir);
}