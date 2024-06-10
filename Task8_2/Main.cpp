#include <iostream>
#include "Box.h"
using namespace std;
int main() {
    Box Box_1;
    Box Box_2;
    Box Box_3;
    double volume = 0.0;

    // Box 1 specification
    Box_1.SetLength(6.0);
    Box_1.SetBreadth(7.0);
    Box_1.SetHeight(5.0);

    // Box 2 specification
    Box_2.SetLength(12.0);
    Box_2.SetBreadth(13.0);
    Box_2.SetHeight(10.0);

    // Volume of Box 1
    volume = Box_1.GetVolume();
cout << "Volume of Box_1 : " << volume <<endl;

    // Volume of Box 2
    volume = Box_2.GetVolume();
cout << "Volume of Box_2 : " << volume <<endl;

    // Add two objects
    Box_3 = Box_1 + Box_2;

    // Volume of Box 3
    volume = Box_3.GetVolume();
cout << "Volume of Box_3 : " << volume <<endl;

    return 0;
}