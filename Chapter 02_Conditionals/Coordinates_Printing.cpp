#include<iostream>
using namespace std;

int main(){
    int coordinate_x, coordinate_y;

    cout << "Enter Coordinate of X: ";
    cin >> coordinate_x;
    cout << "Enter Coordinate of Y: ";
    cin >> coordinate_y;

    if(coordinate_x > 0 && coordinate_y > 0){
        cout << "The Coordinates are in the 1st Quadrant";
    }
    else if(coordinate_x < 0 && coordinate_y > 0){
        cout << "The Coordinates are in the 2nd Quadrant";
    }
    else if(coordinate_x < 0 && coordinate_y < 0){
        cout << "The Coordinates are in the 3rd Quadrant";
    }
    else if(coordinate_x > 0 && coordinate_y < 0){
        cout << "The Coordinates are in the 4th Quadrant";
    }
    else if(coordinate_x == 0 && coordinate_y == 0){
        cout << "The Coordinates are at the Origin";
    }
    else if(coordinate_x == 0){
        cout << "The Coordinates are on the Y-axis";
    }
    else if(coordinate_y == 0){
        cout << "The Coordinates are on the X-axis";
    }
}
