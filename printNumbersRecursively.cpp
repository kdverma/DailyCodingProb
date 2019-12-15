#include <iostream>
using namespace std;
void printtill(int number)
{
    if (number == 0)  return;

    printtill(number - 1);
    printf("%d\t", number);
}

int main()
{
    printtill(5);
    return 0;
}