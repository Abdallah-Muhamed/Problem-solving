#include <iostream>
using namespace std;
long long fact(int a)
{
	if (a ==1)
		return 0;
		else if(a==2)
		return 1;
	return fact(a - 1)+fact(a-2);
}
int main()
{
	
		int x;
		cin>>x;
		cout<<fact(x+1);
	return 0;
}  