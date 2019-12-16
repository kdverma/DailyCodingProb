#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main_5()
{
    std :: string str("aaaabbbcc");
    ostringstream oss;
    int strLen = str.length();

    for(int i = 0; i< strLen; i++)
    {
        cout << str.at(i);
        oss << str.at(i);
        //cout << oss;
        
    }
    cout << endl<<oss.str();
    cin.get();

    return 0;
}