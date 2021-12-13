#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double calF (int, int, int);
int yesNo(char);

int main(int argc, char *argv[]) {
	int a, b, n;
	char x;
	
	do{
		do{
			printf("Enter a: ");
			scanf("%d", &a);
			
			printf("Enter b: ");
			scanf("%d", &b);
			
			printf("Enter n: ");
			scanf("%d", &n);
		}while(a <= 0 || b <= 0 || n <= 0);
		
		printf("F = %0.2lf", calF(a, b, n));
		
		do{
			printf("\nDo you want to continue counting? (n=no/y=yes): ");
			scanf("%s", &x);
		}while(yesNo(x) == 0);
		
		if(x == 'n'){
			printf("Goodbye!");
			break;
		}
		
	}while(yesNo(x) == 1);
	
	return 0;
}




//Ham tinh F
double calF (int num1, int num2, int num3){
	int i;
	double f = 0, num12 = 0;
	
	for(i = 0; i <= num3; i++){
		num12 =  (double) (num1 + i) / (num2 + i); 
		f += num12;
	}
	
	return f;
}



//Ham su dung lai
int yesNo (char numX){
	int flag;
	if(numX == 'y' || numX == 'n'){
		flag = 1;
	}
	else{
		flag = 0;
	}
	
	return flag;
}
