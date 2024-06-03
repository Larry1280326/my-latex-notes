#include <iostream>
using namespace std;

const int MAXN = 1.1e7;
int A[MAXN];

int mcs(int A[], int start, int end)
{
  if(end<=start)
    return 0;
  int mid = (start+end)/2;
  int ans = max(mcs(A, start, mid), mcs(A, mid+1, end));
  int sumL=0, sumR=0, bestL=0, bestR=0;
  for(int i=mid;i>=start;--i)
    {
      sumL+=A[i];
      bestL=max(bestL, sumL);
    }
  for(int i=mid+1;i<=end;++i)
    {
      sumR+=A[i];
      bestR=max(bestR, sumR);
    }
  ans = max(ans, bestL+bestR);
  return ans;
}

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;++i)
    cin>>A[i];

  cout<<mcs(A, 1, n)<<endl;
  return 0;
}
