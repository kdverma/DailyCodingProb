/*
   This problem was asked by Google.
   Given two strings A and B, return whether or not A can be shifted some number of times to get B.
   For example, if A is abcde and B is cdeab, return true. If A is abc and B is acb, return false.
*/

#include<iostream>
#include<string>
using namespace std;

bool checkStrWithRotation(string a, string b);
int main()
{
	string A = "abcde";
	string B = "cdeab";
	if(true == checkStrWithRotation(A,B))
	{
		printf("\nstring [%s] after single rotation can become string [%s]\n", A.c_str(),B.c_str());
	}
	else
	{
		printf("\nstring [%s] after single rotation can NOT become string [%s]\n", A.c_str(),B.c_str());
	}
}

bool checkStrWithRotation(string A, string B)
{
	string temp = A;

	for(int j = 0;j < A.length();j++)
	{
		A = temp;
		temp[0] = A[A.length()-1];
		for(int i = 0; i <= (A.length()-1); i++)
		{
			temp[i+1] = A[i];
			//cout <<"i =  " << i << " \t\ttemp[i] " << temp[i] <<endl;

		}
		//cout << "string is " << temp << endl;
		if(B == temp)
		{
			return true;
		}
	}


	return false;
}
