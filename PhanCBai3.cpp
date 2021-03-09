#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
	void Para(int a, int b)
	{
		int temp, sum=0, r, count = 0;
		cin >> a >> b;
		if(a>=0 && b>=0)
		{
		for(int num=a; num<=b; num++)
		{
			for(temp=num; num!=0; num=num/10)
			{
				r= num%10;
				sum = sum*10 + r;
			}
			if(temp==sum)
			count++;
		}
		}
		cout << count;
	}
	int main()
	{
		int t, a, b, count;
		cin >> t;
		if(t>=1 && t<=100)
		{
		for(int i=0; i<t; i++)
		{
			Para(a, b);
		}
		}
	}

