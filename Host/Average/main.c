#include<stdio.h>

int main()
{
	float num1, num2,num3;

	float avg;

	printf("Enter the 1st number: \n");
	fflush(stdout); // it is used to flush the print statement to the console display
	scanf("%f",&num1);

	printf("Enter the 2nd number: \n");
	fflush(stdout);
    scanf("%f",&num2);

    printf("Enter the 3rd number: \n");
    fflush(stdout);
	scanf("%f",&num3);

	avg= (num1+num2+num3)/3;
    printf("The average of the 3 numbers are: %f\n",avg);

    printf("Press any key to exit the terminal\n");

    getchar();
    getchar();
	return 0;




}

