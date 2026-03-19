#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n= sizeof(arr)/4;
    int Product = 1;
    for(int i=0;i<n;i++){
        Product*=arr[i];
    }
    cout<<"Product of the Elements is: "<<Product;
}