// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter N: ";
//     cin>>n;

//     int a;
//     a = 1;
//     for(int i=1; i<=n; i++){
//         //printing Gp = 1,2,4,8,16,32,64 etc   
//         cout<<a<<endl;
//         a = a*2;
//     }

// }

//Homework : Print GP = 3,12,48...n;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;

    int a;
    a = 3;
    for(int i=1; i<=n; i++){
        //printing Gp = 1,2,4,8,16,32,64 etc   
        cout<<a<<endl;
        a = a*4;
    }

}

