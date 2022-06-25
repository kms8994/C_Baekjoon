#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	int arr[9];
	int max;
	int num = 1;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	
	max = arr[0];

	for (int i = 1; i < 9; i++){
		if (arr[i] > max) {
			max = arr[i];
			num = i + 1;
		}
	}

	printf("%d\n", max);
	printf("%d", num);

	return 0;
}