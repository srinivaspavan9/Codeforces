#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    vector<int> ans;
    int r=0;
    int pos=1;
    int temp=n;
    while(temp!=0)
    {
        r=temp%10;
        if(r!=0){
            ans.push_back(r*pos);
        }
        temp=temp/10;
        pos*=10;
    }
    int k=ans.size();
    cout<<k<<endl;
    for(int i=0;i<k;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        fun(n);
    }
}
