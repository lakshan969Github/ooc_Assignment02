#pragma once

class Account{
  private:
    char customerName[100];
    char address[100];
    int phoneNumber;
    double loanAmount;
    char loanType[100];
  public:
    int accountNo;
    char accountType[100];
    Account();
    Account(int aNo, char *aType);
    void getAccountDetails(int accNo, char accType[100], char customerName[]);
    void displayDetails();
};