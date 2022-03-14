#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long int l,r,a,d;
    int m=0;

    for(int i=1; i<=n; i++)
    {
        scanf("%lld %lld %lld",&l,&r,&a);
        for(int i=l ;i<=r; i++)
        {

            d=(i/a)+(i%a);

        }
        if(d>m)
        {
            m=d;
            printf("%d\n",m);
        }
        else{
            printf("%d\n",m);
        }


    }


    return 0;

}











