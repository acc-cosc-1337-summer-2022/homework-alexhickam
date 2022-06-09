//write include statement for if header
#include "if.h"



//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise

bool is_overtime(double hours) //create a boolean expression that returns true of false
{
    auto overtime = false;

    if (hours > 40) //uses boolean expression
    {
        overtime = true;/* code */
    }
    
    return overtime;
}
