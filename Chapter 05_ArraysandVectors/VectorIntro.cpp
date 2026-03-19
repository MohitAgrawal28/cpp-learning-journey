#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> marks = {88, 66, 55, 78, 91};
    // int size = 5;
    // for(int i=0;i<size;i++){
    //     cout<<marks[i]<<endl;
    // }
    for(int i : marks){
        cout<< i << endl;
    }
}