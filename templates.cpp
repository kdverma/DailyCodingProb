#include <iostream>
#include <vector>
using namespace std;

/*Normal function template*/
template<typename anyContainerFrom, typename anyContainerTo>
static void copy(anyContainerFrom from, anyContainerTo &to)
{
    for (int i=0; i<from.size(); i++) 
        to.push_back(from[i]); 
}

/*overloaded termination function for variadic template*/
static void templateFunc()
{

}

/*variadic template*/
template<typename arg1,typename... args>
static void templateFunc(arg1 arg, args... arg2)
{
    //process(arg1);
    cout << arg << endl;
    templateFunc(arg2...);

}

int main()
{
    vector<int> myVec = {1,2,3};
    vector<int> to;
    copy(myVec,to);

    vector<char> myVecChar = {'a','b','c','d'};
    vector<char> toVecChar;
    copy(myVecChar,toVecChar);

    for(auto i:to)
    {
        cout << i << endl;
    }

    for(auto i:toVecChar)
    {
        cout << i << endl;
    }

    templateFunc(1,55,33);

    return 0;
}