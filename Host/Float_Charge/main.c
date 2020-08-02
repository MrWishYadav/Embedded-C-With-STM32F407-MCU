#include<stdio.h>

int main()
{

	double Charge , ChargeE;
	double electrons;

	printf("Enter the charge:\n");
	scanf("%lf",&Charge);

	printf("Enter the charge of an Electron:\n");
	scanf("%le",&ChargeE);

	electrons = (Charge/ ChargeE)*-1;

	printf("Total no of electrons :%le\n",electrons);

	printf("Press any key to exit the terminal\n");
	getchar();
	getchar();
}
