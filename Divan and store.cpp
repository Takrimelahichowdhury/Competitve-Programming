#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    scanf("%d",&t);
    long long int l,r,k;

    scanf("%d %lld %lld %lld",&a,&l,&r,&k);
    int b[a];
    int c=0,sum=0;
    for(int i=1; i<=a; i++)
    {
        scanf("%d",&b[i]);

        if(b[i]>=l  && b[i]<=r)
        {
            sum+=b[i];
            while(sum<=k)
            {
                  c++;
            }
            break;

        }



    }


    printf("%d\n",c);





}
