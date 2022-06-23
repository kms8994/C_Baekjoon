#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int u;
	int f;
	int t;
	int o;
	int sum = 0;
	int stack = 0;

	scanf("%d", &u);

	f = u;

	while (1) {

		t = f / 10;
		o = f % 10;

		sum = t + o;
		f = o * 10 + sum % 10;
		stack++;

		if (u == f) {
			break;
		}
	}

	printf("%d", stack);

	return 0;
}