#include <iostream>

using namespace std;

#define  max  100

typedef int info; 
info stack[max-1];
int sp;
void khoitao()
{
	sp=0;
}

void them(int x,int &sp)
{
	stack[sp++]=x;
}

void xuat(int &sp)
{
	for(int i=0;i<=sp-1;i++)
		cout<<stack[i]<<" ";
	cout << endl;
}

void xoa(int &sp)
{
	int n;
	cout<<"Nhap so phan tu can xoa = ";
	cin>>n;
	if(n>sp) sp=0;
	sp-=n;
}

int main()
{
	khoitao();
	
	them(1,sp);
	them(5,sp);
	them(2,sp);
	
	xuat(sp);
	
	xoa(sp);
	xuat(sp);
}


