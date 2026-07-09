#include<iostream>

using namespace std;

const int Maxn = 1e5+7;
const int inf = 1e9+7;

int n;
int a[Maxn];
int st[4*Maxn];

void build(int id, int l, int r)
{
	if(l==r) 
	{
		st[id] = a[l];
		return;
	}
	
	int mid=(l+r)/2;
	
	build(2*id,l,mid);
	build(2*id+1,mid+1,r);
	
	st[id]=st[2*id]+st[2*id+1];
	
} 

int get(int id, int l, int r, int u, int v)
{
	if(l>v||r<u) return 0;
	
	if(l>=u&&r<=v) return st[id];
	
	int mid = (l+r)/2;
	int get1 = get(2*id,l,mid,u,v);
	int get2 = get(2*id+1,mid+1,r,u,v);
	
	return get1+get2;
 } 
 
void update(int id, int l, int r, int pos, int val)
{
	if(pos<l||pos>r) return;
	
	if(l==r){
		st[id]=val;
		a[l]=val;
		return;
	}
	
	int mid=(l+r)/2;
	update(2*id,l,mid,pos,val);
	update(2*id+1,mid+1,r,pos,val);
	
	st[id]=st[2*id]+st[2*id+1];
}

int main()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	
	build(1,1,n);
	
	for(int i=0;(1<<i)<=n;i++)
	{
		for(int j=0;j<(1<<i);j++)
		{
			cout << st[(1<<i)+j] <<" ";
		}
		cout << endl;
	}
	
	cout << get(1,1,n,2,5) << endl;
	
	update(1,1,n,5,10);
	
	for(int i=0;(1<<i)<=n;i++)
	{
		for(int j=0;j<(1<<i);j++)
		{
			cout << st[(1<<i)+j] <<" ";
		}
		cout << endl;
	}
}
