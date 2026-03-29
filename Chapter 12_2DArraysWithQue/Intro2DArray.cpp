#include<iostream>
using namespace std;
int main(){
    //Creation of 2D Array
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; //HardCoded the Inputs

    //Konsi Row me Aaapko Konse Element daalne hai 
    int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    //Taking input in 2D Array -> Row wise Input
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cin >> arr[row][col];
    //     }
    // }

    //Taking input -> Column Wise Input
    //  for(int col=0; col<4; col++){
    //    for(int row=0; row<3; row++){
    //        cin >> arr[row][col];
    //   }
    // }

    //Printing the Output
    for(int i=0; i<3; i++){ 
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
