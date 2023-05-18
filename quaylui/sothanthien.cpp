#include<iostream>
using namespace std;
long gcd (long a,long b)
{
    if (b) 
    return gcd(b,a%b);
    return a;
}
long lat(long n)
{
    long k=0;
    while (n>0)
    {
        k = k*10 + n%10;
        n/=10;
    }
    return k;
}
int main()
{
    long a,b,d=0,j;
    scanf("%ld%ld",&a,&b);
    for(long i=a;i<=b;i++)
    {
        if(i%3==0 || i%11==0) continue;
        j=lat(i);
        if(i%2==0 && j%2==0) continue;
        d+=gcd(i,j)==1;
    }
    printf("%ld",d);
}