#include <iostream>
using namespace std;


class Sample
{
	public:
		static int objCount;
		
		Sample()
		{
			cout<<"\nDefault Constructor Called.";
			objCount++;	
		}	
};

int Sample :: objCount = 0;


int main()
{
	Sample s1,s2,s3,s4;
	cout<<"\nObject Count : "<<s1.objCount;
	return 0;
}