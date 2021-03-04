#include<iostream>
using namespace std;
int main()
{
    char a[5] = {1, 4, 3, 2, 5};
    cout << a[-1] << endl;  //Run duoc nhung ko in ra gi
    cout << a[5] << endl;	//Run duoc nhung ko in ra gi   
    cout << a[6] << endl;	//Run duoc nhung ko in ra gi    
    cout << a[7] << endl;	//Run duoc nhung ko in ra gi   
    cout << a[8] << endl;	//in ra so la   
    
    return 0;
}
