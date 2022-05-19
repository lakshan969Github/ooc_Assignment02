#include "account.h"
#include "customer.h"
#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    Customer *c = new Customer("Kusal Munaweera", "22/4 Temple Road, Maharagama", 7012345678);
    Customer *c = new Customer("Rahul Manoj", "242/4 Park Road, Kandy", 7012341234);
    Customer *c = new Customer("Kasun Silva", "25/4 Temple Road, Colombo", 7012345453);

    Account *a = new Account(12343213, "Saving");
    Account *a = new Account(12312345, "Current");
    Account *a = new Account(23221213, "Saving");

}