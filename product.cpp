/* Simple economic simulator */

using namespace std;

#include <iostream>
#include <string>
#include "company.h"
#include "product.h"

void Product::SetName(string name) {
  this->name = name;
}

void Product::SetPrice(int price) {
  this->price = price;
}

string Product::GetName() {
  return (this->name);
}

int Product::GetPrice() {
  return (this->price);
}