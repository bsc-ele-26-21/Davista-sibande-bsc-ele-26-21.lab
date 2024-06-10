#pragma once
#include <string>
using namespace std;

class Person
{
public:
    Person();
    Person(const string& newFirstName, float newWeight);
    ~Person();

    // Overload the add operator
    Person operator+(const Person& other_Person);

    // Overload the relational operators
    bool operator==(const Person& other_Person) const;
    bool operator!=(const Person& other_Person) const;
    bool operator<(const Person& other_Person) const;
    bool operator>(const Person& other_Person) const;

    // Conversion operators
    operator int() const;
    operator string() const;
    operator float() const;

private:
    float hWeight;
    string hFirst_Name;
    int hAge;
};