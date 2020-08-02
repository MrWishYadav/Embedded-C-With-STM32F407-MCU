#include<stdio.h>

int main()

{
	char c1,c2,c3,c4,c5,c6;

	printf("Enter 6 characters of your choice:\n");
	scanf("%c %c %c %c %c %c",&c1,&c2,&c3,&c4,&c5,&c6);
	printf("ASCII codes : %u, %u, %u, %u, %u, %u\n",c1,c2,c3,c4,c5,c6);

	printf("Enter any key to exit the terminal\n");
	getchar();
	getchar();


}
