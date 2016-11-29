#include <iostream>
#include <deque>

#include <iterator>

#define DECK_SIZE 10

using namespace std;

void outd(deque<float> one)
{
	cout<<"\nDEQUE: \n";
	copy(one.begin(), one.end(), ostream_iterator<float>(cout, "\t"));

}

void outdr(deque<float> one)
{
	cout<<"\nreverse DEQUE: \n";
	copy(one.rbegin(), one.rend(), ostream_iterator<float>(cout, "\t"));

}

void outdc(deque<float> one)
{
	cout<<"\nconst DEQUE: \n";
	copy(one.cbegin(), one.cend(), ostream_iterator<float>(cout, "\t"));

}

void main()
{
	deque <float> one(DECK_SIZE, 4.2);
	outd(one);
	
	one[5] = 7.2342;
	outd(one);
	one.insert(one.end()-3, 2, 1.111);

	outd(one);
	one.pop_back(); one.pop_back();
	outd(one);
	outdr(one);
	outdc(one);

	deque <float> two;
	for (int i=0; i<DECK_SIZE; i++)
	{
		two.push_front(i);
	}
	outd(two);
	outd(one);
	one.erase(one.begin()+4, one.begin()+7);
	outd(one);
}