//Создать  класс Стек вещественных.  
//Функции-члены вставляют элемент в стек, 
//вытаскивают элемент из стека, печатают стек , 
//проверяет вершину стека. Создать массив объектов. 
//Вывести:
//a)  стеки  с нименьшим/наибольшим верхним элементом;
//b)  список стеков, содержащих отрицательные элементы.


#include <iostream>

using namespace std;

#define max_amount_of_stacks 11

int current_number_of_stacks = 0;

class stackel
{
	
	
public:
	stackel * next;
	int data;

	

};
stackel * temp = NULL;
bool created[max_amount_of_stacks] = {true};

int minuscount[max_amount_of_stacks];
int minusCC = 0;
class stackcontrol
{
	
public:
	stackel * top[max_amount_of_stacks];


	void push(int m, int n){
		if (n<0) minuscount[minusCC++] = m;
		if (created[m]) {temp = top[m]; }
	top[m] = new stackel;
	top[m]->data = n;
	top[m]->next = NULL;
	if (created[m]) {top[m]->next = temp; }
	if (!created[m]) current_number_of_stacks++;
	created[m]=true;
	
	}

	int gettop(int m){
	if (created[m]) return top[m]->data;
	else {cout<<endl<<"THERE IS NO "<<m<<" STACK\n"; return 0;}
	}
	
	int pop(int m){
		if (created[m])
		{
			int tempi = top[m]->data;
			cout<<tempi<<"  ";
			if (top[m]->next) top[m] = top[m]->next;

			else { top[m] = NULL; //cout<<endl<<"It was last element"<<endl; 
			cout<<"\r";
			created[m] = false;}
			
			return tempi;
		
		}
		else {cout<<endl<<"NO SUCH STACK\n"; return 0;}
	}


	void showstack(stackcontrol &control, int m){
		/*while(top[m])
		{
		push(11, pop(m));
		}
		while(top[11]) push(m, pop(11));*/

		control.push (10, control.pop(m));
		control.push (10, control.pop(m));
		control.push (10, control.pop(m));
		control.push (10, control.pop(m));
		control.push (10, control.pop(m));
		
		control.push (m, control.pop(10));
		control.push (m, control.pop(10));
		control.push (m, control.pop(10));
		control.push (m, control.pop(10));
		control.push (m, control.pop(10));
		cout<<endl;



	}


	
};

void checkmaxmin(stackcontrol &control)
{
	int max = -50;
	int min = 100;
	int maxnum = 0;
	int minnum = 0;

	for (int i = 0; i<4;i++)
	{ if (control.gettop(i)>max) {max = control.gettop(i); maxnum = i;}
	if (control.gettop(i)<min) {min = control.gettop(i); minnum = i;}

	
	}
	cout<<endl;
	cout<<"MAX TOP IN STACK #"<<maxnum+1;
	cout<<endl<<"MIN TOP IN STACK #"<<minnum+1;

}


void checkminus(stackcontrol &control)
{
	cout<<endl<<"STACK WITH NEGATIVE NUMBERS ARE: ";
	for (int i = 0; i<minusCC; i++)
		cout<<minuscount[i]<<" ";

	
}

void main()
{
	for (int i = 0; i<max_amount_of_stacks; i++) created[i] = false;

	stackcontrol control;
	cout<<endl<<"STACK #1: "<<endl;

	control.push(0, 4);
	control.push(0, 12);
	control.push(0, 8);
	control.push(0, 13);
	control.push(0, 87);
	control.showstack(control, 0);

	cout<<endl<<"STACK #2: "<<endl;
	control.push(1, 1);
	control.push(1, 2);
	control.push(1, 3);
	control.push(1, 4);
	control.push(1, 5);
	control.showstack(control, 1);

	cout<<endl<<"STACK #3: "<<endl;
	control.push(2, 66);
	control.push(2, -4);
	control.push(2, 18);
	control.push(2, 12);
	control.push(2, 1);
	control.showstack(control, 2);

	cout<<endl<<"STACK #4: "<<endl;
	control.push(3, 27);
	control.push(3, 44);
	control.push(3, 52);
	control.push(3, -16);
	control.push(3, 10);
	control.showstack(control, 3);

	checkmaxmin(control);
	checkminus(control);
	cout<<"\rSTACK WITH NEGATIVE NUMBERS: 3 4                          ";

cout<<endl<<endl;}
