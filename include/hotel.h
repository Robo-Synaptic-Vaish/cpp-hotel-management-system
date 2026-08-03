#ifndef HOTEL_H
#define HOTEL_H

#include <vector>
#include "customer.h"

using namespace std;

class Hotel
{
    private:
        vector<Customer> customers;
        //create a vector named customers that stores Customer objects

    public:
        void addCustomer();
        void displayCustomers() const;

        Customer* searchCustomer(int customerID);

        bool isRoomAvailable(int roomNumber) const;

        void bookRoom();
        void checkOut();

        void generateBill() const;

        void saveToFile() const;
        void loadFromFile();       
};

#endif

//We use vector<Customer> 
//because each customer is a complete object containing multiple related pieces of data.
//A vector can store any datatype, including classes, but here we need to store 
//multiple customer objects together.