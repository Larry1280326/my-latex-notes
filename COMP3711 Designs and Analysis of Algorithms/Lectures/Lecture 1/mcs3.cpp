#include <iostream>
using namespace std;

const int MAXN = 1.1e7;
int A[MAXN], B[MAXN];

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;++i)
    {
      cin>>A[i];
      B[i] = A[i]+B[i-1];
    }

  int minB = 0;
  int ans = 0;

  for(int j=1;j<=n;++j)
    {
      //best possible answer ending at j is B[j]-minB
      ans = max(B[j]-minB, ans);
      if(B[j]<minB)
	minB=B[j];
    }

  cout<<ans<<endl;

  return 0;
}
