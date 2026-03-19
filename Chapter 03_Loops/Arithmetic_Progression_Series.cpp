// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     //1,3,5,7,9...(AP SERIES)
//     for(int i = 1 ; i<=2*n+1; i+=2){
//         cout<<i<<endl;
//     }
// }

//Homework for Prinint AP Series : 4,7,10,13,16,upto n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    //4,7,10,13,16 upto n
    for(int i = 4 ; i<=3*n+1; i+=3){
        cout<<i<<endl;
    }
}
