#include <iostream>
#include <vector>
#include <stdint.h>
#include <fstream>
#include <ctime>
using namespace std;

int64_t maxPairWiseProduct(vector<int64_t> &myVector)
{
    int64_t prod = 0;
    for (vector<int64_t> :: iterator it = myVector.begin(); it != myVector.end(); ++it)
    {
        vector<int64_t> :: iterator itt = it + 1;
        for (itt; itt != myVector.end(); ++itt)
        {
            //cout << " check for " << *it << "and " << *itt << endl;
            prod = max(prod, *it * *(itt));
        }
    }
    return prod;
}

int main_1()
{
    unsigned long n = -1;
    std::vector<int64_t> myvector;
    unsigned long numberToBePushedToVec;
    clock_t startTime,endTime;
    ifstream fp;
    fp.open("DataSet.txt");
    //cout<< "how many number = \t";
    //cin>>n;

    //cout << "enter " << n << "numbers : " << endl;
    clock_t startTimeForFileRead = clock();
    for (int count = 0; count < 200000; count++)
    {

        //cin>>numberToBePushedToVec;
        fp>>numberToBePushedToVec;
        myvector.push_back(numberToBePushedToVec);
        numberToBePushedToVec = 0;
    }

    //for (int i=1; i<=5; i++) myvector.push_back(i);
    clock_t endTimeForFileRead = clock();
    printf("time taken to read the file = %f",((double)(endTimeForFileRead - startTimeForFileRead))/CLOCKS_PER_SEC);
    startTime = clock();
    int64_t prod = maxPairWiseProduct(myvector);
    endTime = clock();
    cout <<prod << endl;
    double time_taken = ((double)(endTime - startTime))/CLOCKS_PER_SEC;
    printf("time taken = %f", time_taken);

    return 0;
}