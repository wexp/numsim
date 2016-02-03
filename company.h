/* Simple economic simulator */

#ifndef _COMPANY_H
#define _COMPANY_H

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include "product.h"
#include "money.h"

class Company {
public:
  // Constructor
  Company(string name);
  // Getters
  string GetCompanyName();
  void ListCompanyProducts();
  void AddProduct(string name, int price);
  //
private:
  Product GetCompanyProduct(Product* inprod);
  Product* VAddProduct(string name, int price);
  vector <Product*> CompanyProducts;
  string name;
  Money CompanyMoney;
};

#endif