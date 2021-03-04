#include<iostream>
using namespace std;
int a[] = {1, 2, 3, 4}; //ngoai main
int main()
{
	int b[] = {1, 2, 3, 4}; //trong main
	for(int i=0; i<4; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	for(int i=0; i<4; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
}
