// #include<iostream>
// using namespace std;
// int main(){
//     int marks[] = {99, 100, 54, 36, 88};
//     cout<< marks[0] <<endl;
//     cout<< marks[1] <<endl;
//     cout<< marks[2] <<endl;
//     cout<< marks[3] <<endl;
//     cout<< marks[4] <<endl;

//     //Getting Warning as Array Ranges from 0 -> size-1 (Garbage Value)
//     cout<< marks[5] <<endl;
// }
#include<iostream>
using namespace std;
int main(){
    int marks[] = {99, 100, 54, 36, 88};
    //Using Loops Now...
    int size = 5;
    for(int i=0; i<size; i++){
        cout<< marks[i] << endl;
    }
}