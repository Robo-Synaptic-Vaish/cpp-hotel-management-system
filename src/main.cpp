#include "../include/hotel.h"
#include <iostream>
using namespace std;

int main()
{
    Hotel hotel;
    int choice;

    do
    {
        cout << "==============================\n";
        cout << "   HOTEL MANAGEMENT SYSTEM\n";
        cout << "==============================\n";
        cout << "1. Add Customer\n";
        cout << "2. Display Customers\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                hotel.addCustomer();
                break;

            case 2:
                hotel.displayCustomers();
                break;

            case 3:
                cout << "\nThank you for using Hotel Management System!\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }
    }while (choice != 3);
    return 0;
};

