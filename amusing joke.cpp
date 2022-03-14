#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s;
    cin>>s1;
    cin>>s2;
    std::string s4=s+s1;
    sort(s4.begin(),s4.end());
    sort(s2.begin(),s2.end());
    if(s4.compare(s2)==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

   return 0;
}
