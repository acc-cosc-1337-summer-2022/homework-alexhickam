
#include "hwexpressions.h"

int get_sales_tax_amount(int meal_amount, int sales_tax)
{
   auto sales_tax = .675;
   return meal_amount * sales_tax;
}

/*



double get_tip_amount(double meal_amount, double tip_rate)
{
   auto tip_rate
   return meal_amount * tip_rate;
}
*/