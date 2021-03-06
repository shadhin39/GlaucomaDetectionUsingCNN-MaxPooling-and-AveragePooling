#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    int cnt=1;
    cout<<"Enter your string: ";
    cin>>s;
    cout<<"\n";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i-1]==s[i])
        {
           cnt=cnt+1;
        }

        else
        {
            cnt=1;
        }
        if(s[i]!=s[i+1])
        {
            cout<<s[i]<<cnt;
        }

    }
    cout<<"\n";
    return 0;
}
