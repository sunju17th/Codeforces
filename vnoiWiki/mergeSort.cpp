#include<iostream>
#include<vector> 
#define MAXN  100000

using namespace std;

int temp[MAXN], data[MAXN];


void mergeSort(int a[MAXN], int l, int r )
{
	if(l-r == 0) return;
	
	int mid = (l+r)/2;
	mergeSort(a, l, mid); //sap xep hai mang
	mergeSort(a, mid+1,r);
	
	int i=l, j=mid+1;
	int cur = 0; // vi tri sap xep tren a
	
	while(i<=mid || j<=r)
	{
		if(i>mid)
		{
			temp[cur] = a[j];
			j++;
			cur++;
		}
		else if(j>r)
		{
			temp[cur] = a[i];
			i++;
			cur++;
		}
		else if(a[i] > a[j])
		{
			temp[cur] = a[j];
			j++;
			cur++;
		}
		else if(a[j] > a[i])
		{
			temp[cur] = a[i];
			i++;
			cur++;
		}
		
		for(int i=0;i<cur;i++)
			cout << temp[i] << " ";
		cout << endl;
	}
	
	for(int i=0;i<cur;i++)
	{
		a[l+i] = temp[i];
	}
}

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> data[i];
	}
	
	mergeSort(data, 0, n-1);
	
	for(int i=0;i<n;i++)
	{
		cout << data[i] << " ";
	}
}


