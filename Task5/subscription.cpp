#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
std::srand(static_cast<unsigned int>(std::ime(nullptr)));
//to generate an int random number between 0 and 11
int daysUntilExpiretion = std::rand() % 12;
//showing the subscription message based on the number of days prior to the expiry date
if (daysUntilExpiration <= 0)
{
cout << "Your subscription has expired" <<sndl; 
}
else if(daysUntilExpiration <= 1)
{
cout << "your subscription expires within a day!" <<endl;
cout << "Renew now and save 20%!" <<endl;
}
else if(daysUntilExpiration <= 5)
{
cout << "Your subscription expires in " << daysUntilExpiration << "days" <<endl;
cout << "Renew now and save 10%!" <<endl;
}
else if (daysUntilExpiration <= 10)
{
cout << "Your subscription will expire soon. Renew now!" <<endl;
}
else 
{
cout << "You have an active subscription. " <<endl
}
return 0;
}