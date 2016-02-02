/* Simple economic simulator */

#ifndef _PRODUCT_H
#define _PRODUCT_H

using namespace std;

#include <iostream>
#include <string>
#include "company.h"
#include "money.h"

class Product {
public:
  void SetName(string name);
  void SetPrice(int price);
  string GetName();
  int GetPrice();
private:
  string name;
  int price;
};

#endif