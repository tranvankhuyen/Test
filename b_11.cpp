#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n, a;
	n = 2;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"List prime : ";
	while (n<=a)
	{
		int i = 2;
		int check = 1;
		while (i<=sqrt(n))
		{
			if (n % i == 0)
			{
				check = 0;
				break;
			}
			else 
			{
				check = 1;
				i++;	
			}	
		}
		if (check == 1)
		{
			cout<<n<<" ";
		}
		n++;
	}
	system("pause");
	return 0;
}
