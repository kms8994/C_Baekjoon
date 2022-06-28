#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int i = 0;
	int stack = 0;
	int arr = 0;
	int some[10];
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr);
		some[i] = arr % 42;
	}
	
	for (i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i + 1; j < 10; j++) {
			if (some[i] == some[j]) {
				count++;
			}
		}
		if (count == 0) {
			stack++;
		}
	}

	printf("%d\n", stack);

	return 0;
}