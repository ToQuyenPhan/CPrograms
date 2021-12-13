#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, x;
	do{
		
		//Nguoi dung nhap sai du lieu
		do{
			printf("Enter a positive integer: ");
			scanf("%d", &n);
		}while(n < 1);
		
		printf("%n includes these divisor: \n");
		divisors(n);
		sumDivisors(n);
		
		//Su dung lai
		do{
			printf("\nDo you want to use again?\n1. Yes\n2. No");
			scanf("%d", &x);
			switch(x){
				case 1: break;
				case 2:
					printf("\nThanks for using <3");
					break;
				default:
					printf("\a\nPlease check your option again!");
			}
		}while(x != 1 && x != 2);
	}while(x == 1);

	return 0;
}


//Tim cac uoc
int divisors(int n){
	int i, count = 0;
	for(i = 1; i < n; i++){
		if(n % i == 0){
			count++;
			printf("\t%d ", i);
		}
	}
	printf("\n%d have %d divisors.", n, count);
	return 1;
}


//Tinh tong
int sumDivisors(int n){
	int i, s = 0;
	for(i = 1; i < n; i++){
		if(n % i == 0){
			s += i;
		}
	}
	printf("\nSum of divisors of %d: %d", n, s);
	
	return 0;
}


