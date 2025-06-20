#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if(num1 < num2){
		return -1;
	}
	else if(num1 > num2){
		return 1;
	}

	return 0;
}

int main(void) {
	int a[1000000], N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	qsort(a, N, sizeof(int), cmp);

	for (int i = 0; i < N; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}