#pragma once
#include<iostream>
#include <string>


class Customer{
    private:
      char customerName[100];
      char address[100];
      int phoneNumber;
    public:
      int accountNo;
      char accountType[100];
      Customer();
      Customer(char cName[], char cAddress[], int cPhone){
        strcpy(customerName, cName);
        strcpy(address, cAddress);
        phoneNumber = cPhone;
      }
      void displayDetails();
};
