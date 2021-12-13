#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fibo (int);

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
		fibo(n);
	}while(n != 0);
	
	return 0;
}


// Ham tinh fibonacci
void fibo (int a){
	int fi1 = 1, fi2 = 1, fin = 0;
	
	while(a > 0){	
		fin = fi1 + fi2;
		if(fin >= a){
			if(fin == a){
				printf("%d is Fibonacci.\n", a);
				break;
			}
			else{
				printf("%d isn't Fibonacci.\n", a);
				break;
			}
		}
		fi1 = fi2;
		fi2 = fin;	
	}
}









