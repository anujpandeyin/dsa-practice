#include <bits/stdc++.h>
 
using namespace std;
 
vector <int> appleAndOrange(int s, int t, int a, int b, vector <int> apples, vector <int> oranges) {
    int count_apples = 0;
    int count_oranges = 0;
    
    for(int i=0; i<apples.size(); i++){
        if(a+apples[i] >= s && a+apples[i]<=t)
            count_apples++;
    }
    for(int i=0; i<oranges.size(); i++){
        if(b+oranges[i] >= s && b+oranges[i]<=t)
            count_oranges++;
    }
    
    vector<int> result;
    result.push_back(count_apples);
    result.push_back(count_oranges);
 
    return result;
    
}
 
int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apples(m);
    for(int apples_i = 0; apples_i < m; apples_i++){
       cin >> apples[apples_i];
    }
    vector<int> oranges(n);
    for(int oranges_i = 0; oranges_i < n; oranges_i++){
       cin >> oranges[oranges_i];
    }
    vector <int> result = appleAndOrange(s, t, a, b, apples, oranges);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
 
 
    return 0;
}