#include <iostream>
#include <vector>
using namespace std;

int fib(int n)
{
  if(n==0 or n==1)
    return 1;
  return fib(n-1)+fib(n-2);
}

int main()
{
  int n;
  cin>>n;
  vector<int> A(n+1);
  A[0]=A[1]=1;
  for(int i=2;i<=n;++i)
    A[i]=A[i-1]+A[i-2];
  cout<<A[n]<<endl;
  return 0;
}
