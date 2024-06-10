#include <iostream>

using namespace std;

int main()

{

int a = 5;

int b = 20;

int c;

if( a && b){
    cout << "Line 1 - the condition is true"<<endl;
}
if( a || b){
    cout << "Line 2 - the condition is not true"<<endl;
}

int d = 0;

int e = 10;

if( d && e ){   
    cout<< " Line 3 - condition is true "<<endl;
} else {
    cout<< "Line 4 - condition is not true" <<endl;
}
if( e >= d){

    cout<< "Line 5 - condition is true "<<endl;
}
    return 0;
    
}
