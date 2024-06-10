#include <iostream>

using namespace std;

int main()

{

int a = 21;

int b = 10;

int c;

if( a == b){
    cout << "Line 1 - a is equal to b"<<endl;
} else {
    cout <<" Line 1 - a is not equal to b" <<endl;
}
if( a > b){
    cout << "Line 2 - a is greater than b"<<endl;
} else {
    cout <<" Line 2 - a is n ot greater than b" <<endl;
}

if( a < b){
    cout << "Line 3 - a is less than b"<<endl;
} else {
    cout <<" Line 3 - a is not less than b" <<endl;
}

int d = 5;

int e = 20;

if( d <= e)
    cout<< " Line 4 - a is less than / equal to b"<<endl;
if( e >= d)
    cout<< "Line 4 - a is greater than / equal to b"<<endl;

    return 0;
}
