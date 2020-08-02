


#include<stdint.h>
#include<stdio.h>

struct carModel
{
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;

};

int main(void)
{
	// Remember that the order of the initialization is most important in the structure initalization
	struct carModel  carBMW = {2021, 15000, 220, 1330};
	struct carModel  carFord = {4031, 35000, 160, 1900.96};
	struct carModel  carHonda = {.carWeight=90.96,.carPrice=15000, .carMaxSpeed = 120,.carNumber = 1330};

	printf("Details of the car BMW are as follows:\n");
	printf("carNumber = %u\n", carBMW.carNumber);
	printf("carPrice  = %u\n", carBMW.carPrice);
	printf("carMaxSpeed = %u\n",carBMW.carMaxSpeed);
	printf("carWeight = %f\n", carBMW.carWeight);

	printf("Details of the car Ford are as follows:\n");
	printf("carNumber = %u\n", carFord.carNumber);
	printf("carPrice  = %u\n", carFord.carPrice);
	printf("carMaxSpeed = %u\n",carFord.carMaxSpeed);
	printf("carWeight = %f\n", carFord.carWeight);

	carHonda.carNumber = 1947;
	carHonda.carPrice = 20000;

	printf("Details of the car Honda are as follows:\n");
	printf("carNumber = %u\n", carHonda.carNumber);
	printf("carPrice  = %u\n", carHonda.carPrice);
	printf("carMaxSpeed = %u\n",carHonda.carMaxSpeed);
	printf("carWeight = %f\n", carHonda.carWeight);


	getchar();

	return 0;
}









