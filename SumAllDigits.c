#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumAllDigits(int);

int main(int argc, char *argv[]) {
	int n;
	do{
		do{
			printf("Enter a positive integer (0 exit): ");
			scanf("%d", &n);
		}while(n < 0);
			
		if(n == 0){
			printf("Goodbye!");
			break;
		}
			
		printf("The sum of its decimal digits: %d\n", sumAllDigits(n));
	}while(n != 0);
	
	
	return 0;
}



//Ham tinh tong cac chu so
int sumAllDigits (int a){
	int sum = 0;
	
	while(a > 0){
		sum += a % 10;
		a /= 10;
	}
	
	return sum;
}
