#include<stdio.h>


int add_num(int a, int b);
// callie function
int main()
{
	int ret;
	 ret = add_num(100,300);
	printf("sum = %d\n",ret);
	return 0;


}
//caller function
int add_num(int a , int b)
{

	int sum;
	sum = a+b;


return sum;

}
