#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[n];
	int x;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
		if(a[i]<1 || a[i]>n)
		{
		i--;
		cout << "Invalid. Again: ";
		}
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			x=1;
		}
	}
	if(x == 1)
	{
		cout << "YES";
	}
	else
	cout << "NO";
}
