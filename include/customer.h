#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer
{
    private:
        int customerID;
        string name;
        int age;
        string phone;
        int roomNumber;
        int daysStayed;
        bool checkedIn;      //yes or no

    public:
        Customer();       //constructor

        void inputCustomer();    //member funcs.
        void displayCustomer() const;   //displaying info won't modify the object .:. const

        int getCustomerID() const;
        string getName() const;
        int getAge() const;
        string getPhone() const;
        int getRoomNumber() const;
        int getDaysStayed() const;
        bool isCheckedIn() const;

        void setRoomNumber(int room);    //change private data in a controlled way
        void setDaysStayed(int days);
        void setCheckedIn(bool status);
};

#endif


//why use getters and setters
//instead of allowing anyone to directly change values
//we give controlled access.
//Later, we can add validation inside these functions.