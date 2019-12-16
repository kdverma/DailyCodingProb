#include <iostream>
#include <fstream>
#include <cstdint>

using namespace std;
int main(int argc,char * argv[])
{
    int64_t number = 200000;
    int64_t range = 0;
    std::fstream fp;
    fp.open("DataSet.txt",std::ios::app);
    for(int64_t count = 1; count <= number; count++)
    {
        fp<<count<<endl;
    }
    return 0;
}