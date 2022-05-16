#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    if(a<=1){
        return false;
    }
    for (int i = 2; i <=sqrt(a); i++)
        if (a % i == 0)
            return false;
 
    return true;
}
int main() {
    int a;
    cin>>a;
    for(int i=1;i<a;i++){
         if (isPrime(i)){
            cout<<"the number "<<i<<" is prime\n";
         }
         else{
            cout<<"the number "<<i<<" is not prime\n";
         }   
    }
}