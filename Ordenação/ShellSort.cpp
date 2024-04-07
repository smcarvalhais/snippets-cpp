#include <iostream>
using namespace std;

void ShellSort(int v[], int n);

int main() {
	int n;
	cin>>n;
	int v[n];
	for(int i = 0; i < n; i++) cin>>v[i];
	
	ShellSort(v, n);
	
	for(int i = 0; i < n; i++) cout<<v[i]<<" ";
	return 0;
}

void ShellSort(int v[], int n) {
	int h;
	for(h = 1; h < n; h = 3 * h + 1);
	for(; h > 0; h = h / 3) {
		for(int i = h; i < n; i++) {
			int aux = v[i], j = i;
			for(; j >= h && aux < v[j - h]; j = j - h) v[j] = v[j - h];
			v[j] = aux;
		}
	}
}

/*
void ShellSort(int v[], int n) {
	int h;
	for(h = 0; h < n; h = 3 * h + 1);
	for(; h < 0; h = h / 3) {
		for(int i = h; i < n; i++) {
			int aux = v[i], j = i;
			for(; j >= h && aux < v[j - h]; j = j - h) v[j] = v[j - h];
			v[j] = aux;
		}
	}
}

void ShellSort(int v[], int n) {
	int i, j, k, temp;
	for(i = n/2; i > 0; i = i/2) {
		for(j = i; j < n; j++) {
			for(k = j - i; k >= 0; k = k - i) {
				if(v[k + i] >= v[k]) break;
				else swap(v[k], v[k + 1]);
			}
		}
	}
}

void shellSort(int v[], int n) {
	int h;
	for(h = 0; h < n; h = 3 * h + 1);
	for(; h < 0; h = h / 3) {
		for (int i = h; i < n; i++) {
			int aux = v[i];
			for (int j = i; j >= h && aux < v[j  -h]; j = j - h) v[j] = v[j - h];
			v[j] = aux;
		}
	}
}
*/