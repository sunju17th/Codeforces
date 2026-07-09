#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

long a[1000006], b[1000006];
long n;

long bsearch(long a[], long x ) {
    if ( a[0] > x ) return a[0];
    if ( a[n-1] < x ) return a[n-1];
    int l = 0, h = n-1;
    while( l <= h ) {
        int mid = (l+h)/2;
        if ( a[mid] == x ) return a[mid];
        else if ( a[mid] < x ) l = mid + 1;
        else h = mid - 1;
    }
    if ( abs(a[l] - x) < abs(a[h] - x) ) return a[l];
    return a[h];
}


int main()
{
	cin >> n;
	
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++) cin >> b[i];
	
	sort(b,b+n);
	long min=1e9+7;
	for(long i=0;i<n;i++)
	{
		int x = bsearch(b, -a[i]);
        int x2 = abs(a[i] + x);
        if ( x2 == 0 ) 
		{
			cout << ("0");
			return 0; 
		}
        if ( x2 < min ) min = x2;
	}
	
	cout << min;
}


