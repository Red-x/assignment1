// Example program
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	
	string lname; 
	string fname; 
public:
	Person() { lname = ""; fname = ""; } // #1
	Person(const string & ln, const string & b ){
	
	
		lname = ln;
		fname = b;
	
	}// #2
	Person(const string & ln){


		lname = ln;
		fname = "_________";

	}// #2


	// the following methods display lname and fname
	void Show()const{
		cout << lname << " " << fname << endl  ;

	} ; // firstname lastname format
	void FormalShow() const{
	
		cout << fname << " " << lname << endl;
	}
};



int main()
{
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults
	one.Show();
	cout << endl;
	one.FormalShow();
	three.Show();
	system("pause");
	

}
