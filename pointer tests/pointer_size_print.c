#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/**
*	char *cpoint;
*	int *ip;
*	double *dp;
*	float *fp;
*	int ivar = 2;
*	char cvar = '2';
*	double dvar = 2;
*	float fvar = 2.02;
*	cpoint = &cvar;
*	ip = &ivar;
*	dp = &dvar;
*	fp = &fvar;
*/
	printf("Size of char pointer is : %d \n", sizeof(char *));
	printf("Size of int pointer is : %d \n", sizeof(int *));
	printf("Size of double pointer is : %d \n", sizeof(double *));
	printf("Size of float pointer is : %d \n", sizeof(float *));
	return (0);
}