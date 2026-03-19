#include<iostream>
using namespace std;
int main(){
    int costprice;
    int sellingprice;
    cout<<"Enter the Value of Costprice: ";
    cin>>costprice;
    cout<<"Enter the Value of Sellingprice: ";
    cin>>sellingprice;
    if(sellingprice>costprice){
        cout<<"Congrats, We Made Profit";
        cout<<"Total Profit is: "<<sellingprice-costprice;
    }
    if(costprice>sellingprice){
        cout<<"Oops, We Made Loss";
        cout<<"Total Loss is: "<<costprice-sellingprice;
    }
    else{
        cout<<"There is no profit, no loss";
    }

}