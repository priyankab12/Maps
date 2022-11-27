//basics of map;
//insertion ,deletion ,clear ,erase,find
#include<bits/stdc++.h>
using namespace std;
/*int main(){
    
    map<int,string> m;
    m[1]="hello ji";
    m[2]="hiiiiiii";
    auto it =m.find(1);

    if(it==m.end())
    cout<<"no value";
    else
    cout<<(*it).first << "   "<<(*it).second;
    m.erase(2);
    m.clear();
}*/
//ques:-
//print unique strings in lexographical order along with its frequency
int main()
{
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }
    for(auto element :m)
    {
        cout<<element.first<<"    "<<element.second;
    }
}
