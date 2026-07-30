#include "../include/customer.h"
#include <iostream>
using namespace std;

Customer::Customer()
{
    customerID = 0;
    name ="";
    age = 0;
    phone = "";
    roomNumber = 0;
    daysStayed = 0;
    checkedIn = false;
}

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

void Customer::displayCustomer() const
{
    cout << "\nCustomer ID : " << customerID << endl;
    cout << "Name : " << name << endl;
    cout << "Age : " << age <<endl;
    cout << "Phone: " << phone << endl;
    cout << "Room Number : " << roomNumber << endl;
    cout << "Days Stayed : " << daysStayed << endl;
    cout << "Checked In: " ;

    if (checkedIn)
        cout << "Yes";
    else 
        cout << "No";

    cout << endl;
}

int Customer::getCustomerID() const
{
    return customerID;
}

int Customer::getRoomNumber() const
{
    return roomNumber;
}

bool Customer::isCheckedIn() const
{
    return checkedIn;
}

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

//:: scope resolution operator tells compiler that this func belongs to Customer class.\
//getline(cin, name) --> stores full name
//