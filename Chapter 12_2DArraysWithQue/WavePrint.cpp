#include<iostream>
using namespace std;

void wavePrint(int arr[][4], int rows, int cols){
    for(int col=0; col<cols; col++){
        if(col & 1){
            // Odd column: print bottom to top
            for(int r=rows-1; r>=0; r--){
                cout << arr[r][col] << " ";
            }
        }
        else{
            // Even column: print top to bottom
            for(int r=0; r<rows; r++){
                cout << arr[r][col] << " ";
            }
        }
    }
    cout << endl;
}
int main(){
    int arr[3][4];

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin >> arr[row][col];
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Wave Print: " << endl;
    wavePrint(arr, 3, 4);

    return 0;
}