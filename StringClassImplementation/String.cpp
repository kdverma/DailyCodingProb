#include <iostream>
#include <cstring>
using namespace std;

class String{
	private:
		int len;
		char *res;

	public:
		String(){
			cout<< "default constructor called\n";
		}
		String(char *val):len(0),res(nullptr){
			cout<< "parameterized constructor called\n";
			len = strlen(val);
			res = new char[len + 1];
			strcpy(res, val);
		}

		char* val(){
			return res;
		}




};
int main()
{
	String str1; // default constructor
	String str2 = "Apple";
	cout << str2.val();

	//String str3 = str2;
	//String str4(str2);
	//str4 = str3;
	

	//cout << str4;
	//cin >> str1;
	

	return 0;

}

