#include <iostream>
#include<math.h>

using namespace std;

long a[100005];

int main() {
  int n;
  long s=0;
  cin >> n;
  for(int i=0;i<n;i++)
  {
      cin >> a[i];
  }
  
  for(int i=0;i<n;i++)
  {
      s+=pow(a[i]/10,a[i]%10);
  }
  
  cout << s;
}

