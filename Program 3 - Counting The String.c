#include <stdio.h>
#include <stdlib.h>
#define ENTER 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Khai bao bien
	int x;
	char c;
	int noDigits = 0, noLetters = 0, noOthers = 0, i = 1;
	
	//Nhap gia tri
	printf("Enter a string:   ");
	while(c != ENTER){
			
		//Doc gia tri
		scanf("%c", &c);
			
		//Dem so
		if(c >= 48 && c <= 57){
			noDigits++;
		}
		else{
				
			//Dem chu cai
			if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')){
				noLetters++;
			}
			else{
					
				//Dem ki tu
				noOthers++;
			}
		}
	}
	
		//In ra man hinh
		printf("The number of digits: %d \nThe number of characters: %d\nThe number of special characters: %d", noDigits, noLetters, noOthers - i);//Tru di Enter
	
//End the task.
	
	return 0;
}
