#include<iostream>

using namespace std;

const int maxn=1e5;

long a[100001];
long long st[4*maxn];

void build(int id, int l, int r)
{
	if(l==r)
	{
		st[id]=a[l];
		return;
	}
	
	int mid=(l+r)/2;
	
	build(2*id,l,mid);
	build(2*id+1,mid+1,r);
	
	st[id]=st[2*id]+st[2*id+1];
}

long long get(int id, int l, int r, int u, int v)
{
	if(l>v||r<u) return 0;
	
	if(l>=u&&r<=v) return st[id];
	
	int mid = (l+r)/2;
	long long get1 = get(2*id,l,mid,u,v);
	long long get2 = get(2*id+1,mid+1,r,u,v);
	
	return get1+get2;
 } 


int main()
{
	int n, q;
	cin >> n >> q;
	
	for(int i=1;i<=n;i++) cin >> a[i];
	
	build(1,1,n);
	
	for(int i=0;i<q;i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if(x==0)
		{
			swap(a[y],a[z]);
			build(1,1,n);
		}
		else
		{
			cout << get(1,1,n,y,z)<<endl;
		}
		
	}
}


