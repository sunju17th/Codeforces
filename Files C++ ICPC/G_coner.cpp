#include<iostream>

using namespace std;

int n, m;

int main()
{
	int a, b;
	cin >> n >> m;
	cin >> a >> b;
	int s=0;
	
	if(a-1>0 && b+1<=m) s++;
	if(b+1<=m) s++;
	if(a+1<=n&&b+1<=m) s++;
	if(a-1>0) s++;
	if(a+1<=n) s++;
	if(a-1>0 && b-1>0) s++;
	if(b-1>0) s++;
	if(a+1<=n&&b-1>0) s++;
	
	cout << s;
}


