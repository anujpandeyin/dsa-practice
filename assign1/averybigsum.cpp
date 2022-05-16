
  
#include <bits/stdc++.h>

using namespace std;

long aVeryBigSum(vector<long> arr){
    long sum=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    vector<long> arr;
    int n,a;
    long sum;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    sum=aVeryBigSum(arr);
    cout<<sum;
    return 0;
}