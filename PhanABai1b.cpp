#include<iostream>
using namespace std;
//khai bao ngoai main
int a[5] = {1, 2, 3, 4};	// >4
//int b[3] = {1, 2, 3, 4};	// <4
int main()
{
	//khai bao trong main
	int c[5] = {1, 2, 3, 4};
	//int d[3] = {1, 2, 3, 4};
	
	for(int i=0; i<5; i++)    //ngoai main
	{
		cout << a[i] << " ";
	} cout << endl;
	/*for(int i=0; i<5; i++)	
	{
		cout << b[i] << " ";
	} cout << endl;*/

	for(int i=0; i<5; i++)  	//trong main	
	{
		cout << c[i] << " ";
	} cout << endl;
	/*for(int i=0; i<5; i++)	
	{
		cout << d[i] << " ";
	} cout << endl; */
}
