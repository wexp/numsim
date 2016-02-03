/* Simple economic simulator */

using namespace std;

#include "company.h"
#include "product.h"
#include <memory>
#include <iostream>
#include <string>

int main() {
  Company PlayerCompany("Company 1");
  cout << "Companies made: " << PlayerCompany.GetCompanyName() << endl;
  PlayerCompany.AddProduct("Testproduct", 1);
  PlayerCompany.AddProduct("Testproduct", 2);
  cout << "Currently has these products: ";
  cout << "\n\n";
  Build build;
  StandardProductBuilder standardProductBuilder;
  build.MakeProduct(&standardProductBuilder);
  build.MakeProduct(&standardProductBuilder);
  build.MakeProduct(&standardProductBuilder);
  build.MakeProduct(&standardProductBuilder);
  build.OpenProduct();
  return 0;
}