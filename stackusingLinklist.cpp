#include <bits/stdc++.h>
using namespace std;
struct link
{
	int n;
	link* x;
};

link* high;
void Pushfn(int n)
{
	link* t = new link();
	if (!t)
	{
		cout << "\nStack is Overflow";
		exit(1);
	}
	t->n = n;
	t->x = high;
	high = t;
}
int emptyfn()
{
	return high == NULL;
}
int Peekfn()
{
	
   if (!emptyfn())
		return high->n;
	else
		exit(1);
}
void Popfn()
{
	link* t;
	if (high == NULL)
	{
		cout << "\nStack is Underflow" << endl;
		exit(1);
	}
	else
	{
		t = high;
		high = high->x;
		free(t);
	}
}
void printfn()
{
	link* t;
	if (high == NULL)
	{
		cout << "\nStack is Underflow";
		exit(1);
	}
	else
	{
		t = high;
		while (t != NULL)
		{
			cout << t->n << "-> ";
			t = t->x;
		}
	}
}
int main()
{
    Pushfn(11);
	Pushfn(12);
	Pushfn(13);
	Pushfn(14);
	Pushfn(15);
	Pushfn(16);
	printfn();
	cout<< "\n highest element is "<< Peekfn() << endl;
	Popfn();
	Popfn();
	Popfn();
	printfn();
	cout << "\n highest element is "<< Peekfn() << endl;
		
	return 0;
}

