#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	long long int m, n;
	scanf("%lld %lld", &m, &n);

	long long int pn = 0; // 소수의 개수 
	bool check[1000001]={0,}; //false가 소수

	
	check[1] = true;
	for (long long int i = 2; i <= n; i++) {
		if (check[i] == false) {
			for (long long int j = i * i; j <= n; j += i) {
				check[j] = true;
			}
		}
	}


	for (int i = m; i <= n; i++) {
		if (check[i] == false) {
			printf("%lld\n", i);
		}
	}

	return 0;
}