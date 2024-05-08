//Banking system
#include <iostream>
#include <string.h>

using namespace std;
/**
 * This is a simple program which implements a banking system
 * User can log in as sales person or bank client
 *
 */

//Global variable declaration.
float refund, loanAmount, time, rate;
//function declaration/prototype.
float simpleInterest();
void salesPersonTransactions();
void clientTransactions();

int main()
{
    //local variable declaration
    int principal;
    int intRate;
    int user, time;

    cout << "\t\t\t\t\t\t======E-Banking System======" <<endl;
    cout << "\t\t\t\t\t\t      --------------" <<endl;

    cout << "Welcome!" <<endl <<endl << "Login as..." <<endl << "1. Sales Person" <<endl << "2. Client" <<endl <<endl;
    cin >> user;

    switch(user)
    {
        case 1:
            cout << "You are logged in as salesperson." <<endl;
            salesPersonTransactions();
            break;
        case 2:
            cout << "You are logged in as bank client." <<endl;
            clientTransactions();
            break;
        default:
            cout << "Option not available." <<endl;
    }
    return 0;
}

//Function to executed Sale's Person operations
void salesPersonTransactions()
{
    int bonus = 200;
    float commission;
    int grossSales;
    float earnings;

    cout <<"Enter your gross sales for last week: " <<endl;
    cin >> grossSales;

    commission = (9 * grossSales)/100;
    earnings = commission + bonus;

    cout << "Your earnings for last week is: " <<earnings <<endl;
}
//Function to executed client's operations
void clientTransactions()
{
    int pin, selectTransaction, user;
    float depositAmount, withdrawAmount;
    float accBalance = 0;

    cout << "Please select transaction: " <<endl <<endl;

    cout << "---options---" <<endl;
    cout << "1. Deposit Cash" <<endl << "2. Withdraw Cash" <<endl << "3. Check Account Balance" <<endl << "4. Access loan" <<endl << "5. Exit" <<endl <<endl;

    cin >> selectTransaction;

    switch(selectTransaction)
    {
        case 1:
            cout << "Please enter amount to deposit: ";
            cin >> depositAmount;
            cout << "Executing..." <<endl;
            if (depositAmount > 0)
            {
                accBalance += depositAmount;
            }
            cout << "\nYou deposited Ksh. " << depositAmount << ". Your account balance is Ksh. " << accBalance << endl;
            break;
        case 2:
            cout << "Please enter amount to withdraw: ";
            cin >> withdrawAmount;
            cout << "Executing..." <<endl;
            accBalance -= withdrawAmount;
            cout << "\nYou withdrew Ksh. " << withdrawAmount << ". Your account balance is Ksh. " << accBalance << endl;
            break;
        case 3:
            cout << "Please enter Your pin: ";
            cin >> pin;
            cout << "Executing..." <<endl;
            cout << "Your account balance is Ksh. " << accBalance << endl;
            break;
        case 4:
            cout << "Please enter amount: ";
            cin >> loanAmount;
            cout << "Your repayable amount is Ksh." <<simpleInterest() << " over a period of " <<time << " years" << " at an interest rate of " <<rate <<"%" <<endl;
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid input! Please try again." <<endl <<endl;
    }
}

//Function to perform simple interest
float simpleInterest()
{
    if (loanAmount <= 5000)
    {
        time = 0.5;
        rate = 0.08;
    }
    else if (loanAmount <= 10000)
    {
        time = 1;
        rate = 0.16;
    }
    else if (loanAmount <= 20000)
    {
        time = 1.5;
        rate = 0.32;
    }
    else if (loanAmount <= 40000)
    {
        time = 2;
        rate = 0.64;
    }
    else if (loanAmount <= 80000)
    {
        time = 2.5;
        rate = 1.28;
    }
    else if (loanAmount <= 200000)
    {
        time = 3;
        rate = 2.56;
    }
    else if (loanAmount <= 500000)
    {
        time = 3.5;
        rate = 5.12;
    }
    else if (loanAmount <= 1000000)
    {
        time = 4;
        rate = 10.24;
    }
    else
    {
        cout << "You can not borrow more than Ksh." << loanAmount << endl << endl;
        return 0; // Return 0 if loan amount exceeds the maximum allowed
    }

    refund = loanAmount + (loanAmount * rate * time);
    return refund;
}

