
#include "hwexpressions.h"

const double tax_rate = .0675;

double meal_amount=0;
double tip_rate=0;

double get_sales_tax_amount(double meal_amount)
{
   return tax_rate*meal_amount;
}

/*

double tip_rate(double meal_amount, double tip_amount)
{
   return tip_amount / meal_amount;
}
*/

double get_tip_amount(double meal_amount, double tip_rate)
{
   return meal_amount * tip_rate;
}
