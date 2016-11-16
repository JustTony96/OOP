#include <iostream>
#include <string.h>


using namespace std;

//"If you wanna advice go check vk.com\exonex"
class cl
{
public:
	 static char * help;
	
	cl()
	{
	

	}
};


void main()
{
	cl::help = "If you wanna advice go check vk.com\exonex";
	cl first;
	cout<<first.help;

}