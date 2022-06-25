//write include statements
#include"dna.h"
#include <iostream>
//write using statements
using std::cin;
using std::cout;
using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/

int main() 
{
	char option = 'N';
	do
	{
   	string input_value;
    cout << "Select 1 for Get GC Content or select 2 for Get DNA Complement"<<"\n";
	cin>>input_value;
	cout <<"You have selected:"<< input_value<<"\n";

	string dna;
	cout<<"Enter a DNA string:"<<'\n';
	cin>>dna;
	cout <<"String:"<< dna<<"\n";
	
	if (input_value[0] == '1')
	{
		double GC = get_gc_content(dna);
		cout<<"Total amount of G and C: "<<GC<<"\n";
	}
	if (input_value[0] == '2')
	{
		string reverse_opposite = get_dna_complement(dna);
		cout<<"DNA compliment: "<<reverse_opposite<<"\n";
	}

	cout << "To continue, submit the letter Y "<<"\n"<< "To exit, submit the letter N"<<"\n";
	cin>>option;
	}
	while (option == 'Y' || option == 'y');

	return 0;
}