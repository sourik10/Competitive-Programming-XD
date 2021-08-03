#include<bits/stdc++.h>
using namespace std;



int order(int x)
{
	int n = 0;
	while (x)
	{
		n++;
		x = x/10;
	}
	return n;
}


bool isArmstrong(int x)
{
	
	int n = order(x);
	int temp = x, sum = 0;
	while (temp)
	{
		int r = temp%10;
		sum += pow(r, n);
		temp = temp/10;
	}

	
	return (sum == x);
}

// Driver Program
int main()
{
	int x;
	cin>>x;

	cout << isArmstrong(x) << endl;
	
	return 0;
}
