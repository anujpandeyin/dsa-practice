
Open in editor
1
#include <iostream>
2
#include <string>
3
using namespace std;
4
​
5
int main() {
6
    string x;
7
    string y;
8
​
9
    cin>>x;
10
    cin>>y;
11
    cout<<x.size()<<" "<<y.size()<<endl;                          
12
    cout<<x+y<<endl;
13
    swap(x[0],y[0]);
14
    cout<<x<<" "<<y;
15
    return 0;
16
}
17
​