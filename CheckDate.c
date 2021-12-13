#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int checkDay (float, float, float);
int checkDay2 (float, float, float);

int main(int argc, char *argv[]) {
	float dd, mm, yy;
	
	do{
		fflush(stdin);
		printf("Enter day/month/year: ");
		scanf("%f/%f/%f", &dd, &mm, &yy);
		
		
		if(dd <= 0 || mm <= 0 || yy <= 0){
			printf("Invalid date.\n");
		}
		else{
			if(dd != (int)dd || mm != (int)mm || yy != (int)yy){
				printf("Invalid date.\n");
			}
			else{
				if(dd == 1 && mm == 1){
					printf("%dst day of %0.0f.\n", checkDay(dd, mm, yy), yy);
				}
				else{
					if(dd == 2 && mm == 1){
						printf("%dnd day of %0.0f.\n", checkDay(dd, mm, yy), yy);
					}
					else{
						if(dd == 3 && mm == 1){
							printf("%drd day of %0.0f.\n", checkDay(dd, mm, yy), yy);
						}
						else{
							if(dd > 31){
								printf("Invalid date.\n");
							}
							else{
								if(mm > 12){
									printf("Invalid date.\n");
								}
								else{
									if((int)yy % 4 == 0){
										printf("%dth day of %0.0f.\n", checkDay2(dd, mm, yy), yy);
									}
									else{
										if(dd >= 29 && mm == 2){
											printf("Invalid date.\n");
										}
										else{
											printf("%dth day of %0.0f.\n", checkDay(dd,mm,yy), yy);
										}
									}
								}	
							}
						}
					}
				}
			}
		}
		
	if(dd == 0 && mm == 0 && yy == 0){
		printf("Goodbye!");
	}	
		
	}while(dd != 0 && mm != 0 && yy != 0);

	
	return 0;
}


int checkDay(float dd, float mm, float yy){
	int sum = 0;
	
	switch((int)mm){
		case 1:
			sum += dd;
			break;
		case 2:
			sum += 31 + dd;
			break;
		case 3:
			sum += 31 + 28 + dd;
			break;
		case 4:
			sum += 31 * 2 + 28 + dd;
			break;
		case 5:
			sum += 31 * 2 + 28 + 30 + dd;
			break;
		case 6:
			sum += 31 * 3 + 28 + 30 + dd;
			break;
		case 7:
			sum += 31 * 3 + 30 * 2 + 28 + dd;
			break;
		case 8:
			sum += 31 * 4 + 30 * 2 + 28 + dd;
			break;
		case 9:
			sum += 31 * 5 + 30 * 2 + 28 + dd;
			break;
		case 10:
			sum += 31 * 5 + 30 * 3 + 28 + dd;
			break;
		case 11:
			sum += 31 * 6 + 30 * 3 + 28 + dd;
			break;
		case 12:
			sum += 31 + 6 + 30 * 4 + 28 + dd;
			break;
		default:
			printf("Invalid date.\n");
		}
		
	return sum;
	}



int checkDay2 (float dd, float mm, float yy){
	int sum = 0;
	
	switch((int)mm){
		case 1:
			sum += dd;
			break;
		case 2:
			sum += 31 + dd;
			break;
		case 3:
			sum += 31 + 29 + dd;
			break;
		case 4:
			sum += 31 * 2 + 29 + dd;
			break;
		case 5:
			sum += 31 * 2 + 29 + 30 + dd;
			break;
		case 6:
			sum += 31 * 3 + 29 + 30 + dd;
			break;
		case 7:
			sum += 31 * 3 + 30 * 2 + 29 + dd;
			break;
		case 8:
			sum += 31 * 4 + 30 * 2 + 29 + dd;
			break;
		case 9:
			sum += 31 * 5 + 30 * 2 + 29 + dd;
			break;
		case 10:
			sum += 31 * 5 + 30 * 3 + 29 + dd;
			break;
		case 11:
			sum += 31 * 6 + 30 * 3 + 29 + dd;
			break;
		case 12:
			sum += 31 * 6 + 30 * 4 + 29 + dd;
			break;
		default:
			printf("Invalid date.\n");
		}
	
	return sum;
}

