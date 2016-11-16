/* 
Определить класс Букет для храненияя разных типов объектов 
в виде списка или массива. 

2)Определить управляющий класс-Контроллер, 
который управляет объектом-Контенероми 

Создать несколько объектов-цветов. 
Собрать Букет. Определить его стоимость. 
Провести сортировку цветов в букете на основе размера цветка. 
Найти цветок в букете, соответствующий заданному диапазону длин стеблей 
*/ 
#include <iostream> 

using namespace std; 
#define massize 15 
int cashst = 0;
int cashdl = 0;

class flower 
{ 
public: 
int dl; 
int st; 
void c()
{
	cout<<"DL: "<<dl<<"  ST: "<<st;
}
}; 
flower * temp;
class rose : public flower 
{ 
public: 
int lp; 
}; 

class roma: public flower 
{ 
public: 
int gelt; 
}; 

class fial : public flower 
{ 
public: 
int sat; 
}; 

class bukkit 
{ 
public: 
friend class control; 
int num; 
flower * fl; 

}; 

class control 
{ public:
bukkit mass[massize]; 
int size;

control() 
{size = massize;} 

void add(flower &f, int i) 
{ 
	cout<<"\nADD FLOWER: "<<f.dl<<" "<<f.st<<"  "<<&f<<"  ";
mass[i].fl = &f;
mass[i].num = i; 
size++;
} 

void del(int i) 
{ 
mass[i].fl = NULL; 
mass[i].num = 0; 
} 

void stoim() 
{ 
int sum=0; 
for(int i = 0; i<massize; i++) 
{ 
	sum += mass[i].fl->st;
} 
cout<<"\nSTOIMOST: "<<sum;
} 

void showall()
{
	for (int i = 0; i<size; i++) 
	{
		cout<<endl<<i<<": "<<mass[i].fl->dl;
	}
}

void sort(int i)
{
	//cout<<"  I = "<<i;
	//cout<<" MASSIZE = "<<massize;
	if(i==massize) {//cout<<"\nI == MASSIZE";
	return;}
	
	if(mass[i].fl->dl > mass[i+1].fl->dl) {
		//cout<<"\nchanging "<<i<<" and "<<i+1;
	/*	//если первое больше второго
	cashdl = mass[i+1].fl->dl;			//		то
	cashst = mass[i+1].fl->st;			//    2 = кэш

	mass[i+1].fl->dl = mass[i].fl->dl;	//    2 = 1
	mass[i+1].fl->st = mass[i].fl->dl;

	mass[i].fl->dl = cashdl;			//	  1 = кэш
	mass[i].fl->st = cashst; 

	*/
		temp = mass[i].fl;
		mass[i].fl = mass[i+1].fl;
		mass[i+1].fl = temp;

	if(i-1>=0){ //cout<<"GONE I-1";
	sort(i-1);}}			//если 
	else {//cout<<"\nGONE I+1"; 
	sort(i+1);}
	//cout<<"\n END SORTING";
}


void find(int a, int b)
{
	for (int i = 0; i<size; i++)
	{
		if(mass[i].fl->dl >= a && mass[i].fl->dl <= b) cout<<endl<<i<<"th flower is fine";

	}

}
}; 



void main() 
{ 
	flower one;
	one.st = 15;
	one.dl = 14;
	one.c();

	rose r;
	r.lp = 5;
	r.st = 7;
	r.dl = 14;

	roma o;
	o.dl = 17;
	o.gelt = 20;
	o.st = 1;

	fial f;
	f.dl = 11;
	f.sat = 2;
	f.st = 7;
	cout<<endl;
	cout<<"&r = "<<&r;
	cout<<"  &o = "<<&o;
	cout<<"  &f = "<<&f;

	control con;
	con.size = 0;
	con.add(r, 0);
	con.add(o, 1);
	con.add(f, 2);
	//cout<<"MASS[0].fl->dl  "<<con.mass[0].fl->dl;

	cout<<"\nBEFORE SHOWALL";
	con.showall();
	cout<<"\nAFTER SORTING:";
	con.sort(0);
	con.showall();
	con.find(10, 18);
cout<<endl;}