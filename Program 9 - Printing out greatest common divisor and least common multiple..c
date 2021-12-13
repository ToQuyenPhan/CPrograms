#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m, n, uc, bc, x;
	
	do{
		do{
			printf("Enter two positive integers:  ");
			scanf("%d%d", &m, &n);
		}while(m < 0 || n < 0);
		
		uc = ucln(m, n);
		bc = bcnn(m, n);
		printf("GDM: %d\nLCM: %d", uc, bc);
		
		
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


//Tinh uoc chung lon nhat
int ucln(int m, int n){
	while(m != n){
		if(m > n){
			m -= n;
		}
		else{
			n -= m;
		}
	}
	
	return m;
}


//Tim boi chung nho nhat
int bcnn(int m, int n){
	int result = 0;
	result = m * n / ucln(m, n);
	
	return result;
}
