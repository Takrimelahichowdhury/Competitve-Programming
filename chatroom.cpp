#include<bits\stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string s;
    string s2="hello";
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {


        if(s[i]==s2[c])
        {
            c++;
        }
      }

     if(c==5)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

return 0;
}
