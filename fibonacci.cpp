#include <iostream>
using namespace std;

int fib(int n)
{
	if(n<=1)
		return n;
	return (n-1) + (n-2);
}
int main()
{
	int n;
	cin>>n;
	return 0;
}