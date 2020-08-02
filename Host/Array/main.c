#include<stdio.h>
#include<stdint.h>
int main(void)

{

	uint8_t Data[10]= {1,2,3,5,10,21,42,64,0,48};
	printf("the data present in the array is : %p\n",Data);
	printf("the size of the Data present in the array is :%u\n", sizeof(Data));


}
