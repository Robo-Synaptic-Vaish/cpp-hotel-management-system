#include "../include/hotel.h"
#include <iostream>

using namespace std;

int main()
{
    Hotel hotel;     //creates a Hotel object
    int choice;      //stores the user's menu choice

    do
    {
        cout << "\n==============================\n";
        cout << "   HOTEL MANAGEMENT SYSTEM\n";
        cout << "==============================\n";

        cout << "1. Add Customer\n";
        cout << "2. Display Customers\n";
        cout << "3. Book Room\n";
        cout << "4. Check Out\n";
        cout << "5. Generate Bill\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                hotel.addCustomer();
                break;

            case 2:
                hotel.displayCustomers();
                break;

            case 3:
                hotel.bookRoom();
                break;

            case 4:
                hotel.checkOut();
                break;

            case 5:
                hotel.generateBill();
                break;

            case 6:
                cout << "\nThank you for using Hotel Management System!\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 6);
    //keeps displaying the menu until the user chooses Exit

    return 0;    //program ended successfully
}