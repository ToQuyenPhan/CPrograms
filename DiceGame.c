#include <stdio.h>
#include <time.h>

int getInt (int, int);

int main() {
	int x, y, total, count = 0;
	srand(time(NULL)); 
	
	printf("Dice Thower\n=============\n");
	
	total = getInt(2,12);
	
	do{
		x = rand()%6+1; 
		y = rand()%6+1;
		printf("Result of throw %d: %d + %d\n", ++count, x, y);
		sleep(1);
	}while(x + y != total);
	
	printf("You got your total in %d throws!", count);
	
	return 0;
}


int getInt (int min, int max){
	int value, keeptrying = 1, rc;
	char after;
	
	do{
		printf("Enter a whole number in the range [%d,%d]: ", min, max);
		rc = scanf("%d%c", &value, &after);
		
		if(rc == 0){
			printf("No input accepted!\n");
			fflush(stdin);
		}else if(after != '\n'){
			printf("Trailing characters!\n");
			fflush(stdin);
		}else if(value < min || value > max){
			printf("Out of range!\n");
		}else 
			keeptrying = 0;
	}while(keeptrying == 1);
	
	return value;
}

