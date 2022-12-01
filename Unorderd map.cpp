/*
GIVEN n strings print  frequency of strings
here instead of maps we used unorderd maps cozz to decrease TC
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }
    for(auto it:m)
    {
        cout<<it.first <<"   "<<it.second<<endl;
        
    }
    
}


