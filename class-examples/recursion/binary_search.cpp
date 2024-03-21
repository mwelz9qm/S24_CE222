#include<iostream>

using namespace std;

int binarySearch(const int list[], int target, int lower, int upper);

int main()
{
    int arr[9] = {1,3,4,6,7,10,11,13,14};
    int result;
    int t = 6;
    result = binarySearch(arr,t,0,8);

    if (result == -1)
        cout << "The target wasn't in the list." << endl;
    else
        cout <<"The target was in location " << result << "." << endl;


    return 0;
}


int binarySearch(const int list[], int target, int lower, int upper)
{
    int mid, ans;

    if (upper == lower)
    {
        if (target == list[lower])
            return lower;
        else
            return -1;
    }

    mid = (lower + upper)/2;

    if (target > list[mid])
        ans = binarySearch(list,target, mid + 1, upper);
    else
        ans = binarySearch(list, target, lower, mid);
    return ans;


}