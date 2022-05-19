#include "currentAccount.h"
#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

void currentAccount:: currentDisplay(){
  cout<<"Current Account Balance: "<< setprecision(3) << fixed << currentBalance << endl;
}

void currentAccount::currentDeposit(){
  
  float deposit;
  cout<<"Enter amount to Deposit: ";
  cin>>deposit;
  currentBalance = currentBalance + deposit;
  
}

void currentAccount::currentWithdraw(){
  float withdraw;
  cout<<"Account Balance : "<< setprecision(3) << fixed <<  currentBalance << endl;
  cout<<"Enter amount to be withdraw :";
  cin>>withdraw;
  if(currentBalance > 500)
  {
      currentBalance = currentBalance-withdraw;
  }
  else
  {
      cout<<"Your account balance is Insufficient" << endl;
  }
  
}
