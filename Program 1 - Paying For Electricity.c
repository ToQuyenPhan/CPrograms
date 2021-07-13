#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	//Khai bao bien
	int x;//bien x duoc su dung cho vong lap (khong lien quan den yeu cau bai tap)
	long long kwh;//bien kwh de nhap gia tri 
	do{
		do{
			//Nhap gia tri
			printf("Enter how much electricity that you used: ");
			
			//Doc gia tri, khai bao kieu long long de nhan cac gia tri lon sau khi nhan
			scanf("%lld", &kwh);
			
			//Xet gia tri am
			if(kwh <= 0){
				printf("\a\nReenter positive integers!!!\n");
			}
			else{
				
				//Xet gia tri nho hon 100
				if(kwh <= 100){
					kwh *= 950;
					printf("The price you need to pay: %lld", kwh);
				}
				else{
					
					//Xet gia tri nho hon 150
					if(kwh <= 150){
						kwh = 950 * 100 + (kwh - 100) * 1250;
						printf("The price you need to pay: %lld", kwh);
					}
					else{
						
						//Xet gia tri nho hon 200
						if(kwh <= 200){
							kwh = 950 * 100 + 1250 * 50 + (kwh - 150) * 1350;
							printf("The price you need to pay: %lld", kwh);
						}
						else{

							//Xet gia tri lon hon 200
							kwh = 950 * 100 + 1250 * 50 + 1350 * 50 + (kwh - 200) * 1550;
							printf("The price you need to pay: %lld", kwh);
						}
					}
				}
			}
		}while(kwh < 0);//Vong lap de nhap lai gia tri khi kwh < 0
//End the task.





			do{
			//Vong lap cho viec su dung lai ma khong can an phim F11
				printf("\nDo you want to do again? \n1. Yes \n2. No");//Lua chon Yes hoac No
				scanf("%d", &x);
				switch(x){
					case 1://Chon 1 tu doc quay lai buoc nhap gia tri 
						break;
					case 2://Chon 2 -> Thoat
						printf("\nThanks for using!!!");
						break;
					default://Bao loi
						printf("\a\nInvalid!!!\nPlease check your answer!");
				}
			}while(x != 1 && x != 2);//Lap lai buoc lua chon
		}while(x == 1);//lap lai buoc nhap gia tri
	
	return 0;
}
