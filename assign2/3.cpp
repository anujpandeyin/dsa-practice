// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() 
// {
//    int a,b;
//    cin>>a>>b;
//    int ch;
//    for(int i=a;i<=b;i++)
//    {
//     ch=i;
//    switch(ch)
//    {
//        case 1: cout<<"one\n";
//        break;
//        case 2: cout<<"two\n";
//        break;
//        case 3: cout<<"three\n";
//        break;
//        case 4: cout<<"four\n";
//        break;
//        case 5: cout<<"five\n";
//        break;
//        case 6: cout<<"six\n";
//        break;
//        case 7: cout<<"seven\n";
//        break;
//        case 8: cout<<"eight\n";
//        break;
//        case 9: cout<<"nine\n";
//        break;
//        default:
//        {
//            if(ch%2==0){cout<<"even\n";}
//            else {cout<<"odd\n";}
//        }
       

//    }
//    }
//   return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    for (a; a <= b; a++)
    {
        if (a <= 9)
        {
            if (a == 8)
                cout << "eight\n";
            else if (a == 9)
                cout << "nine\n";
            else if (a == 7)
                cout << "seven\n";
            else if (a == 6)
                cout << "six\n";
            else if (a == 5)
                cout << "five\n";
            else if (a == 4)
                cout << "four\n";
            else if (a == 3)
                cout << "three\n";
            else if (a == 2)
                cout << "two\n";
            else if (a == 1)
                cout << "one\n";
        }
        else
        {

            if (a % 2 == 0)
                cout << "even\n";
            else
                cout << "odd\n";
        }
    }
}
