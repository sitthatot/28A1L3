#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int a = 1; a <= n + (n - 1); a++) {
		printf("*");
	}
	printf("\n");
	for (int r = 1; r <= n-2; r++) {
		for (int s = 1; s <= r; s++) {
			printf(" ");
		}
		printf("*");
		for (int i = r; i <= n-3; i++) {
			printf(" ");
		}
		for (int i = r; i <= n - 2; i++) {
			printf(" ");
		}
		printf("*");
		
		printf("\n");
	}

	for (int i = 1; i <= n-1; i++) {
		printf(" ");
	}
	printf("*");
	printf("\n");
	for (int r = 1; r <= n - 2; r++) {
		for (int s = r; s <= n-2; s++) {
			printf(" ");
		}
		printf("*");
		for (int s = 1; s <= r-1; s++) {
			printf(" ");
		}
		for (int s = 1; s <= r; s++) {
			printf(" ");
		}
		printf("*");

		printf("\n");
	}
	for (int a = 1; a <= n + (n - 1); a++) {
		printf("*");
	}
	
	return 0;
}