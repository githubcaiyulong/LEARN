#include <iostream>
#include "compare.h"
using namespace std;
int Compare::compare(int m,int n)
{
	int temp;
	if(m > n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	cout << m << n << endl;
	return m,n;
}