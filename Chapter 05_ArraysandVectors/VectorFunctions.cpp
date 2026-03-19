#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {44, 55, 66, 77, 88};
    //To find the Size of Vector
    cout<< "Size of Vector: " << vec.size() << endl;

    //Using PushBack function to Push the value in Vector at the Back/End
    vec.push_back(22);
    cout<< "After PushBack Updated Size of Vector: " << vec.size() << endl;

    //Using PopBack function to pop the value from Back/end in Vector No Need to Pass Value
    vec.pop_back();
    cout<< "After PopBack Updated Size of Vector: " << vec.size() << endl;

    //Using Front function to Print the First Value of Vector
    cout<< vec.front() << endl;

    //Using Back function to Print the Last Value of Vector
    cout<< vec.back() << endl;

    //Using at function we can print the Given Indexed Value For Ex:
    cout<< vec.at(2) << endl;
    for(int i; i<4; i++){
        cout<<vec.at(i)<<endl;
    }
    // for(int val :  vec){
    //     cout<< val << endl;
    // }
}