#include "account.h"
#include<iostream>
#include <string>

using namespace std;

void Account :: getAccountDetails(int accNo, char accType[]){
    accountNo = accNo;
    strcpy(accountType,accType);
}


void Account :: displayDetails(){
    cout<<"Account Number: "<< accountNo << endl;
    cout<<"Account Type: "<<accountType<<endl;
}