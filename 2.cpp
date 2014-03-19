#include<iostream>
using namespace std;

class A{};

int main()
{
	A *aa = NULL;
	//delete aa;
	typedef char TEST[sizeof(A)? 1 : -1];
	typedef char TEST[-1];
	sizeof(TEST);
	cout <<¡¡"ffff" << endl;
	return 0;
}
