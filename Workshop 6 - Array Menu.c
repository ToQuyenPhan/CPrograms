#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define MAX 100
void menu();
void dataType();
void squareBox();
void loadData();
void setColor (int);
void gotoXy (int, int);
void addValue (int , int a[], int*);
void searchValue (int a[], int);
void deleOne (int a[], int*);
void deleAll (int a[], int*);
void outputArray (int a[], int);
void printEven (int a[], int);
void maxValue (int a[], int);
void printRange (int a[], int);
void bubbleSort (int a[] , int);
int isFull (int a[], int);
int isEmpty (int a[], int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int n, check, i, value;
	char after;
	int a[MAX];
	int choice;
	do{
		do{
			fflush(stdin); menu(); check=scanf("%d%c", &choice, &after); system("cls");
			if(check == 0||after != '\n'){
				dataType();
			}
			else{
				switch(choice){
					case 0:
						gotoXy(50,6); setColor(13);printf("======================================"); gotoXy(50,7);
						printf("||                                  ||"); gotoXy(50,8);
						printf("||    GOODBYE!!!                    ||"); gotoXy(50,9);
						printf("||               SEE YOU NEXT TIME! ||"); gotoXy(50,10);
						printf("||                                  ||"); gotoXy(50,11);
						printf("===========================\\      /==="); gotoXy(50,12);
						printf("                            \\    /"); gotoXy(50,13);
						printf("                             \\  /"); gotoXy(50,14);
						printf("                              \\/"); gotoXy(50,15);
						printf("             ____________         "); gotoXy(50,16);
						printf("            /            \\        "); gotoXy(50,17);
						printf("           /  ___    ___  \\        "); gotoXy(50,18);
						printf("          |  |___|  |___|  |        "); gotoXy(50,19);
						printf("          |                |        "); gotoXy(50,20);
						printf("          |       /\\       |        "); gotoXy(50,21);
						printf("           \\      \\/      /        "); gotoXy(50,22);
						printf("            \\____________/         "); gotoXy(50,23);
						printf("            _____|    |_____          "); gotoXy(50,24);
						printf("           /     \\____/     \\   "); gotoXy(50,25);
						printf("          /      |    |      \\   "); gotoXy(50,26);
						printf("         /   |   |    |   |   \\  "); gotoXy(50,27);
						printf("    _____\\___|___|____|___|___/_____"); gotoXy(50,28);
						printf("                                      ");
						break;
					case 1:
						if(isFull(a,n)) {
							setColor(12); squareBox();
							gotoXy(47,15); printf("SORRY >_< THE ARRAY IS FULL!!!");  
						}
						addValue(value, a, &n); sleep(3);
						system("cls"); 
						break;
					case 2:
						if(isEmpty(a,n)){
							setColor(12); squareBox();
							gotoXy(47,15); printf("SORRY >_< THE ARRAY IS EMPTY!!!");  
						}
						else searchValue(a, n); sleep(3);
						system("cls"); 
						break;
					case 3:
						if(isEmpty(a,n)){
							setColor(12); squareBox();
							gotoXy(50,15); printf("SORRY >_< THE ARRAY IS EMPTY!!!");  
						}
						else deleOne(a, &n);
						sleep(3);
						system("cls");
						break;
					case 4: 
						if(isEmpty(a,n)){
							setColor(12); squareBox();
							gotoXy(47,15); printf("SORRY >_< THE ARRAY IS EMPTY!!!");  
						}
						else deleAll(a,&n);
						sleep(3); 
						system("cls");
						break;
					case 5:
						if(isEmpty(a,n)){
							setColor(12); squareBox();
							gotoXy(47,15); printf("SORRY >_< THE ARRAY IS EMPTY!!!");  
						}
						else{
							outputArray(a,n);
							printf("\n");
						}
						sleep(3); system("cls");
						break;
					case 6:
						if(isEmpty(a,n)){
							setColor(12); squareBox();
							gotoXy(47,15); printf("SORRY >_< THE ARRAY IS EMPTY!!!");  
						}
						else printEven(a,n);
						sleep(3); system("cls");
						break;
					case 7: 
						if(isEmpty(a,n)){
							setColor(12); squareBox();
							gotoXy(47,15); printf("SORRY >_< THE ARRAY IS EMPTY!!!");  
						}
						else maxValue(a,n);						
						sleep(3); system("cls");
						break;
					case 8:
						if(isEmpty(a,n)){
							setColor(12); squareBox();
							gotoXy(47,15); printf("SORRY >_< THE ARRAY IS EMPTY!!!");  
						}
						else printRange(a,n);
						sleep(3); system("cls");
						break;
					case 9:
						if(isEmpty(a,n)){
							setColor(12); squareBox();
							gotoXy(47,15); printf("SORRY >_< THE ARRAY IS EMPTY!!!");  
						}
						else bubbleSort(a,n);
						sleep(3); system("cls");
						break;
					default:
						setColor(12); squareBox();
						gotoXy(50,15); printf("CHECK YOUR CHOICE AGAIN!!!\n");
						sleep(3);
						system("cls");
				}
			}
			if(choice == 1) n++;
		}while(after != '\n');
	}while(choice != 0);

	return 0;
}
void menu() {
	int i;
	gotoXy(25-20,0);
	for(i = 0; i < 75; i++){
		setColor(1);
		printf("=");
	}
	gotoXy(25-20,1);
	for(i = 0; i < 75; i++){
		setColor(1);
		printf("=");
	}
	for(i = 1; i < 16; i++){
		setColor(2);
		printf("\n");
		printf("     ||\t\t\t\t\t\t\t\t\t      ||");	
	}
	gotoXy(28-20,4+2); setColor(12);printf("| QQQ   QQQ |    | QQQQQQQQQQ|    | QQQ    QQQ |    | QQQ       QQQ |"); 
	gotoXy(28-20,5+2); setColor(12);printf("| QQQQ QQQQ |    | QQQ|           | QQQQ   QQQ |    | QQQ       QQQ |");
	gotoXy(28-20,6+2); setColor(12);printf("| QQ QQQ QQ |    | QQQQQQQQQQ|    | QQQQQ  QQQ |    | QQQ       QQQ |");
	gotoXy(28-20,7+2); setColor(12);printf("| QQ|\\_/|QQ |    | QQQ|           | QQQ|QQ QQQ |    \\ QQQ       QQQ /");
	gotoXy(28-20,8+2); setColor(12);printf("| QQ|   |QQ |    | QQQ|           | QQQ|\\ QQQQ |     \\ QQQ     QQQ /");
	gotoXy(28-20,9+2); setColor(12);printf("| QQ|   |QQ |    | QQQQQQQQQQ|    | QQQ| \\ QQQ |      \\ QQQQQQQQQ /");
	gotoXy(28-20,10+2); setColor(12);printf("|___/   \\___|    |___________/    |____/  \\____|       \\_________/");
	gotoXy(90,6); setColor(13);
	printf("======================================"); gotoXy(90,7);
	printf("||                                  ||"); gotoXy(90,8);
	printf("||    LET CHOOSE                    ||"); gotoXy(90,9);
	printf("||                   YOUR OPTION!   ||"); gotoXy(90,10);
	printf("||                                  ||"); gotoXy(90,11);
	printf("===========================\\      /==="); gotoXy(90,12);
	printf("                            \\    /"); gotoXy(90,13);
	printf("                             \\  /"); gotoXy(90,14);
	printf("                              \\/"); gotoXy(90,15);
	printf("             ____________         "); gotoXy(90,16);
	printf("            /            \\        "); gotoXy(90,17);
	printf("           /  ___    ___  \\        "); gotoXy(90,18);
	printf("          |  |___|  |___|  |        "); gotoXy(90,19);
	printf("          |                |        "); gotoXy(90,20);
	printf("          |       /\\       |        "); gotoXy(90,21);
	printf("           \\      \\/      /        "); gotoXy(90,22);
	printf("            \\____________/         "); gotoXy(90,23);
	printf("            _____|    |_____          "); gotoXy(90,24);
	printf("           /     \\____/     \\   "); gotoXy(90,25);
	printf("          /      |    |      \\   "); gotoXy(90,26);
	printf("         /   |   |    |   |   \\  "); gotoXy(90,27);
	printf("    _____\\___|___|____|___|___/_____"); gotoXy(90,28);
	printf("                                      "); gotoXy(90,29);
	gotoXy(25-20,17);
	for(i = 0; i < 75; i++){
		setColor(1);
		printf("=");
	}
	gotoXy(25-20,18);
	for(i = 0; i < 75; i++){
		setColor(1);
		printf("=");
	}
	for(i = 1; i < 20; i++){
		setColor(2);
		printf("\n");
		printf("     ||\t\t\t\t\t\t\t\t\t      ||");	
	}
	gotoXy(38, 19); setColor(13);printf("0 - EXIT"); 
	gotoXy(33, 21); setColor(10); printf("1 - INPUT A VALUE"); 
	gotoXy(33, 23); setColor(15); printf("2 - SEARCH A VALUE");
	gotoXy(30, 25); setColor(11); printf("3 - REMOVE A VALUE FIRST");
	gotoXy(32, 27); setColor(4); printf("4 - REMOVE ALL VALUE");
	gotoXy(30, 29);	setColor(7); printf("5 - PRINT OUT THE ARRAY");
	gotoXy(29, 31); setColor(1); printf("6 - PRINT OUT ENVEN VALUES");
	gotoXy(20, 33); setColor(6); printf("7 - PRINT OUT THE MAXIMUM VALUE OF THE ARRAY");
	gotoXy(27, 35); setColor(8); printf("8 - PRINT OUT VALUE IN A RANGE");
	gotoXy(20, 37); setColor(3); printf("9 - PRINT OUT THE ARRAY IN ASCENDING ORDER");
	gotoXy(27-20, 20);
	for(i = 4; i < 75; i++){
		setColor(14);
		printf("~");
	}
	gotoXy(27-20, 22);
	for(i = 4; i < 75; i++) printf("~");
	gotoXy(27-20, 24); for(i = 4; i < 75; i++) printf("~");
	gotoXy(7, 26); for(i = 4; i < 75; i++) printf("~");
	gotoXy(7, 28); for(i = 4; i < 75; i++) printf("~");
	gotoXy(7, 30); for(i = 4; i < 75; i++) printf("~");
	gotoXy(7, 32); for(i = 4; i < 75; i++) printf("~");
	gotoXy(7, 34); for(i = 4; i < 75; i++) printf("~");
	gotoXy(7, 36); for(i = 4; i < 75; i++) printf("~");
	gotoXy(5,38);
	for(i = 0; i < 75; i++){
		setColor(1);
		printf("=");
	}
	gotoXy(5,39);
	for(i = 0; i < 75; i++){
		setColor(1);
		printf("=");
	}
	gotoXy(85,30); printf("ENTER YOUR OPTION HERE: "); }
