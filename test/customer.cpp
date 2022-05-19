#include "Customer.h"
#include "Account.h"

#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;


void Customer :: displayDetails(){
  Account accD;
  cout << "Customer Name: " << customerName << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Customer phone number: " << phoneNumber << endl;
  cout << "Customer Account Number: " << accD.accountNo << endl;
  cout << "Customer Account Type: " << accD.accountType << endl;
}

void Customer :: applyLoan(double lAmount, char lType[]){
  loanAmount = lAmount;
  strcpy(loanType, lType);
}

