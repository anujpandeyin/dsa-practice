#include<bits/stdc++.h>
using namespace std;

void recursion(int k,int &m,int s,vector<int>arr,int i)
 {
     if(i>=arr.size())
        return;
        
    if(s>k)
        return;
    if(s<=k)
    {
        m=max(m,s);
    }
   
    for(int j=i;j<arr.size();j++)
   { s=s+arr[j];
    recursion(k,m,s,arr,j);
    s = s-arr[j];}
     
 }

int unboundedKnapsack(int k, vector<int> arr) {
int m=INT_MIN;
recursion(k,m,0,arr,0);
return m;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<unboundedKnapsack( k,  arr)<<endl;
    }
    return 0;
}