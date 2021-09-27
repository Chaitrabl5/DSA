//a function f(n) is growing faster than g(n) limit n->infi f(n)/g(n) =infi
// direct way to calculate is 1).ignore lower oder terms
                            //2).ignore leading constant
// C < LOGLOG(N) < LOG(N) < POW(N,1/3) < POW(N,1/2) < N < POW(N,2) < POW(N,4)  < POW(2,N) < POW(N,N)  

#include<stdio.h>
int getsum(int arr[],int n)
{
    int sum=0;
    if(n%2!=0)
       return 0;
    for(int i=0;i<n;i++)
      sum+=arr[i] ;
    return sum;
}
int main()
{
    int n,i;
    int arr[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res=getsum(arr,n);
    printf("%d",res);
    return 0;
}
//best case is always n=odd(constant)
//average case is n+constant=n (linear)
//worst case is  always n=even