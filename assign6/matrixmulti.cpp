#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> product(vector<vector<int>> A,vector<vector<int>> B){
    vector<vector<int>> c;
    int  i,j,k,n;
    for( i=0;i<A.size();i++){
        vector<int> row;
        for(j=0;j<B.size();j++){
            n=0;
            for(k=0;k<B.size();k++){
                n+=A[i][k]*B[k][j];
            }
            row.push_back(n);
        }
        c.push_back(row);
    }
    return c;
    
}
int main(){
    int m,row,column,n;
    vector<vector<int>> A,B,C;
    cin>>m;
    cin>>row;
    cin>>column;
    //cout<<"matrix1"<<endl;
    for(int i=0;i<m;i++){
        vector<int> r;
        for(int j=0;j<row;j++){
            cin>>n;
            r.push_back(n);
        }
        A.push_back(r);
    }
    //cout<<"matrix2"<<endl;;
    for(int i=0;i<m;i++){
        vector<int> r;
        for(int j=0;j<column;j++){
            cin>>n;
            r.push_back(n);
        }
        B.push_back(r);
    }
    C=product(A,B);
    for(int i=0;i<C.size();i++){
        for(int j=0;j<C[i].size();j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}