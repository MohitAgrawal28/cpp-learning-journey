// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cout<<"Enter a Number";
//     cin>>x;

//     if(x>99 && x<=999){
//         cout<<"The Number is 3 Digit Number";
//     }
//     else{
//         cout<<"Not a 3 Digit Number";
//     }
    
// }


//Code to check If number is divisible by 5 OR 3;
#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter a Number";
    cin>>x;

    if(x%5==0 || x%3==0){
        cout<<"The Number is Divisible by 5 OR 3 ";
    }
    else{
        cout<<"The Number is NOT Divisible by 5 OR 3 ";
    }
    
}
