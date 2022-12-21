// your name surname and age from user
#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#define a 15
int main(){
	char name[10];
	char surname[10];
	int age;
	printf("Enter your name and surname:");
	scanf("%s %s",name,surname);
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>18){
		printf("%s %s need to go to university",name,surname);
	}
	else{
		printf("%s %s should grow up a little more",name,surname);
	}
	return 0;
}
