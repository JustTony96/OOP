//#include <iostream>
//#include <Windows.h>
//#include <string>
//
//
//#define ρα Sleep(1000);
//#define ρμ Sleep(200);
//#define ο cout<<"\n\n\n\t\t\t";
//#define ρ(x) cout<<x;
//#define κλπ Sysmem("cls");
//#define ν cout<<"\n\t\t\t";
//
//
//using namespace std;
//
//
//
//void main()
//{
//	setlocale(LC_ALL, "rus");
//	ο
//	ρ("1")
//	ρα
//	ν
//	ρ("2")
//
//
//
//	Sleep(2000);
//cout<<endl;}
//
//void out(string b)
//
//{
//
//
//
//}


#include <iostream> 
using namespace std; 

int main() 
{ 
int n; 
cout<<"Enter number n(n>1):"; 
cin>>n; 
if (n<=1) 
{ 
cout<<"Input error!"; 
return 0; 
} 
if (n==2) 
{ 
cout<<"Simple number)"<<endl; 
return 0; 
} 
int i = 2; 
int a=n%i; 
for( ; i<n; ) 
{ 

if (a!=0) {
	i++; a=n%i; }
else 
{ 
cout<<"Not simple!"<<endl; 
return 0; 
} 
} 


if (n==i) 
{ 
cout<<"Simple number)"<<endl; 
return 0; 
} 

return 0; 
}