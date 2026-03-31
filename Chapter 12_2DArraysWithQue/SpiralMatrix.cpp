#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(int matrix[][3], int row, int col)
{
    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;
    int startingCol = 0;

    while (count < total)
    {
        // to print the starting row....
        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            cout << matrix[startingRow][i] << " ";
            count++;    
        }
        startingRow++;

        // to print the ending col....
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            cout << matrix[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        // to print the ending row....
        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            cout << matrix[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // to print the starting col....
        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            cout << matrix[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}
int main()
{
    int matrix[3][3];
    cout << "Enter Elements in the Matrix: ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> matrix[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    cout << "\nSpiral Order Traversal: ";
    spiralMatrix(matrix, 3, 3);
    cout << endl;
}