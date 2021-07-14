#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//khai bao bien
	char c, c1, c2, t;
	
	//Nhap gia tri
	printf("Enter the first character: ");
	scanf("%c", &c1);
	
		
	printf("Enter the second character: ");
	scanf("%c", &c2);	
	c2=getchar();
	
	//Hoan doi
	if(c1 > c2){
		t = c1;
		c1 = c2;
		c = t;
		}
			
	//Trang tri
	printf("\nCharacter\tDec\tOctal\tHex\n---------\t---\t-----\t---\n");
	
	//Lap
	for(c = c1; c <= c2; c++){
		printf("%5c : \t%3d \t%4o %5X\n", c, c, c, c);
	}
//End the task.

	return 0;
}
