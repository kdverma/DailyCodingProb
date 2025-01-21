#include <iostream>
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	int firstNumber,secondNumber;
	vector<int> result;
	for(int i = 0;i <array.size() - 1;i++)
	{
		for(int j = i+1;j <array.size(); j++ )
		{
			if((array[i] + array[j]) == targetSum)
			{
				if(array[i] > array[j])
				{
					result.push_back(array[j]);
					result.push_back(array[i]);
				}
				else
				{
					result.push_back(array[i]);
					result.push_back(array[j]);
				}
				return result;
			}
			
		}
	}
    return {};
}

vector<int> twoNumberSum2(vector<int> array, int targetSum) {
}
int main()
{
    vector<int> vec = {3,5,-4,8,11,1,-1,6};
    int targetSum = 10;

    vector<int> myvector = twoNumberSum(vec,targetSum);
    for (auto it = myvector.begin(); it != myvector.end(); ++it) 
        cout << ' ' << *it; 
    return 0;
}