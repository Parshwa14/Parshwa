//Que 5 Assume a class cricketer is declared. Declare a derived class batsman from cricketer.
//	  Data member of batsman. Total runs, Average runs and best performance.
//	  Member functions input data, calculate average runs, Display data. (Single Inheritance)


#include <iostream>
using namespace std;


class Cricketer {		//parent class/Super class/Base class
	public:
		int match,notout,runs;
		float avg;

		void getR() {
			cout<<"\nEnter Total matches Played :";				//getting input
			cin>>match;
			cout<<"\nEnter number of matches in which the batsman remained NOTOUT :";
			cin>>notout;
			cout<<"\nEnter Total Run Scored :";
			cin>>runs;

		}

};

class Batsman : public Cricketer {	//child class/Derived class/Sub class				//single level inheritance
	public:

		void avgrun() {
			cout<<"\n\nBatting Average = "<<((float)runs/ (match-notout));					//calculating the batting average
		}

		void data() {
			cout<<"\nTotal Run = "<<runs;
			cout<<"\nTotal Matches Played = "<<match;				//function for displaying all the data
			cout<<"\nNotout = "<<notout;
		}
};
int main()
{
	
	Batsman info;
	info.getR();						//Calling all the methods
	info.avgrun();
	info.data();
	return 0;
}