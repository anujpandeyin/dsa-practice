#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
    cin>>arr[i];
    }  
    int s=0;
    int t=n-1;
    while (s<t) {
    swap(arr[s],arr[t]);
    s++;
    t--;
    }
    for (int i=0; i<n; i++) {
   
    cout<<arr[i]<<" ";
    } 
    return 0;
}
