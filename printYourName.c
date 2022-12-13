// your name surname and age from user
#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main(){
char name[25];
char surname[25];
int age;
basla:
printf("Enter your name and surname:\n");
scanf("%s%s",name,surname);
printf("Enter your age:\n");
scanf("%d",&age);
goto basla;

return 0;

}
