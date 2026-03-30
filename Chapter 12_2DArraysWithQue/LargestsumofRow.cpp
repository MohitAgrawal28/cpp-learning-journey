#include <iostream>
#include <climits>
using namespace std;

int largestSumofRow(int arr[][4], int row, int col)
{
    int maxSum = INT_MIN;
    int rowIdx = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum = sum + arr[row][col];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            rowIdx = row;
        }
    }
    cout << "The Maximum is: " << maxSum << endl;
    return rowIdx;
}
int main()
{
    int arr[3][4]; // array dec
    // Taking input row wise
    cout << "Enter the Elements in the Array: ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    // Printing the Array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    int ansIdx = largestSumofRow(arr, 3, 4);
    cout << "Max Row at The Index: " << ansIdx << endl;
}