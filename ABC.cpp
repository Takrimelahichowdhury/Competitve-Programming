#include<iostream>
using namespace std;
int main()
{
    int a,b,c,temp,temp1;
    scanf("%d %d %d",&a,&b,&c);
    temp=a;
    a=b;
    b=temp;
    temp1=a;
    a=c;
    c=temp1;
    printf("%d %d %d",a,b,c);

    return 0;

}
