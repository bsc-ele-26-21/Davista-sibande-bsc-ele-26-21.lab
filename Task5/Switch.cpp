#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main ()
{
    srand(static_cast<unsigned int> (time(0)));
    int daysuntilExpiration =rand() % 12;
   
    switch (daysuntilExpiration)
    {
case 0:
cout <<"your subscription has expired"<<endl;
break;
case 1:
cout<<"your subscription expires with in a day! Renew now and save 20%!" << endl;
break;
case 2:
case 3:
case 4:
case 5:
cout <<" your subscription expires in " << " " << daysuntilExpiration << " " << " days.Renew now and save 10%!"<<endl;
break;
defaut:
if (daysuntilExpiration <= 10)

{
    cout<< "your subscription will expire soon. Renew now!"<<endl;}
    else {
    cout<<" you have an active subscription"<<endl;
    } 
    break;
    }
return 0;
}