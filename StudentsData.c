#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void addList (char list[][MAX], float score[], int*);
void printList (char list[][MAX], float score[], int);
void sortName (char list[][MAX], float score[], int);
void sortScore (char list[][MAX], float score[], int);
void searchByName (char list[][MAX], float score[], int);
void searchByScore (char list[][MAX], float score[], int);
void menu();
int isFull (int);
int isEmpty (int);
char* nameStr (char s[]);
char* listTrim (char s[]);
char* lTrim (char s[]);
char* rTrim (char s[]);

int main() {
 	int n = 0, choice, check;
 	char list[MAX][MAX];
 	char after;
 	float score[MAX];
 	do{
 		do{
	 		fflush(stdin);
	 		menu();
			printf("\nYour choice: ");
			check=scanf("%d%c", &choice, &after);
			if(check == 0 || after != '\n') printf("Check the type of data!\n");
			else{
				switch(choice){
					case 0:
						printf("Goodbye!");
						break;
					case 1:
						if(isFull(n)) printf("Sorry! The array is full!\n");
						else addList(list, score, &n);
						break;
					case 2:
						if(isEmpty(n)) printf("Sorry! The array is empty!\n");
						else printList(list, score, n);
						break;
					case 3:
						if(isEmpty(n)) printf("Sorry! The array is empty!\n");
						else searchByName(list, score, n);
						break;
					case 4:
						if(isEmpty(n)) printf("Sorry! The array is empty!\n");
						else searchByScore(list, score, n);
						break;
					case 5:
						if(isEmpty(n)) printf("Sorry! The array is empty!\n");
						else sortName(list, score, n);
						break;
					case 6:
						if(isEmpty(n)) printf("Sorry! The array is empty!\n");
						else sortScore(list, score, n);
						break;
					default:
						printf("Check your choice again!\n");
				}
			}
		}while(after != '\n');
	}while(choice != 0);
 	
	return 0;
}
//Add a name 
void addList (char list[][MAX], float score[], int*n){
	int check;
	char after;
	printf("Enter name: ");
	fflush(stdin);
	gets(list[*n]);
	nameStr(list[*n]);
	do{
		fflush(stdin);
		printf("Enter score: ");
		check=scanf("%f%c", &score[*n], &after);
		if(after != '\n'|| (score[*n] < 0 || score[*n] > 10)) printf("Please reenter the score!\n");
	}while(after != '\n'|| (score[*n] < 0 || score[*n] > 10));
	(*n)++;
	printf("Added.\n");
}
//Print the list
void printList (char list[][MAX], float score[], int n){
	int i;
	printf("List: ");
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("%15s", list[i]);
		printf("%15.2f\n", score[i]);
	}
}
//Search the names
void searchByName (char list[][MAX], float score[], int n){
	int flag = 1, i;
	char x[MAX];
	printf("Enter name to search: ");
	fflush(stdin);
	gets(x);
	nameStr(x);
	for(i = 0; i < n; i++){
		char*ptr = strstr(list[i], x);
		if(ptr != NULL){
			printf("%15s", list[i]);
			printf("%15.2f\n", score[i]);
			flag = 0;
		}
	}
	if(flag == 1) printf("Name not exist.\n");
}
//Search the scores
void searchByScore (char list[][MAX], float score[], int n){
	int check, i, flag = 1;
	float x;
	char after;
	do{
		fflush(stdin);
		printf("Enter the score to search: ");
		check=scanf("%f%c", &x, &after);
		if(check == 0 || after != '\n') printf("Check the type of data!\n");
		else if(x > 10) printf("This score so high for Vietnamese score range!\n");
		else if(x < 0) printf("This score so low for Vietnamese score range!\n");
	}while(after != '\n' || (x > 10 || x < 0));
	for(i = 0; i < n; i++){
		if(score[i] == x){
			flag = 0;
			printf("%15s", list[i]);
			printf("%15.2f\n", score[i]);
		}
	}
	if(flag == 1) printf("Not found!\n");
}
//Sort the list by name
void sortName (char list[][MAX], float score[], int n){
	char list2[MAX][MAX];
	char t[MAX];
	float score2[MAX];
	int i, j;
	float t_number;
	for(i = 0; i < n; i++){
		strcpy(list2[i], list[i]);
		score2[i] = score[i];
	}
	for(i = 0; i < n - 1; i++){
		for(j = n - 1; j > i; j--){
			if(strcmp(list2[j - 1], list2[j]) > 0){
				strcpy(t, list2[j]);
				strcpy(list2[j], list2[j - 1]);
				strcpy(list2[j - 1], t);
				
				t_number = score2[j];
				score2[j] = score2[j - 1];
				score2[j - 1] = t_number;
			}
		}
	}
	printList(list2, score2, n);
}
//Sort the score
void sortScore (char list[][MAX], float score[], int n){
	char list2[MAX][MAX];
	char t[MAX];
	float score2[MAX];
	int i, j;
	float t_number;
	for(i = 0; i < n; i++){
		strcpy(list2[i], list[i]);
		score2[i] = score[i];
	}
	for(i = 0; i < n - 1; i++){
		for(j = n - 1; j > i; j--){
			if(score2[j - 1] > score2[j]){
				t_number = score2[j];
				score2[j] = score2[j - 1];
				score2[j - 1] = t_number;
				
				strcpy(t, list2[j]);
				strcpy(list2[j], list2[j - 1]);
				strcpy(list2[j - 1], t);
			}
		}
	}
	printList(list2, score2, n);
}
//Print menu
void menu(){
	printf("MENU\n===============================\n0. Exit\n1. Add a student into the list");
	printf("\n2. Print out the all list\n3. Search student by name\n4. Search student by score\n");
	printf("5. Sort the student list by alphabetic oder by name\n6. Sort the student list in ascending oder by score");
}
//If the list is full
int isFull (int n){
	return n == MAX;
}
//If the list is empty
int isEmpty (int n){
	return n == 0;
}
//Uppercase names and delete the blanks
char* nameStr (char s[]){
	listTrim(s);
	strlwr(s);
	int L = strlen(s);
	int i;
	for(i = 0; i < L; i++) if(i == 0 || (i > 0 && s[i - 1] == ' ')) s[i] = toupper(s[i]);//co the dung - 32 de thay the
	return s;
}
//Delete the blanks
char* listTrim (char s[]){
	rTrim(lTrim(s));
	char*ptr = strstr(s, "  ");
	while(ptr != NULL){
		strcpy(ptr, ptr + 1);
		ptr = strstr(s, "  ");
	}
	return s;
}
//Delete the blanks in the left
char* lTrim (char s[]){
	int i = 0;
	while(s[i] == ' ') i++;
	if(i > 0) strcpy(&s[0], &s[i]);
	return s;
}
//Delete the blanks in the right
char* rTrim (char s[]){
	int i = strlen(s) - 1;
	while(s[i] == ' ') i--;
	s[i + 1] = '\0'; //\0 = NULL
	return s;
}
