#include <stdio.h>

int factorial (int f) {
	if (f == 1 || f == 0) {
		return 1;
	}

	else {
		return(f * factorial (f - 1));
	}
}

int permutasi (int n, int k) {
	 int hasil;

	 hasil = factorial(n) / factorial (n-k);

	 return hasil;
}


int main () {
	int n, k;

	printf("Masukkan jumlah bilangan yang akan dilakukan permutasi : ");
	scanf("%d", &n);

	printf("Masukkan susunan yang akan diberikan : ");
	scanf("%d", &k);

	if (n < k) {
		printf("Input yang kamu masukkan tidak valid.\n");
	}

	else {
		printf("Nilai dari permutasi %d disusun %d adalah %d\n",n, k, permutasi (n, k));
	}

	return 0;
}
