#include "Person.h"

Person::Person() : hWeight(0.0f), hFirst_name(""), hAge(0) {}

Person::Person(const string& newFirstName, float newWeight)
    : hWeight(newWeight), hFirst_name(newFirstName), hAge(0) {}

Person::~Person() {}

Person Person::operator+(const Person& other_Person)
{
    return Person(hFirst_name + " " + other_Person.hFirst_name, hWeight + other_Person.hWeight);
}

bool Person::operator==(const Person& other_Person) const
{
    return hFirst_name == other_Person.hFirst_name;
}

bool Person::operator!=(const Person& other_Person) const
{
    return !(*this == other_Person);
}

bool Person::operator<(const Person& other_Person) const
{
    return hAge < other_Person.hAge;
}

bool Person::operator>(const Person& other_Person) const
{
    return hAge > other_Person.hAge;
}

Person::operator int() const
{
    return hAge;
}

Person::operator string() const
{
    return hFirst_name;
}

Person::operator float() const
{
    return hWeight;
}