#include<iostream>

using namespace std;

long long a[100005], n;

long long sum(int n)
{
	if(n==0) return 0;
	return a[n-1]+sum(n-1);
}

void selectionSort( int n)
{
    int minx;

    for (int i = 0; i < n - 1; i++) {
        minx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minx])
                minx = j;
        }
        if (minx != i)
            swap(a[minx], a[i]);
    }
}

// do phuc tap cua selection sort la O(n^2);

int main()
{
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	cout << sum(n) << endl;	
	
	selectionSort(n);
	
	for(int i=0;i<n;i++) cout << a[i] << " ";
}


