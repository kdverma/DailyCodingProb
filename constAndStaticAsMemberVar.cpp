#include <iostream>

using namespace std;
class ABC {
public:
	int a;
	int& b;
	const int c;
	static int d;

	public:
	//ABC(int aa,int bb, int cc):a(aa),b(bb),c(cc) {    // compiler will not crib but 2 param should be reference otherwise it will have junk value
	ABC(int aa, int &bb, int cc) :a(aa), b(bb), c(cc) {

	}
};
int ABC::d = 0;

int main()
{
	/*ABC obj1(1, 2, 3);   // second parma will have junk value

	ABC obj2(4, 5, 6);  // second param will have junk value

	cout << obj1.a << "\t" << obj1.b << "\t" << obj1.c << "\t" << "\n";
	cout << obj2.a << "\t" << obj2.b << "\t" << obj2.c << "\t" << "\n";*/

	int refVar = 10;
	/*obj1.b = refVar;

	cout << obj1.a << "\t" << obj1.b << "\t" << obj1.c << "\t" << "\n";*/

	ABC obj3(7, refVar, 9);  // correct way to access/use reference var as class member
	//ABC obj4(10,11,12);  // incorrect way to access/use reference var as class member pgm will not compile
	cout << obj3.a << "\t" << obj3.b << "\t" << obj3	.c << "\t" << "\n";

	int refVar1 = 23234;
	obj3.b = refVar1;

	//obj3.c = 111111;   ///can not modify c as its const in class; value once provided during object creation can not change
	cout << obj3.a << "\t" << obj3.b << "\t" << obj3.c << "\t" << "\n";
	cout << obj3.d << "\t" << ABC::d << "\n";
	obj3.d = 5;
	cout << obj3.d << "\t" << ABC::d << "\n";
	ABC::d = 6;
	cout << obj3.d << "\t" << ABC::d << "\n";


	return 0;
}