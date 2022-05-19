#include "account.h"
#include "customer.h"
#include<iostream>
#include <string>

using namespace std;

void Customer :: displayDetails(){
  Account accD;
  cout << "Customer Name: " << customerName << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Customer phone number: " << phoneNumber << endl;
  cout << "Customer Account Number: " << accD.accountNo << endl;
  cout << "Customer Account Type: " << accD.accountType << endl;
}