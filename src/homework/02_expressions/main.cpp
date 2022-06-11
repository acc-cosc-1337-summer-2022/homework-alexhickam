/*
#include<iostream>
#include "hwexpressions.h"

using std::cout;
using std::cin;
using std::string;


int main()
{
  auto num = 0;
    cout<<"Enter subtotal: ";
    cin>>num;

  cout << "Sales Tax: " << num;

auto result = get_sales_tax_amount(num);

    return 0;
}


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string meal_amount;
  double price=0;
  double tip=0;
  double sales_tax=(.0675);

  cout << "Enter price: $";
  getline (cin,meal_amount);
  stringstream(meal_amount) >> price;
  cout << "Enter tip: $";
  getline (cin,meal_amount);
  stringstream(meal_amount) >> tip;
  cout << "Meal Amount: $" << price << endl;
  cout << "Sales Tax: $" << price*sales_tax << endl;
  cout << "Tip Amount: $" << tip << endl;
  cout << "Tip Percentage: %" << (tip/price) << endl;
  cout << "Total : $" << (price*sales_tax)+price+tip << endl;
  return 0;
}

*/