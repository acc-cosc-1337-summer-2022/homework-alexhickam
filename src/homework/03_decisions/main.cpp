//write include statements
#include "decisions.h"

using std::cin;
using std::cout;
using std::string;

int main() 
{
	int hours;
	string grade;

	int total_credit_points = 0;
	int total_credit_hours = 0;

	do {
		cout<<"Submit letter grade and press enter.  Key in \"x\" and press enter when complete."<<"\n";
		cin>>grade;

		if(grade == "x"){
			break;
		};

		cout<<"Submit credit hours "<<"\n";
		cin>>hours;

		int credit_points = get_grade_points(grade);

		total_credit_points += credit_points * hours;
		total_credit_hours += hours;

	} while (grade != "x");

	cout<<"Total Credit Points: "<<total_credit_points<<"\n";
	cout<<"Total Credit Hours: "<<total_credit_hours<<"\n";
	cout<<"Cumulative GPA:  "<<calculate_gpa(total_credit_hours, total_credit_points)<<"\n";
	
	return 0;
}