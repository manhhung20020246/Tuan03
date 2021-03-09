#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int a = 0;
	for(int i=0; i< s.length()/2; i++)
	{
		if(s[i] != s[s.length()-i-1])
		{
		a++;
		}
	}
	if(a==0)
	cout << "YES";
	else 
	cout << "NO";
}
