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
        };
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
    char accountType[100];
    Customer *cusD;
public:
    int accountNo;
    Account();
    Account(int aNo, char *aTy);
    void  getAccountDetailsint(int accNo, char *accTy, Customer *cusData)
    {
        accountNo = accNo;
        strcpy(accountType,accTy);
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
    float currentBalance;
public:
    void cDisplay()
    {
        cout<<"Current Account Balance :"<< currentBalance << endl;
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
            cout<<"Your account new balance: "<< currentBalance << endl;
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
        cout<<"Saving Account Balance :  "<<savingBalance << endl;
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
            cout<<"Your account new balance: "<<savingBalance << endl;
        }
        else
        {
            cout<<"Your account balance is Insufficient";
        }
    }
};





