#include <bits/stdc++.h>

using namespace std;
long simpleArraySum(vector<int> arr){
    long sum=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    vector<int> arr;
    int n;
    int a;
    long sum;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    sum=simpleArraySum(arr);
    cout<<sum;
    return 0;
}