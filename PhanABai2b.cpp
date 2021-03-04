#include<iostream>
using namespace std;
int main()
{
	string a = "abcd"; 
	for(int i=0; i<=a.length()-1; i++) //C1
	{
		cout << a[i];
	}
	cout << endl;
	
	cout << a;							//C2
	return 0;
}
