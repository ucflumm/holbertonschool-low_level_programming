#include <stdio.h>

int main(void)
{
	char *cpoint;
	int *ip;
	double *dp;
	float *fp;
	/**	int ivar = 2;
	*	char cvar = '2';
	*	double dvar = 2;
	*	float fvar = 2.02;
	*/
	printf("Size of char pointer is : %llu \n", sizeof(*cpoint));
	printf("Size of int pointer is : %llu \n", sizeof(*ip));
	printf("Size of double pointer is : %llu \n", sizeof(*dp));
	printf("Size of float pointer is : %llu \n", sizeof(*fp));
	return (0);
}