#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void listFibo (int);


int main(int argc, char *argv[]) {
	int n, i;
	
	do{
		do{
			printf("Enter value of n: ");
			scanf("%d", &n);
		}while(n < 0);
		
		if(n == 0){
			printf("Goodbye!");
			break;
		}
		listFibo(n);
		
	}while(n != 0);
	return 0;
}



//Ham liet ke day Fibonacci
void listFibo (int a){
	unsigned long long fin = 0, fi1 = 1, fi2 = 1;
	int i, count = 0;
	
	//Liet ke
	for(i = 1; i <= a; i++){
		if(i <= 2){
			fin = 1;
		}
		else{
			fin = fi1 + fi2;
			fi1 = fi2;
			fi2 = fin;
		}
		printf("%lld   ", fin);
		
		//5 so thi xuong dong
		count++;
		if(count == 5){
			printf("\n");
			count = 0;
		}
	}
	printf("\n");
}



