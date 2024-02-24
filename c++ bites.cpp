#include <bits/stdc++.h>
// #include<math.h>
using namespace std;

int main()
{
    pair<int, int> p = {1, 3};
    // cout << p.first << endl;
    // cout << p.second << endl;

    pair<int, pair<int, int>> x = {2, {8, 3}};
    cout << x.first << endl;
    cout << x.second.first << endl;
    cout << x.second.second << endl;



    return 0;
}