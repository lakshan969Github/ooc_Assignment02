#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class Customer{
    public:
        char customerName[100];
        char address[100];
        int phoneNumber;
        Account *accountData;
        Customer();
        Customer(char *cName, char *cAddress, int cPhone, Account *aData){
            strcpy(customerName, cName);
            strcpy(address, cAddress);
            phoneNumber = cPhone;
            accountData = aData;
        }
        void DisplayDetails(){
            cout << customerName << endl;
            cout << address << endl;
            cout << phoneNumber << endl;
        }
        void checkDetails();
        void applyLoan();
};

class Account
{
private:
    Customer *cusD;
public:
    int accountNo;
    char accountType[100];
    Account();
    Account(int aNo, char *aType);
    void  getAccountDetails(int accNo, char *accType, Customer *cusData)
    {
        accountNo = accNo;
        strcpy(accountType,accType);
        cusD = cusData;
    }
    void displayDetails()
    {
        cout<<"Account Number: "<< accountNo << endl;
        cout<<"Account Type: "<<accountType<<endl;
    }
};
class currentAccount : public Account
{
private:
    double currentBalance;
public:
    void cDisplay()
    {
        cout<<"Current Account Balance :"<<currentBalance << endl;
    }
    void cDeposit()
    {
        float deposit;
        cout<<"Enter amount to Deposit :  ";
        cin>>deposit;
        currentBalance = currentBalance + deposit;
    }
    void cWithdraw()
    {
        float withdraw;
        cout<<"Balance : "<< currentBalance << endl;
        cout<<"Enter amount to be withdraw :";
        cin>>withdraw;
        if(currentBalance > 500)
        {
            currentBalance = currentBalance-withdraw;
            cDisplay();
        }
        else
        {
            cout<<"Your account balance is Insufficient" << endl;
        }
 
    }
 
 
};
 
class savingAccount : public Account
{
private:
    float savingBalance;
public:
    void sDisplay()
    {
        cout<<"Saving Account Balance :  " << setpercision(2) << savingBalance << endl;
    }
    void sDeposit()
    {
        float deposit,interest;
        cout<<"Enter amount to Deposit :  ";
        cin>>deposit;
        savingBalance = savingBalance + deposit;
        interest=(savingBalance*10)/100;
        savingBalance=savingBalance+interest;
    }
    void sWithdraw()
    {
        float withdraw;
        cout<<"Balance :- "<<savingBalance;
        cout<<"Enter amount to be withdraw : ";
        cin>>withdraw;
        if(savingBalance > 500)
        {
            savingBalance=savingBalance-withdraw;
            sDisplay();
        }
        else
        {
            cout<<"Your account balance is Insufficient";
        }
    }
};






