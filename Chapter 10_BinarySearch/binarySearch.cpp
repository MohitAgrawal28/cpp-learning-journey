#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start +   (start + end) / 2;
        if (target > arr[mid])
        {
            start = mid + 1; // 2nd Half
        }
        else if (target < arr[mid])
        {
            end = mid - 1; // 1st Half
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12, 13};
    int target = 0;
    cout << "The index of Element/Target you Searching for is: " << binarySearch(arr, target); // Printing the Index of Target
}