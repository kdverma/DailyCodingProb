#include <iostream>
#include <typeinfo>

struct A
{
  virtual A* foo() { return this ; }
  //virtual void bar() ;
};

struct B : A
{
  B* foo() { return this ; }
  //virtual void bar() throw(int,double) ;
};

void bar( A* pa )
{
  std::cout << "compile-time type of pointer: " 
    << typeid(pa).name() << '\n' ;
  std::cout << "run-time type of object: " 
    << typeid(*pa).name() << '\n' ;
   A* ptr = pa->foo() ;
}


int main()
{
  bar( new B ) ;
  int i = 7, j = 8 ;
  std::cout << ( i>j ? 100 : 200.6 ) << "\n" ;
}
