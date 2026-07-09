#include<iostream>
#include<string>

using namespace std;

struct pacman
{
	long x, y, huong;
};

pacman Pacman[100001];

void lenhA(pacman &A,int k, long n)
{
	k = k%n;
	if(A.huong == 1) A.x += k;
	if(A.huong == 2) A.y += k;
	if(A.huong == 3) A.x -= k;
	if(A.huong == 4) A.y -= k;
	if(A.x < 1) A.x += n;
	if(A.y < 1) A.y += n;
	if(A.x > 5) A.x -= n;
	if(A.x > 5) A.y -= n;
}

void lenhR(pacman &A,int k, long n)
{
	k=k%4;
	A.huong += k;
	if(A.huong>4) A.huong -= 4;
}

void lenhZ(pacman &A,int k, long n)
{
	A.x = k/n;
	A.y = k%n;	
}


int main()
{
	long n, p, m;
	cin >> n >> p >> m;
	for(int i=0;i<p;i++) cin >> Pacman[i].x >> Pacman[i].y >> Pacman[i].huong;
	string lenh1;
	int lenh2;
	for(int i=0;i<m;i++) 
	{
		cin >> lenh1 >> lenh2;
		if(lenh1 == "A")
		{
			for(int j=0;j<p;j++)
			{
				lenhA(Pacman[j],lenh2,n);
			}
		}
		else
		{
			if(lenh1 == "R")
				for(int j=0;j<p;j++)
				{
					lenhR(Pacman[j],lenh2,n);
				}
			else
				for(int j=0;j<n;j++)
				{
					lenhZ(Pacman[j],lenh2,n);
				}
				
		}
	}
	for(int j=0;j<p;j++)
	{
		cout << Pacman[j].x << " " << Pacman[j].y << endl;
	}
	
}


