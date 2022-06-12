
#include "hwexpressions.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

using std::cout;
using std::cin;
using std::string;

void get_sales_tax_amount()
{
  double meal_amount=0;
  cout<< "Lets Calculate a Sales Tax... ";
  system("pause");
  cout<< "Enter Subtotal: $";
  cin >> meal_amount;
  cout<< "Sales Tax Amount: $" << meal_amount * tax_rate<< endl;
}

void get_tip_amount()
{
  double meal_amount=0, tip_rate=0;
  cout<< "Lets Calculate a Tip... ";
  system("pause");
  cout<< "Enter Subtotal: $";
  cin >> meal_amount;
  cout<< "Enter Tip as a Percentage: %";
  cin >> tip_rate;
  cout<< "Tip : $" << meal_amount * (tip_rate/100)<< endl;
}


int main ()
{



  string meal_amount;
  double price=0;
  double tip_amount=0;
  
  //tip_rate= tip_amoun t/ meal_amount
  //tax_amount= meal_amount * tax_rate
  //total = meal_amount+tax amount+tip_amount

  //get_sales_tax_amount();
  //get_tip_amount();

  cout << "Enter Subtotal: $";
  getline (cin,meal_amount);
  stringstream(meal_amount) >> price;
  cout << "Enter tip: $";
  getline (cin,meal_amount);
  stringstream(meal_amount) >> tip_amount;

  
 
 
 
  cout << "Meal Amount: $" << price << endl;
  cout << "Sales Tax: $" << (price*tax_rate) << endl;
  cout << "Tip Amount: $" << tip_amount << endl;
  cout << "Tip Percentage: %" << (tip_amount/price) << endl;
  cout << "Total : $" << (price*tax_rate)+price+tip_amount << endl;




  return 0;
}

