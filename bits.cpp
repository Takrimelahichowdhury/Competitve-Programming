#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   int n,v1,v2,v3,v4,sum1=0;
   scanf("%d",&n);
   string s;
   for(int i=0; i<n; i++)
   {
       cin>>s;

       //v2=strcmp("X--",s);
       //v3=strcmp("++X",s);
       //v4=strcmp("--X",s);

       if((strcmp("X++",s)==0))
       {
          sum1++;
       }
       if((strcmp("X--",s)==0))
       {
           sum1--;
       }
       if((v3=strcmp("++X",s)==0))
       {
           sum++;

       }
        if((strcmp("--X",s)==0))
        {
            sum--;
        }
   }
    return 0;



}
