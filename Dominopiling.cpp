#include<iostream>
using namespace std;
int main()
{

    int m,n;
    unsigned long long int r,s,d,c=0;
    scanf("%d %d",&m,&n);
    s=(m*n);
    d=(s/2);
    r=(s%2);
    if(r!=0 && r<2)
    {
        c+0;
    }
    printf("%llu",d);

    return 0;

}