void setColor (int color){
	HANDLE hConsoleColor; 
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleTextAttribute(hConsoleColor, color); 
}
void gotoXy (int x, int y){
	static HANDLE h = NULL; 
	if(!h) h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = {x , y}; 
	SetConsoleCursorPosition(h,c); 
}
void addValue (int value, int a[], int*pn){
	int check, i; char after;
	do{ 
		fflush(stdin); 
		setColor(10);
		squareBox();
		gotoXy(30,15); printf("Input an added value: "); check=scanf("%d%c", &value, &after); 
		loadData();
		if(check == 0 || after != '\n')	dataType();
		system("cls");
	}while(check == 0 || after != '\n'); 
	a[*pn] = value; 
	setColor(10); squareBox();
	gotoXy(30,15); printf("Input an added value: %d", value); 
	gotoXy(30,16); printf("Added!\n"); 
}
void searchValue (int a[], int n){
	int i, x, count = 0, check; char after;
	do{ 
		fflush(stdin); 
		setColor(15); squareBox();
		gotoXy(30,15); printf("Input the searched value: "); check=scanf("%d%c", &x, &after); 
		loadData();	
		if(check == 0 || after != '\n') dataType();
	}while(check == 0 || after != '\n');
	setColor(15); squareBox();
	gotoXy(30,15); printf("Input the searched value: %d", x);
	gotoXy(30,16); printf("Position is ");
	for(i = 0; i < n; i++) if(a[i] == x) printf("%d  ", i); else count++;
	if(count == n)	printf("not found!");
	printf("\n");
}
void deleOne (int a[], int *pn){
	int pos, x, count = 0, i, flag = 1, check;
	char after;
	do{
		fflush(stdin);
		setColor(11); squareBox();
		gotoXy(30,15); printf("Input the removed value: "); check=scanf("%d%c", &x, &after);
		loadData();
		if(check == 0 || after != '\n') dataType();
	}while(check == 0 || after != '\n');
	for(i = 0; i < *pn; i++){
		if(a[i] == x){
			pos = i;
			flag = 0;
		}
		else count++;
		if(count == *pn) {
			squareBox();
			gotoXy(30,15); printf("Input the removed value: %d", x);
			gotoXy(30,16); printf("Not found!\n");
		}
	}
	if(flag == 0){
		for(i = pos; i < *pn; i++) a[i] = a[i + 1];
		(*pn)--;
		squareBox();
		gotoXy(30,15); printf("Input the removed value: %d", x);
		gotoXy(30,16); printf("Deleted!\n");	
	}
}
void deleAll (int a[], int*pn){
	int value, i, j, check;
	int result = 0;
	char after;
	do{
		fflush(stdin);
		setColor(4); squareBox();
		gotoXy(30,15); printf("Input a value that will be deleted all: "); check=scanf("%d%c", &value, &after);
		loadData();
		if(check == 0 || after != '\n') dataType();
	}while(check == 0 || after != '\n');
	for(i = (*pn) - 1; i >= 0; i--){
		if(a[i] == value){
			result = 1;
			for(j = i; j < (*pn) - 1; j++) a[j] = a[j + 1];
			(*pn)--;
		}
	}
	if(result == 0) {
		setColor(4); squareBox();
		gotoXy(30,15); printf("Input a value that will be deleted all: %d", value);
		gotoXy(30,16); printf("Not found!\n");
	}
	else {
		setColor(4); squareBox();
		gotoXy(30,15); printf("Input a value that will be deleted all: %d", value);
		gotoXy(30,16); printf("Removed.\n");
	}
}
void outputArray (int a[], int n){
	int i;
	setColor(7); squareBox(); gotoXy(30,15); printf("Array: ");
	for(i = 0; i < n; i++) printf("%3d", a[i]);
}
void printEven (int a[], int n){
	int i, count = 0;
	setColor(1); squareBox();
	gotoXy(30,15); printf("Even values: ");
	for(i = 0; i < n; i++) if(a[i] % 2 == 0) printf("%3d", a[i]); else count++;
	if(count == n) printf("Not found!\n"); else printf("\n");
}
void maxValue (int a[], int n){
	int i, max = 0;
	setColor(6); squareBox();
	for(i = 0; i < n; i++){
		max=(max > a[i]) ? max : a[i];
	}
	gotoXy(30,15); printf("Max value in array: %d\n", max);
}
void printRange(int a[], int n){
	int i, x, y, check, count = 0;
	char after;
	do{
		fflush(stdin); setColor(8); squareBox();
		gotoXy(30,15); printf("Enter smallest number of range: ");
		check=scanf("%d%c", &x, &after);
		gotoXy(30,16); printf("Enter largest number of range: ");
		check=scanf("%d%c", &y, &after);
		loadData();
		if(check == 0 || after != '\n') dataType();
	}while(check == 0 || after != '\n');
	squareBox(); gotoXy(30,15); printf("Enter smallest number of range: %d", x);
	gotoXy(30,16); printf("Enter largest number of range: %d", y);
	gotoXy(30, 18); for(i = 0; i < n; i++) if(a[i] >= x && a[i] <= y) printf("%d ", a[i]); else count++;
	gotoXy(30, 18); if(count == n) printf("No value!");
	printf("\n");
}
void bubbleSort (int a[], int n){
	int t, i, j, flag = 0;
	setColor(3); squareBox();
	int b[MAX];
	for(i = 0; i < n; i++) b[i] = a[i];
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 - i; j++){
			if(b[j] > b[j + 1]){
				flag = 1;
				t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;
			}
		}
	}
	gotoXy(30,15); if(flag == 0) printf("The array was sorted before: "); else printf("After sort: ");
	for(i = 0; i < n; i++) printf(" %d ", b[i]);
	printf("\n");
}
int isFull (int a[], int n){
	return n == MAX;
}
int isEmpty (int a[], int n){
	return n == 0;
}
void dataType (){
	int i;
	gotoXy(25,5); 
	for(i = 0; i < 75; i++){ 
		setColor(12); 
		printf("="); 
	}
	for(i = 1; i < 20; i++){
		setColor(12);
		printf("\n"); 
		printf("\t\t\t ||\t\t\t\t\t\t\t\t\t  ||");	
	}
	gotoXy(25,25);
	for(i = 0; i < 75; i++){
		setColor(12);
		printf("=");
		}
	gotoXy(50,15); printf("CHECK THE TYPE OF DATA!!!");
	sleep(3); system("cls");
}
void squareBox (){
	int i;
	gotoXy(25,5); 
	for(i = 0; i < 75; i++){  
		printf("="); 
	}
	for(i = 1; i < 20; i++){
		printf("\n"); 
		printf("\t\t\t ||\t\t\t\t\t\t\t\t\t  ||");	
	}
	gotoXy(25,25);
	for(i = 0; i < 75; i++){
		printf("=");
	}
}
void loadData (){
	int i;
	gotoXy(30,19); printf("It will take long time! Please sit down and enjoy a cup of tea!");
	gotoXy(30,20); printf("Loading");
	for(i = 0; i <= 5; i++){ 
		sleep(1); 
		printf("."); 
	}
	system("cls");
}
