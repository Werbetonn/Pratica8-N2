#include <stdio.h>

void selection_sort(int num[], int tam) {
	int i, j, min, aux;
	for(i = 0; i < tam; i++) {
		min = i;
		for(j = (i+1); j < tam; j++) {
			if(num[j] > num[min]) {
			min = j;
			}
		}
		if(i != min) {
			aux = num[i];
			num[i] = num[min];
			num[min] = aux;
		}
	}
	for(int k=0; k < 10; k++) {
		printf("%d\t", num[k]);
	}
}

int main() {
	int idades[10];
	for(int i=0; i < 10; i++) {
		printf("Informe a idade da pessoa %d: ", i + 1);
		scanf("%d", &idades[i]);
	}
	selection_sort(idades,10);
	return 0;
}
