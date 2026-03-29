#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int row, int col){
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col] == key){
                return 1;
            }
        }
    }
    return 0;
}

void rowWiseSum(int arr[][4], int row, int col){
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<4; col++){
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
}
int main(){
    int arr[3][4];

    cout << "Enter Elements in Array: ";
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

    cout << "Enter the Element You Want to Search in an Array: ";
    int key;
    cin >> key;

    if(isPresent(arr, key, 3, 4)){
        cout << "Yeyyy, We found the Element you Searching For";
    }
    else{
        cout << "Oops!No Element Found";
    }
    cout << endl;

    cout << "Row Wise Element sum: ";
    rowWiseSum(arr, 3, 4);
    
}