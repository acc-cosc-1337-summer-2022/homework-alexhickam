#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


/*

3) In file homework/03_decisions_test/03_decisions_test.cpp write code to unit test the two functions.  See the Test case tables above.  
    a) Don’t forget the include statement for decisions.h.        
    b) Create two test cases “Test get grade points” and “Test calculate GPA”.
    c) Run your test cases . 

	
Test Cases:  letter_grade function
Test case name: Test letter grade function.
Five assertions for function get_grade_points(string letter_grade).
STUDENT MUST WRITE TEST CASE CODE 
file: test/homework_test/03_decisions_test/03_decisions_test.cpp


Argument value for letter_grade

Result

A

4

B

3

C

2

D

1

F

0

 

 


Test case: calculate_gpa function
Test case name: Test calculate_gpa function
Three assertions for function calculate_gpa(int credit_hours, double credit_points) 
STUDENT MUST WRITE TEST CASE CODE 
file: test/homework_test/03_decisions_test/03_decisions_test.cpp




function calculate_gpa test assertions data

Parameter Credit Hours

Parameter Credit Points

Result GPA

  12

  45

3.75

120

390

3.25

  90

180

2.00

*/