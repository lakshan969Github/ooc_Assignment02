#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

// classes

// Customer class
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

// Account class
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


// Current class
class currentAccount : public Account{
  private:
    double currentBalance;
  public:
    void currentDisplay();
    void currentDeposit();
    void currentWithdraw();
};


// Saving account
class savingAccount : public Account{
  private:
    double savingBalance;
  public:
    void savingDisplay();
    void savingDeposit();
    void savingWithdraw();
};

// Customer
void Customer :: displayDetails(){
  Account accD;
  cout << "Customer Name: " << customerName << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Customer phone number: " << phoneNumber << endl;
  cout << "Customer Account Number: " << accD.accountNo << endl;
  cout << "Customer Account Type: " << accD.accountType << endl;
}


// Account
void Account :: getAccountDetails(int accNo, char accType[]){
    accountNo = accNo;
    strcpy(accountType,accType);
}


void Account :: displayDetails(){
    cout<<"Account Number: "<< accountNo << endl;
    cout<<"Account Type: "<<accountType<<endl;
}


// current account
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


// saving account
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

// main method
int main(){
    Customer *c = new Customer("Kusal Munaweera", "22/4 Temple Road, Maharagama", 7012345678);
    Customer *c = new Customer("Rahul Manoj", "242/4 Park Road, Kandy", 7012341234);
    Customer *c = new Customer("Kasun Silva", "25/4 Temple Road, Colombo", 7012345453);

    Account *a = new Account(12343213, "Saving");
    Account *a = new Account(12312345, "Current");
    Account *a = new Account(23221213, "Saving");

}