#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, x;
	do{
		do{
			printf("Enter a positive integer: ");
			scanf("%d", &n);
		}while(n <= 1);
		
		printf("Primes from 2 to %d: \n", n);
		printOut(n);
		
		
		//Su dung lai
		do{
			printf("\nDo you want to use again:\n1. Yes\n2. No");
			scanf("%d", &x);
			switch(x){
				case 1:
					break;
				case 2:
					printf("\a\nThanks for using <3");
					break;
				default:
					printf("\a\nPlease check your option again!");
			}
		}while(x != 1 && x != 2);
	}while(x == 1);
		
	return 0;
}


//Ham tim so nguyen to
int isPrime(int n){
	int i;
	
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}


//Ham in
int printOut(int n){
	int i, count = 0;
	for(i = 2; i <= n; i++){
		if(isPrime(i) == 1){
			count++;
			printf("\t%d", i);
		}
	}
	printf("\n%d has %d primes.", n, count);
}
