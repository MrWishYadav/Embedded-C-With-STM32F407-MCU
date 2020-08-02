
#include<stdio.h>
#include "math.h"

int main(void)

{
	printf("Add: %d\n",math_add(0xFFF1111 ,0xFFF1111));

	printf("Sub: %d\n",math_sub(555 ,500));

	printf("Mul: %I64x\n",math_mul(0xFFF1111 ,0xFFF1111));

	printf("Div: %f\n",math_div(100 ,25));

	printf("Mod: %d\n",math_mod(101 ,25));

	return 0;
}
