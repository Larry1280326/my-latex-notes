#include <iostream>
using namespace std;

const int MAXN = 1e6;
int A[MAXN];

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;++i)
    cin>>A[i];

  int ans = 0;

  for(int i=1;i<=n;++i)
    {
      int sum = 0;
      for(int j=i;j<=n;++j)
	{
	  sum += A[j];
	  if(sum>ans)
	    ans = sum;
	}
    }
  cout<<ans<<endl;
  return 0;
}
