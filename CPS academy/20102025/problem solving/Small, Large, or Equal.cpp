#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);  // Add this line to read input!
	
	if(a > b)
	{
		printf("a > b\n");
	}
	else if(a < b)
	{
		printf("a < b\n");
	}
	else
	{
		printf("a == b\n");
	}
	return 0;
}