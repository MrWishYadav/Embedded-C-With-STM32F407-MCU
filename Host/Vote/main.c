#include<stdio.h>

int main(void)

{

int age = 0;
printf("Enter the user's age :");
scanf("%d\n",&age);

if(age>=18)
{
	printf("the age entered is eligible to vote\n");

}
if(age<18)
{
	printf("the age entered is not eligible to vote\n");

}

printf("please Enter exit key to terminate the program");
getchar();
getchar();
return 0;
}
