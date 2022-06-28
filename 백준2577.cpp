#include<stdio.h>
#pragma warning(disable:4996)

int  main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	int num = a * b * c;
	int val;
	int arr[10] = {};

	while (num > 0) {
		arr[num % 10]++;
		num = num / 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}