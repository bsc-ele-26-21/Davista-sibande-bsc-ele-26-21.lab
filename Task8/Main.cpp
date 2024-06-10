#include <iostream>
#include "Person.h"

int main()
{
    Person Chrissy("Chrissy", 60.0f);
    Person Redson("Redson", 75.0f);

    float totalWeight = Chrissy + Redson;
cout << "Total weight: " << totalWeight <<endl;

    if (Chrissy == Redson)
    {
    cout << "This is the same person" <<endl;
    }
    else
    {
    cout << "This is NOT the same person" <<endl;
    }

    if (Chrissy < Redson)
    {
    cout << "Chrissy is younger than Redson" <<endl;
    }
    else if (Redson > Chrissy)
    {
    cout << "Redson is older than Chrissy" <<endl;
    }

    int RedsonAge = Redson;
cout << "Redson's Age: " << RedsonAge <<endl;

    string janeFirstName = Chrissy;
cout << "Chrissy's FirstName: " << janeFirstName <<endl;

    float janeWeight = Chrissy;
cout << "Chrissy's weight: " << janeWeight <<endl;

    return 0;
}