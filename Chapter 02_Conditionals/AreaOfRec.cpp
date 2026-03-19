#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    int area, perimeter;

    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    if(area > perimeter){
        cout << "Area of rectange is greater than Perimter";
    }
    if(perimeter > area){
        cout<< "Perimeter of Rectangle is Greater than Area";
    }
    else{
        cout<< "Both are equal! ";
    }
}


