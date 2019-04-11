#include <iostream>
#include "compare.h"
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	Compare compare;
	int a,b;
	cin >> a >> b;
	compare.compare(a,b);
	return 0;
}