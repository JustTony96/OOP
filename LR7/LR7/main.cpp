/*
· создать шаблон заданного класса
· проверить со стандартными типами
· создать класс, чтобы он был параметром шаблона
· глобальная функция шаблон
		- уменьшить всё в множестве на одно число


*/

#define massize 10
#include <iostream>
using namespace std;


class set
{public: 
	int mas[massize];



	set()
	{
	for (int i = 0; i< massize; i++)
		{mas[i] = 0;
	}
	}


	void showmas()
	{
		cout<<endl;
		for (int i = 0; i< massize; i++)
		{cout<<mas[i]<<"  ";
		}
		cout<<endl;
	}
	void setmas(int a){for (int i = 0; i< massize; i++){mas[i] = a;}}


	void setmas(int a, int b){mas[b] = a;}

	void deletemas(){for (int i = 0; i< massize; i++){mas[i] =0;}}

	void deletemas(int a) 	{mas[a] = 0;}
	void deletemas(int a, bool b)
	{
		if(b = true) cout<<endl<<"I have deleted this number!";
	}

	void operator- (int a)
	{
		deletemas(a);

	}


	void operator * (set b)
	{
		cout<<"\nPERESECH: ";
		for (int i = 0; i<massize; i++)
		{
			for(int j = 0; j<massize; j++)
			{
				if (mas[i]==b.mas[j]) cout<<b.mas[j]<<"  ";
			}
		}
	}
	
	int sum()
	{int s =0;
		for(int i = 0; i<massize; i++)
		{
			s+=mas[i];
		}
		return s;
	}

	void operator <(set b)
	{cout<<endl;
	if(sum()>b.sum()) cout<<"A > B";
	else cout<<"A < B";
	}

	bool operator >(set b)
	{
		bool f = false;
		

		for (int i = 0; i<massize; i++)
		{
			//while(b.mas[i]==0 && i<massize) {i++;}
			//cout<<"\nI= "<<i<<" b.mas[i] = "<<b.mas[i];
			f = false;
			for (int j = 0; j<massize; j++)
			{
				//cout<<"  J= "<<j<<" mas[j] = "<<mas[j]<<" and b.mas[i] = "<<b.mas[i];
			if(mas[j]==b.mas[i]) f =true;
			//cout<<"  F= "<<f<<endl;
			}
			if(b.mas[i]==0) continue;
			if(f==false) {cout<<"FALSE"; return 0;}
		}
		cout<<"TRUE";
		return 1;
	}

	void operator ()()
	{cout<<"\nMOSH: "<<sum();
	}
	
};





template <typename sh>
class shablon
{public:
	sh per;
	

	shablon(sh a)
	{
		per = a;
	}
	sh get()
	{return per;
	}

	void set(sh a)
	{
		per = a;
	}
};

template <typename c>
void setminus(set & a, c num)
{
	
	int b = (int) num.per;
	//cout<<"B = "<<b;
	for (int i = 0; i<massize; i++)
	{
		a.mas[i] -= num.per;
	}
}


void main()
{
	set one;
	one.setmas(6);
	one.setmas(3,4);
	one.setmas(7,8);
	one.showmas();
	
	
	one.showmas();
	
	shablon <char> third('c');
	cout<<"\nSHABLON CONTENT: "<<third.get();
	
	shablon <bool> quatro(true);
	cout<<"\nSECOND SHABLON CONTENT: "<<quatro.get();

	shablon <double> cinco(2.8794);
	
	cout<<endl;
	one.showmas();
	setminus(one, cinco);
	one.showmas();
	cout<<endl;}