#include "../include/customer.h"
#include <iostream>

using namespace std;

// Constructor
Customer::Customer()
{
    customerID = 0;
    name = "";
    age = 0;
    phone = "";
    roomNumber = 0;
    daysStayed = 0;
    checkedIn = false;
}

// Input customer details
void Customer::inputCustomer()
{
    cout << "\nEnter Customer ID: ";
    cin >> customerID;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Phone Number: ";
    cin >> phone;
}

// Display customer details
void Customer::displayCustomer() const
{
    cout << "\n-----------------------------\n";
    cout << "Customer ID  : " << customerID << endl;
    cout << "Name         : " << name << endl;
    cout << "Age          : " << age << endl;
    cout << "Phone Number : " << phone << endl;
    cout << "Room Number  : " << roomNumber << endl;
    cout << "Days Stayed  : " << daysStayed << endl;

    cout << "Checked In   : ";
    if (checkedIn)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
}

// Getters
int Customer::getCustomerID() const
{
    return customerID;
}

string Customer::getName() const
{
    return name;
}

int Customer::getAge() const
{
    return age;
}

string Customer::getPhone() const
{
    return phone;
}

int Customer::getRoomNumber() const
{
    return roomNumber;
}

int Customer::getDaysStayed() const
{
    return daysStayed;
}

bool Customer::isCheckedIn() const
{
    return checkedIn;
}

// Setters
void Customer::setRoomNumber(int room)
{
    roomNumber = room;
}

void Customer::setDaysStayed(int days)
{
    daysStayed = days;
}

void Customer::setCheckedIn(bool status)
{
    checkedIn = status;
}