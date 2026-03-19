#include<iostream>
using namespace std;

int main() {
    int ram, shyam, ajay;
    cout << "Enter age of Ram: ";
    cin >> ram;
    cout << "Enter age of Shyam: ";
    cin >> shyam;
    cout << "Enter age of Ajay: ";
    cin >> ajay;

    if(ram < shyam && ram < ajay){
        cout << "Ram is Youngest";
    }
    else if(shyam < ram && shyam < ajay){
        cout << "Shyam is Youngest";
    }
    else if(ajay < ram && ajay < shyam){
        cout << "Ajay is Youngest";
    }
    else {
        cout << "Two or more have the same youngest age";
    }

    return 0;
}
