#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, x;
	
	do{
		do{
			printf("Enter n: ");
			scanf("%d", &n);
		}while(n < 1);
		
		printf("Result of the frist %d primes: \n", n);
		printOut(n);
		
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


//Check so nguyen to
int isPrime(int n){
	int flag = 1, i;
	for(i = 2; i * i <= n && flag == 1; i++){
		if(n % i == 0){
			flag = 0;
		}
	}
	return flag;
}


//Ham in
int printOut(int n){
	int count = 0, m = 2;
	do{
		if(isPrime(m) == 1){
			count++;
			printf("\t%d", m);
		}
		m++;
	}while(count < n);
}
