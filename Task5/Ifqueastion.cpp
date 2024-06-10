#include<iostream>
using namespace std;
int main()
{
int input;
cout << "Enter an integer value between 5 and 10" <<endl;
while(true)
{
cin >> input;
if(input < 5 || input > 10)
cout << "invalid input, please enter the number between 5 and 10" <<endl;
else
{
cout << "your input has been accepted" <<endl;
break;
}
}
return 0;
}