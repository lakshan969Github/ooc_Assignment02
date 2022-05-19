#pragma once
#include<iostream>
#include <string>
#include "account.h"

class savingAccount : public Account{
  private:
    double savingBalance;
  public:
    void savingDisplay();
    void savingDeposit();
    void savingWithdraw();
};