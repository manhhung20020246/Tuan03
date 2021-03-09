#include<iostream>
using namespace std;
int a[100][100], m, n; 
void InMaTran()
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
void TaoXoanOc()
{
	int d=0;
	int i;
	int gtri=1;
	int hang = m-1, cot = n-1;
    while(gtri <= m*n)
    {
		for(i = d; i <= cot; i++) {          
            a[d][i] = gtri++; 		// gan tu trai sang phai            
        }       
        for(i = d+1; i <= hang; i++){            
            a[i][cot] = gtri++; 	// gan tu tren xuong duoi
        }       
        for(i = cot-1; i>=d && gtri<=m*n; i--){         
            a[hang][i]=gtri++; 		// tu phai sang trai
        }       
        for(i = hang-1; i>d && gtri<=m*n; i--){         
            a[i][d] = gtri++; 		// tu duoi len  
        }       
        d++; 						// thu nho xoan oc
		hang--; 
		cot--;         
	}
	InMaTran();
}
int main()
{
	cin >> m >> n;
	TaoXoanOc();
}
