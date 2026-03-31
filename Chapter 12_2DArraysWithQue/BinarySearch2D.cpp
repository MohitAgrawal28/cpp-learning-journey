#include<iostream>
using namespace std;

bool binarySearchin2D(int matrix[][4], int target, int row, int col){
    int start = 0;
    int end = row * col - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        int element = matrix[mid/col][mid%col];

        if(element == target){
            return 1;
        }
        else if(element < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return 0;
}
int main(){
    int matrix[3][4];

    cout << "Enter the Elements in the Matrix: ";
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin >> matrix[row][col];
        }
    }

    
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout << matrix[row][col] << "";
        }
        cout << endl;
    }
    int target = 5;
    cout << "\nAccording to Binary Search: ";
    
    bool found = binarySearchin2D(matrix, 5, 3, 4);
    cout << (found ? "Element Found!" : "Element Not Found!") << endl;

    
}