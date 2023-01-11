#include <iostream>
using namespace std;


class staticDemo{
	public:
		static int a;    				//static keyword
		
		void setVal()
		{
			cout<<"\nEnter A : ";
			cin>>a;
		}	
		
		void putVal()
		{
			cout<<"\nA = "<<a;
		}
};
	
int staticDemo :: a =0;      						//static value assign

int main()
{
	staticDemo sd,sd1,sd2;
	sd.setVal();
	sd1.setVal();
	sd2.setVal();
	
	sd.putVal();
	sd1.putVal();
	sd2.putVal();	
	return 0;
}