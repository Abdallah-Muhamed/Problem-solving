#include <iostream>
using namespace std;
int fact(int a, int array[])
{
	if (a < 1)
		return 0;
	return array[a-1] + fact(a - 1,array);
}
int main()
{
	
		int x;
		cin>>x;
		for(int i=0; i<x;i++){
			int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	cout <<"Case "<<i+1<<": "<<fact(n, arr)<<endl;	
		}
	return 0;
}  