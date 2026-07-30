#include "../include/hotel.h"   //gives us access to dec. in hotel.h
#include <iostream>
using namespace std;

void Hotel::addCustomer()
{
    Customer customer;    //creates a temp Customer object

    customer.inputCustomer();

    customers.push_back(customer);   //vector grows automatically

    cout<<"\nCustomer added successfully!\n";
}

void Hotel::displayCustomers() const
{
    if(customers.empty())
    {
        cout<<"\nNo customers found.\n";
        return;
    }

    cout<<"\n===== Customer List =====\n";

    for(const Customer &customer : customers)  //go thru every cust stored in the vector
    //for each customer in customers
    //without '&' c++ makes a copy of every cusomter
    //'const' --> I'm only reading this customer
    {
        customer.displayCustomer();
    }
}

//for(const Customer &customer : customers)
//for every customer stored in the customers vector, 
//look at the original object(don't make a copy) and don't modify it.