#pragma once

class Customer{
    public:
      char customerName[100];
      char address[100];
      int phoneNumber;
      double loanAmount;
      char loanType[100];
      int accountNo;
      char accountType[100];
      customer();
      customer(char *cName, char *cAddress, int cPhone){
        strcpy(customerName, cName);
        strcpy(address, cAddress);
        phoneNumber = cPhone;
      }
      void displayDetails();
      void applyLoan(double lAmount, char lType[]);
};