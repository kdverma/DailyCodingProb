/*This problem was asked by Jane Street.

cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns the first and last element of that pair. For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.

Given this implementation of cons:

def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair

Implement car and cdr.*/

#include <iostream>
#include <utility>
using namespace std;

pair<int,int> constructPair(int, int);
int car(pair<int,int>);
int cdr(pair<int,int>);

int main()
{

    pair<int,int> retPair = constructPair(3,4);
    cout << car(retPair) << endl;
    cout << cdr(retPair) << endl;

    cin.get();
    return 0;
}

pair<int,int> constructPair(int val1,int val2)
{
    pair<int,int> PAIR;
    PAIR.first = val1;
    PAIR.second = val2;
    return PAIR;
}


int car(pair<int,int> pair)
{
    return pair.first;
}

int cdr(pair<int,int> pair)
{
    return pair.second;
}