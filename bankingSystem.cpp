//Banking system
#include <iostream>

using namespace std;
/**
 * This is a simple program which implements a banking system
 *
 *
 */

//Global variable declaration.
int interest1;
//function declaration/prototype.
int interest(int principal, int intRate, int time);
void salesPersonOperations();
void clientOperations();
void simpleInterest();

int main()
{
    //local variable declaration
    int principal;
    int intRate;
    int user, time;

    cout << "\t\t\t\t\t\t======E-Banking System======" <<endl;
    cout << "\t\t\t\t\t\t      --------------" <<endl;

    cout << "Welcome!" <<endl <<endl;
    cout << "Login as..." <<endl;
    cout << "1. Sales Person" <<endl;
    cout << "2. Client" <<endl <<endl;
    cin >> user;

    switch(user)
    {
        case 1:
            cout << "You are logged in as salesperson." <<endl;
            salesPersonOperations();
            break;
        case 2:
            cout << "You are logged in as bank client." <<endl;
            clientOperations();
            break;
        default:
            cout << "You entered an invalid selection" <<endl;
    }
    return 0;
}

//Function to executed Sale's Person operations
void salesPersonOperations()
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
void clientOperations()
{
    int pin, selectAction, user;
    float depositAmount, withdrawAmount;

    cout << "Please select an option below for the transaction you want to perform: " <<endl <<endl;

    cout << "---options---" <<endl;
    cout << "1. Deposit Cash" <<endl << "2. Withdraw Cash" <<endl << "3. Check Account Balance" <<endl << "4. Exit" <<endl <<endl;

    cin >> selectAction;

    switch(selectAction)
    {
        case 1:
            cout << "Please enter amount to deposit: ";
            cin >> depositAmount;
            cout << "Executing..." <<endl;
            cout << "\nYou deposited Ksh. " << depositAmount << ". Your account balance is Ksh. " << depositAmount << endl;
            break;
        case 2:
            cout << "Please enter amount to withdraw: ";
            cin >> withdrawAmount;
            cout << "Executing..." <<endl;
            cout << "\nYou withdrew Ksh. " << withdrawAmount << ". Your account balance is Ksh. " << withdrawAmount << endl;
            break;
        case 3:
            cout << "Please enter Your pin: ";
            cin >> pin;
            cout << "Executing..." <<endl;
            cout << "\nYou withdrew Ksh. " << withdrawAmount << ". Your account balance is Ksh. " << withdrawAmount << endl;
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid input! Please try again." <<endl <<endl;
    }
}

//Function to perform simple interest
void simpleInterest()
{
    int principal;
    int rate;
    int time;
    int interest;

    cout << "Please enter the principal amount:ksh. ";
    cin >> principal;
    cout << "Please enter the rate: ";
    cin >> rate;
    cout << "Please enter time: ";
    cin >> time;

    interest = (principal*rate*time)/100;
    cout <<endl << "The simple interest is ksh. " << interest << " from the details you input: " << endl <<"principal:ksh. " <<principal <<endl  << "rate: " <<rate <<"%" <<endl  << "time: "  <<time <<"years" <<endl;

}
