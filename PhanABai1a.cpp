#include<iostream>
using namespace std;
int a[10];
int main()
{
	for(int i=0; i<10; i++) //ngoai main
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	int b[10]; //trong main
	for(int i=0; i<10; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}
