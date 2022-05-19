#pragma once
#include<iostream>
#include <string>
#include "account.h"

class currentAccount : public Account{
  private:
    double currentBalance;
  public:
    void currentDisplay();
    void currentDeposit();
    void currentWithdraw();
};