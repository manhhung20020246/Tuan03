#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char daytab[2][12] = {
     {31,28,31,30,31,30,31,31,30,31},
     {31,29,31,30,31}
    };
    for (int i=0; i<2; i++)					//C1
	{
        for (int j=0; j<12; j++)
		{
            cout << daytab[i][j] << " ";	//in y het cach khoi tao
        }
        cout << endl;
    }
    cout << endl;

    char daytab1[2][12] = {
     31,28,31,30,31,30,31,31,30,31,
     31,29,31,30,31
    };
     for (int i=0; i<2; i++)					//C2
	 {
        for (int j=0; j<12; j++)
		{
            cout << daytab1[i][j] << " ";		//cac so don len hang 1 du 12 so, hang 2 con lai
        }
        cout << endl;
     }
    return 0;
}
