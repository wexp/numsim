/* Simple economic simulator */

#define DEBUG

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include "company.h"
#include "product.h"

Company::Company(string name)
: name (name)
{
}

void Company::AddProduct(string name, int price) {
  Product* NewProduct;
  NewProduct = VAddProduct(name, price);
  CompanyProducts.push_back(NewProduct);
}

Product* Company::VAddProduct(string name, int price) {
  Product* NewProduct = new Product;
  NewProduct->SetName(name);
  NewProduct->SetPrice(price);
  return NewProduct;
}

/* This function needs some methods to dereference the pointers in the vector.
 * Maybe create a helper function?
 * Or maybe just return a whole class, and use a helper fuction
 * to print out all of them?
 * CompanyProducts vector is only pointers, so this function
 * basically only gets all pointers in the vector right now.
 */
int Company::ListCompanyProducts() {
  for (int x=0; x<CompanyProducts.size(); x++) {
    int y = 0;
    y = CompanyProducts[x];
    cout << y;
  }
}

string Company::GetCompanyName() {
  return this->name;
}