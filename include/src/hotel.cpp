#include "../include/hotel.h"   //gives us access to dec. in hotel.h
#include <iostream>

using namespace std;

// Adds a new customer to the hotel
void Hotel::addCustomer()
{
    Customer customer;    //creates a temp Customer object

    customer.inputCustomer();

    customers.push_back(customer);   //vector grows automatically
    //adds a new Customer obj to the end of the vector

    cout << "\nCustomer added successfully!\n";
}

// Displays all customers
void Hotel::displayCustomers() const
{
    if (customers.empty()) //checks whether vector contains any cust
    {
        cout << "\nNo customers found.\n";
        return;
    }

    cout << "\n===== Customer List =====\n";

    for (const Customer &customer : customers) //go thru every cust stored in the vector
    //for each customer in customers
    //without '&' c++ makes a copy of every customer
    //'const' --> I'm only reading this customer
    {
        customer.displayCustomer();
    }
}

//for(const Customer &customer : customers)
//for every customer stored in the customers vector,
//look at the original object(don't make a copy) and don't modify it.

// Searches a customer by Customer ID
Customer* Hotel::searchCustomer(int customerID)
{
    for (Customer &customer : customers)
    {
        if (customer.getCustomerID() == customerID)
        {
            return &customer;    //returns the address of the original customer
        }
    }

    return nullptr;      //there is no valid address
}

// Checks if a room is available
bool Hotel::isRoomAvailable(int roomNumber) const
{
    for (const Customer &customer : customers)
    {
        if (customer.isCheckedIn() &&   //customer is currently staying
            customer.getRoomNumber() == roomNumber)
        {
            return false;               //room already occupied
        }
    }

    return true;                        //room is available
}

// Books a room for a customer
void Hotel::bookRoom()
{
    int customerID;
    int roomNumber;

    cout << "\nEnter Customer ID: ";
    cin >> customerID;

    Customer *customer = searchCustomer(customerID);
    //pointer stores the address of the original customer

    if (customer == nullptr)
    {
        cout << "\nCustomer not found.\n";
        return;
    }

    cout << "Enter Room Number: ";
    cin >> roomNumber;

    if (!isRoomAvailable(roomNumber))
    {
        cout << "\nRoom is already occupied.\n";
        return;
    }

    customer->setRoomNumber(roomNumber);
    customer->setCheckedIn(true);
    // '->' is used because customer is a pointer

    cout << "\nRoom booked successfully!\n";
}

// Checks out a customer
void Hotel::checkOut()
{

}

// Generates customer bill
void Hotel::generateBill() const
{

}