///*
//� ���� �������������� ��������
//	- �������� ���������� � ����� � �������
//� accert 
//
//
//*/
//
//
//#include <iostream>
//#include <Windows.h>
//#include <string>
//#include <conio.h>
//#include <stdlib.h>
//#include <cassert> 
//
//#define stime 10
//#define ce cout<<endl;
//#define cs system("cls");
//
//using namespace std;
//
//void c(char * c)
//{
//	int i=0;
//	while(*(c+i))
//	{
//		cout<<*(c+i++); //Beep(3500, 70);
//		Sleep(stime);
//		
//
//	}
//
//}
//bool scomp(char a[], char b[])
//{
//	try{
//		if(!(b[0] && b[1])) throw "\nerror while reading an storaged string";
//		if(!a[0]) throw "\nerror while reading 1st char in the inputed string";
//		if(!a[1]) throw "\nerror while reading 2st char in the inputed string";
//		if(a[0]==b[0] && a[1]==b[1]) return true;
//	}
//	catch (char * s)
//	{cout<<endl<<s; return false;}
//
//return false;
//}
//void exptest(int  point)
//{
//	assert(point < 4);
//
//	cout<<"\nPOINT ="<< &point;
//
//}
//
//void main()
//{
//	goto sec;
//	int h= 1, j = 0, g = 0;
//	try {g = h / j;} catch(...) {
//		perror("\nERROR: ");
//		//nothing
//	}
//
//	setlocale(LC_ALL, "rus");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	char  da[] = "��";
//	char  net[] = "���";
//	char input[150];
//	//cout<<"������ ����. ������� �����.";
//	again1: c("������ ����. ������� �����"); ce
//	c("������� � � �\nA = ");
//	int a, b;
//	//scanf("%d", &a); c("\nB = ");
//	//scanf("%d", &b);
//	cin>>a; c("\nB = ");
//	cin>>b;
//	
//	try {
//	if (!b) throw "zero division";
//	a = a / b;
//	c("\nC = "); cout<<a;
//	}
//	
//	
//	catch (char * p)
//	{cout<<p; perror("\nERROR: ");
//	ce
//	}
//	again2: c("\n����������� ��� �����?\n"); 
//	 fflush(stdin);
//	 fgets(input, 150, stdin);
//	 //cout<<endl<<input;
//	 //cout<<"INPUT LENGTH = "<<strlen(input);
//
//	 //input[0] = NULL;										//������ ���������� �2
//	 //cout<<"   da == input?   "<<scomp(input, da);
//
//	 //|| strlen(input)>10
//	 if (scomp(input, da) ) {cs goto again1;}
//	 //else goto again2;
//
//	 c("\nDo you want to created corrupted variable?\n");
//	 fflush(stdin);
//	 fgets(input, 150, stdin);
//	 if (scomp(input, net) ) {cs goto end1;}
//
//	 cout<<"HERE";
//	 //�������� ���������� ��-�� ������ � �������
//sec: 
//	 int  pointer = 6;
//	 //try {
//		// if(!pointer) {perror("\nERROR: ");throw 5;}
//		// //cout<<*(pointer+1);
//
//	 //}
//	 //catch(int er)
//	 //{
//		// cout<<er;
//	 //}
//	 exptest(pointer);
//	end1: c("\nEND OF THE PROGRAMM");
//	Beep(523.25, 300);
//	Beep(392, 300);
//	Beep(329, 300);
//	Beep(261.63, 300);
//	
//
//	
//	
//
//cout<<endl;}
#include <iostream>                          // ��� ��������� cout
//#include <cassert>                           // ��� ������� assert
 
//void print_adds(int* value)
//{
//  assert(value != NULL);
//  std::cout << "����� �������� � ������ = "
//            << value << std::endl;
//}
// 
int main()
{
  //int  a = 10;
  //int *ptr1 = &a;                            // ��������� �� ���������� a
  //int *ptr2 = NULL;                          // ������� ���������
 abort();
  //print_adds(ptr1);                          // ����� ������� � ��������� ����������
  //print_adds(ptr2);                          // ����� ������� � ������� ����������
 
  return 0;
}