#include <iostream>
namespace wbem
{
namespace system
{
class A
{
	public:
		A() {std::cout << "Real A constructor" << std::endl;}
		void func();
		void newFunc();
};

void A::func() {std::cout << "Real A func" << std::endl;}
void A::newFunc() {std::cout << "Real newFunc" << std::endl;}

class B
{
	public:
		B() {std::cout << "Real B constructor" << std::endl;}
		void func();
};

void B::func() {std::cout << "Real B func" << std::endl;}

}
}

class Real : public wbem::system::A, public wbem::system::B
{
	public:
		Real() {std::cout << "Real constructor" << std::endl;}
};

class Mock 
{
	public:
		Mock() {std::cout << "Mock constructor" << std::endl;}
		class A : virtual public Real::A
		{
			public:
				A() {std::cout << "Mock A constructor" << std::endl;}
				void func() {std::cout << "Mock A func" << std::endl;}
		};

		class B
		{
			 public:
				B() {std::cout << "Mock B constructor" << std::endl;}
			 	void func() {std::cout << "Mock B func" << std::endl;}
		};
};


template <typename TestPolicy = Real>
class Product 
{
	public:
		Product();
		void funcA();
		void funcB() {m_b.func();}
		void funcC() {m_a.newFunc();}
	private:
		typename TestPolicy::A m_a;
		typename TestPolicy::B m_b;
};

#include "policy.cpp"
