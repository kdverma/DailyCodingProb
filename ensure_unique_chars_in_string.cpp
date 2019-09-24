#include <iostream>
#include <string>
using namespace std;
bool verifyUniqueChar(string str);
int main(int argc, char *argv[])
{
    string str = argv[1];
    if(verifyUniqueChar(str))
    {
        cout << "\nall unique chars in string" << endl;
    }
    else
    {
        cout << "duplicate char in string : " << str << endl;
    }
    
    return 0;
}

bool verifyUniqueChar(string str)
{
    if(str.length() > 128)
    {
        cout << "\nLength more than 128: means duplicate char present in string: " << str << endl;
        return false;
    }

    bool boolArray[128] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        int intValForChar = str[i];
        if(boolArray[intValForChar])
        {
            return false;
        }
        else
        {
            /* code */
            boolArray[intValForChar] = true;
        }
    }
    return true;
}