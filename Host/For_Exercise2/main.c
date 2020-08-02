#include<stdio.h>
int main()

{
	int i,j;
	int height;
	printf("Enter the height of the Pyramid:");
	scanf("%d\n",&height);

	for(i=1;i<=height;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("%d  ",j);
		}
		printf("\n");

	}
	printf("Enter a key to exit the terminal\n");
	while(getchar() != '\n')
	{
		;
	}


}
