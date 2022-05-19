#pragma once
#include<iostream>
#include <string>

class Account{
  protected:
    char customerName[100];
    char address[100];
    int phoneNumber;
  public:
    int accountNo;
    char accountType[100];
    Account();
    Account(int aNo, char aType[]){
        accountNo = aNo;
        strcpy(accountType, aType);
    }
    void getAccountDetails(int accNo, char accType[100]);
    void displayDetails();
};