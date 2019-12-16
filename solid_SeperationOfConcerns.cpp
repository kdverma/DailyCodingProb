// SOLID_1.cpp : Defines the entry point for the console application.
//

//separation of concerns.
#include <boost/lexical_cast.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>

using namespace std;

struct TODO_List
{
public:
    std::vector<string> entries;
    static int count;
    string title;

    void AddEntry(string);

    explicit TODO_List(const string& title)
    : title(title)
  {
  }
};

int TODO_List::count; //static member variable needs to be defined explicitly


struct PersistManager
{
    static void save(TODO_List& obj,const string &fileName)
    {
        ofstream ofs(fileName);

        for(vector<string> :: iterator it = obj.entries.begin(); it < obj.entries.end();it++)
        {   
            ofs << *it << endl;
        }
    }
};

int main_1()
{
    TODO_List obj1("my dairy");

    obj1.AddEntry("Learn Design pattern");
    obj1.AddEntry("Learn Fortify");
    obj1.AddEntry("Merge Code");

    PersistManager persistMgr;
    persistMgr.save(obj1,"c:\\junk\\todo.txt");

    cin.get();
    return 0;
}

void TODO_List :: AddEntry(string entry)
{
    entries.push_back(boost::lexical_cast<string>(count++) + " : " + entry);
}
