/* Simple economic simulator */

#ifndef _PRODUCT_H
#define _PRODUCT_H

using namespace std;

#include <iostream>
#include <memory>
#include <string>
#include "company.h"
#include "money.h"

class Product {
public:
  void SetName(const string& name);
  void SetPrice(const int& price);
  string GetName();
  int GetPrice();
  void Open();
private:
  string name;
  int price;
};

class ProductBuilder {
public:
  virtual ~ProductBuilder() {};
  
  Product* GetProduct() {
    return ProductPointer.get();
  }
  void CreateNewProduct() {
    ProductPointer = unique_ptr<Product>(new Product);
  }
  virtual void BuildName() = 0;
  virtual void BuildPrice() = 0;
protected:
  unique_ptr<Product> ProductPointer;
};

class Build {
public:
  void OpenProduct() {
    BuiltProductBuilder->GetProduct()->Open();
  }
  void MakeProduct(ProductBuilder* pb) {
    BuiltProductBuilder = pb;
    BuiltProductBuilder->CreateNewProduct();
    BuiltProductBuilder->BuildName();
    BuiltProductBuilder->BuildPrice();
  }
private:
  ProductBuilder* BuiltProductBuilder;
};

class StandardProductBuilder : public ProductBuilder {
public:
  virtual ~StandardProductBuilder() {};
  
  virtual void BuildName() {
    ProductPointer->SetName("SimpleProduct");
  }
  virtual void BuildPrice() {
    ProductPointer->SetPrice(50);
  }
};

#endif