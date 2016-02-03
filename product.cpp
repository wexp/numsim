/* Simple economic simulator */

using namespace std;

#include <iostream>
#include <string>
#include "company.h"
#include "product.h"

void Product::SetName(const string& name) {
  this->name = name;
}

void Product::SetPrice(const int& price) {
  this->price = price;
}

void Product::Open() {
  cout << "Name: " << name << " Price: " << price << endl;
}

string Product::GetName() {
  return (this->name);
}

int Product::GetPrice() {
  return (this->price);
}