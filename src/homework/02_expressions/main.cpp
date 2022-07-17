
#include "hwexpressions.h"
#include <iostream>

using namespace std;

int main()
{
  double meal_amount=0;
  double tip_rate=0/100;
  double total=0;

  cout<<"Enter Subtotal: $";
  cin>>meal_amount;

  cout<<"Enter A Percentage for Tip: %";
  cin>>tip_rate;

  double tax_amount=get_sales_tax_amount(meal_amount);

  double tip_amount=get_tip_amount(tip_rate/100,meal_amount);
  
  total=meal_amount+tax_amount+tip_amount;
  
  cout<<"Subtotal: $"<<meal_amount<<endl;
  cout<<"Tax: $"<<tax_amount<<endl;
  cout<<"Tip: $"<<tip_amount<<endl;
  cout<<"Total: $"<<total<<endl;

  return 0;
}