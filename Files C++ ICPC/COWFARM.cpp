#include<iostream>
#include<math.h>

using namespace std;

struct diem
{
	float x, y;
};

diem d[100005];

float dientich(diem A, diem B, diem C)
{
	return 0.5*fabs(A.y*B.x-A.x*B.y + B.y*C.x-B.x*C.y + C.y*A.x-C.x*A.y);
}

bool kt(diem A, diem B, diem C, diem P)
{
	if(dientich(A,B,C) == dientich(P,A,B) + dientich(P,B,C) + dientich(P,A,C)) return true;
	return false;
}

float dientichdagiacloi(int n)
{
	float s=0;
	
	for(int i=1;i<n;i++)
	{
		s+=d[i+1].x*d[i].y-d[i+1].y*d[i].x;
	}
	s=s*0.5;
	
	return s;
}

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> d[i].x >> d[i].y;
	}
	cout << dientichdagiacloi(n);
}


