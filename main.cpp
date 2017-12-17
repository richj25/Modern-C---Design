#include <iostream>

#include "policy.h"

int main()
{
	Product<Mock> mock;
	Product<> real;

	Product <Real> *pProduct = new Product<Real>;
	Product <Real> *pProduct2 = new Product<>;
	Product <Mock> *pProduct3 = new Product<Mock>;


	pProduct->funcA();
	pProduct2->funcA();
	pProduct3->funcA();
	mock.funcA();
	mock.funcB();
	mock.funcC();

	real.funcA();
	real.funcB();
}

