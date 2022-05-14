#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class Customer{
    private:
        char cName[20];
        char cAddress[20];
        int tPhoneNo;
        char accType[20];
        double cAmount;
    public:
        void createAccount(char *name, char *address, int phoneNo, char *accType, double cAmount);
        // void withdraw(Account *aBalance);
        // void deposit(Account *aBalance);
};

class Account{
    protected:
        int CID;
        char name;
        char address;
        int phoneNo;
    public:
        void displayAccount();
};


class SavingAccount : public Account{
    protected:
        char accType[20];
        double accBalance;
    public:
        void addAccount();
        void updateAccount();
        void removeAccount();
};

class CurrentAccount : public Account{
    protected:
        char accType[20];
        double accBalance;
    public:
        void addAccount();
        void updateAccount();
        void removeAccount();
};


class LoanAccount : public Account{
    protected:
        char accType[20];
        double accBalance;
    public:
        void addAccount();
        void updateAccount();
        void removeAccount();
};


class Branch{
    private:
        char bID[20];
        char location[20]; 
};

class Employee{ 
    private:
        char empID[20];
        char empName[100];
        char empAddress[100];
        double salary;
    public:
        void getDetails();
};

class Transaction{
    private:
        int cardNo;
        char password[100];
    public:
        void getTransactionDetails();
};


