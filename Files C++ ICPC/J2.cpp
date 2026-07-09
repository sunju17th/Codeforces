#include<iostream>

using namespace std;

const int Maxn=5*1e4;
const long long mod=1e9+7;

int a[100001];
int st[4*Maxn];


long long phi(int n) {
	int result = n;
	for(int i = 2; i * i <= n; ++i)
		if(n % i == 0) {
			while(n % i == 0) n /= i;
		result -= result / i;
		}
	if(n > 1) result -= result / n;
	
	return result;
}

void build(int id, int l, int r)
{
	if(l==r)
	{
		st[id]=a[l]-phi(a[l]);
		return;
	}
	
	int mid = (l+r)/2;
	
	build(2*id,l,mid);
	build(2*id+1,mid+1,r);
	
	st[id]=((st[2*id]%mod)+(st[2*id+1]%mod))%mod;
} 
 
long long get(int id, int l, int r, int u, int v)
{
	if(l>v||u>r) return 0;
	
	if(l<=u&&r>=v) return st[id];
	
	int mid=(l+r)/2;
	long long get1 = get(2*id,l,mid,u,v);
	long long get2 = get(2*id+1,mid+1,r,u,v);
	
	return (get1%mod+get2%mod)%mod;
}

void update(int id,int l, int r, int pos, int val)
{
	if(pos>r||pos<l) return;
	
	if(l==r)
	{
		st[id]=val-phi(val);
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
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	
	build(1,1,n);
	
	int q;
	cin >> q;
	for(int i=0;i<q;i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if(x==1)
		{
			cout << get(1,1,n,y,z) << endl;
		}
		else
		{
			update(1,1,n,y,z);
		}
	}
}


