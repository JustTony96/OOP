///*
//Создать  класс Стек вещественных.  
//Функции-члены вставляют элемент в стек, 
//вытаскивают элемент из стека, печатают стек , 
//проверяет вершину стека. Создать массив объектов. 
//Вывести:
//a)  стеки  с нименьшим/наибольшим верхним элементом;
//b)  список стеков, содержащих отрицательные элементы.
//
//
//
//
//*/
//
//
//#include <iostream>
//#include <string>
//
//#define massize 10
//
//using namespace std;
//
//int mascount = 0;
//
//
//class cl
//{
//public:
//	int i;
//	string s;
//	static int count;
//	
//	cl()
//	{
//		i = 0;
//		s = "nothing";
//		//count++;
//	}
//
//	cl(int ik, string sk)
//	{
//		i = ik;
//		s = sk;
//
//	}
//	cl(cl & obj)
//	{
//		i = obj.i;
//		s = obj.s;
//		//count++;
//
//	}
//
//	~cl()
//	{//count--;
//	//cout<<"/nObject deleted. Objects remain: "<<count;
//	}
//	void sets(string a)
//	{s = a;}
//	
//
//};
//
//class clcl {
//
//private:
//	clcl() {ss = "third closed class";}
//
//public: 
//	string ss;
//
//
//	static clcl * makeclass()
//	{return new clcl;}
//
//
//};
//
//
//class st
//{
//public:
//
//	static st * top;
//	//st()
//	//{data = 0;}
//
//	/*st (int);
//	int gettop ();
//	int pop ();
//	void push (int d);*/
//	
//	st ()
//	{
//		this->next = NULL;
//		}
//	
//
//	int gettop (int m)
//	{
//	if (st::top==NULL) {cout<<"NOTHING TO GET: STACK IS EMPTY/n"<<endl; return 0;}
//	
//	return st::top->data;
//	}
//
//	int pop () {
//		if (st::top==NULL) {cout<<"NOTHING TO POP: STACK IS EMPTY."<<endl; return 0;}
//
//		int b = st::top->data;
//		st::top = st::top->next;
//		return b;
//	}
//
//	
//	void push (int d, int m) {
//	st * temppointer = &st::top[m];
//	st::top = new st;
//	st::top->next = temppointer;
//	st::top-> data = d;
//	}
//	
//
//	/*void push (int d) {
//	st * temppointer = this->top;
//	this->top = new st;
//	this->next = temppointer;
//	this->data = d;
//	}*/
//
//	
//
//	
//
//private:
//	
//	st * next;
//	int data;
//
//	};
//
//st * st::top = new st[massize];
//
//void main()
//{
//	
//	//simple functions
//	/*
//	cl one;
//	
//
//	cl two(14, "maaaaaaan");
//	
//	cout<<two.s<<endl;
//	cl three(one);
//	cout<<three.s<<endl;
//
//	clcl * pointer = clcl::makeclass();
//	cout<<pointer->ss<<endl;
//	three.sets("ihatebstu");
//	cout<<three.s<<endl;
//	*/
//
//	/*
//	one stack operations
//	st stck;
//	stck.push(5);
//	cout<< stck.gettop()<<endl;
//	stck.push(4);
//	cout<< stck.gettop()<<endl;
//	stck.push(3);
//	cout<< stck.pop()<<endl;
//	cout<< stck.pop()<<endl;
//	*/
//
//	
//	
//}