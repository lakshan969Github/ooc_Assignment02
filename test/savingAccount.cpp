#include "Account.h"

#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

void savingAccount::savingDisplay(){
  cout<<"Saving Account Balance: "<< setprecision(3) << fixed << savingBalance << endl;
}

void savingAccount::savingDeposit(){
  
  float deposit;
  cout<<"Enter amount to Deposit : ";
  cin>>deposit;
  savingBalance = savingBalance + deposit;
  
}

void savingAccount::savingWithdraw(){
  
  float withdraw;
  cout<<"Account Balance: "<< setprecision(3) << fixed <<  savingBalance << endl;
  cout<<"Enter amount to be withdraw :";
  cin>>withdraw;
  if(savingBalance > 500)
  {
      savingBalance = savingBalance-withdraw;
  }
  else
  {
      cout<<"Your account balance is Insufficient" << endl;
  }
  
}