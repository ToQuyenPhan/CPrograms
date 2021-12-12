#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Khai bao bien
	int x;//bien x su dung cho vong lap
	double num1, num2, result = 0;//2 bien chua 2 so cua bieu thuc va bien chua ket qua
	char op;//Bien chua phep toan
	
	do{
		//Nhap vao 1 bieu thuc
		printf("Enter an expression:   ");
		
		//Doc bieu thuc
		scanf("%lf %c%lf", &num1, &op, &num2);

		//Cau lenh switch de xac dinh phep toan
		switch(op){
			case '+'://Phep cong
				//Overflow
				if(num1 > 10000000 || num2 > 10000000){
					printf("\a\nOverflow!!!");
				}
				else{
				//Don't overflow
					result = num1 + num2;
					printf("\n%lf %c %lf = %0.2lf", num1, op, num2, result);
				}
				
				break;
			case '-'://Phep tru
				result = num1 - num2;
				printf("\n%lf %c %lf = %0.2lf", num1, op, num2, result);
				break;
			case '*'://Phep nhan 
				result = num1 * num2;
				printf("\n%lf %c %lf = %0.2lf", num1, op, num2, result);
				break;
			case '/'://Phep chia 
				if(num2 == 0){
					printf("\a\nDivide by 0 is undefined!!!");
				}
				else{
					result = num1 / num2;
					printf("\n%lf %c %lf = %0.2lf", num1, op, num2, result);
				}
				break;	
			case '%'://Phep chia lay phan du
				if(num2 == 0){
					printf("\a\nDivide by 0 is undefined!!!");
				}
				else{
					//Neu num1 & num2 khong phai la so nguyen
					if(!(num1 == (int) num1 || num2 == (int)num2)){
						do{
							printf("\a\nReenter the integer!!!");
							printf("\nEnter an expression again: ");
							scanf("%lf %c%lf", &num1, &op, &num2);
						}while(!(num1 == (int) num1 && num2 == (int)num2));//Nguoi dung nhap nhieu lan so thuc
						//Nguoi dung nhap vao so nguyen
							result = (int)num1 % (int)num2;
							printf("\n%lf %c %lf = %0.2lf", num1, op, num2, result);
					}
					else{
						//Ep kieu du lieu
						result = (int)num1 % (int)num2;
						printf("\n%lf %c %lf = %0.2lf", num1, op, num2, result);
					}
					break;
				}
				break;
			default://Khi nguoi dung nhap cac phep toan khac
				printf("\a\nOp is not supported!!!");
		}
//End the task.









		//Vong lap de khong phai an F11 nhiu lan
		do{
			printf("\nDo you want to do again? \n1. Yes\n2. No");
			scanf("%d", &x);
				switch(x){
					case 1:
						break;
					case 2:
						printf("Thanks for using <3");
						break;
					default:
						printf("\a\nPlease check your option!!!");
				}
		}while(x != 1 && x!= 2);
	}while(x == 1);
	return 0;
}
