// Exercicio7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long  value1;
	long  value2;
	long  *lPtr;
	
	value1 = 200000;
	value2 = 0;
	lPtr = &value1;

	printf("\nO valor de *lPtr e %d", *lPtr);

	value2 = *lPtr;
	printf("\nO valor de value2 e %d", value2);

	printf("\nO endereco de value1 %p", &value1);
	
	printf("\nO endereco de lPtr %p", &lPtr);

	printf("\nO endereco impresso em lPtr  e o mesmo de value1");
	return 0;
}

