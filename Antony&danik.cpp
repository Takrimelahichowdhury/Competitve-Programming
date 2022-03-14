#include<bits\stdc++.h>
using namespace std;
int main()
{

   string s;
   int n,a=0,d=0;
   cin>>n;
   cin>>s;
   for(int i=0; i<n; i++)
   {
       if(s[i]=='A')
       {
           a++;
       }
       if(s[i]=='D')
       {
           d++;
       }
   }

   if(a>d)
   {
       printf("Anton\n");
   }
   else if(a==d)
   {
       printf("Friendship");
   }
   else{
       printf("Danik\n");
}

    return 0;

}
