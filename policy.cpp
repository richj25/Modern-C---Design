#include <iostream>

template <class TestPolicy> Product<TestPolicy>::Product()
{
	std::cout << "Product constructor" << std::endl;
}

template <class TestPolicy> void Product<TestPolicy>::funcA()
{
	m_a.func();
}

