#include <iostream>
using namespace std;

class Account
{
    private:                                    
    int balance=0;                                      //data member
    public:                                             
    int deposite_money(int add_money)                   // function decleration to show deposited money
    {
        balance=balance+add_money;  
        return balance;
    }
    int withdraw_money(int with_money)                 // function decleration to show withdrawl money
    {
        if(balance>=with_money)
        {
           balance=balance-with_money; 
           return 1;
        }
        else 
        {
            cout<<"Insufficient balance !"<<endl;
            return -1;
        }
    }    
    int interest_calc(int rate, int time)             // function decleration to calculate interest
    {
       balance=(balance*rate*time/100)+balance;
        return balance;
    }
    void display()                                   //display function
    {
        cout<<"Current balance is: "<<balance;
    }
};

int main()
{
    Account A1;
    A1.deposite_money(5000);                        //function call
    int status = A1.withdraw_money(3000);           //function call
    if(status==1)
    {
        A1.interest_calc(5,2);
        A1.display();
    }
    return 0;
}



