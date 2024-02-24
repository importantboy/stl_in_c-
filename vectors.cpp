#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;
    vector<int> x;
    v.emplace_back(20);
    v.emplace_back(80);
    v.emplace_back(100);

    for (int i = 0; i < 2; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it = v.end();
    it--;
    cout << *(it) << endl;
    vector<int>::iterator fit = v.begin();
    cout << *(fit) << endl;

    cout << "printing vector in loop" << endl;
    for (vector<int>::iterator it = x.begin(); it != x.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    cout << "printing vector using auto" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (int i = 0; i <= 5; i++)
    {
        cin >> x.emplace_back(i);
    }

    //   cout << x.size() << endl;

    cout << "taking input and output at run time in vector" << endl;
    for (vector<int>::iterator it = x.begin(); it != x.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    cout << "using auto operator" << endl;
    for (auto it = x.begin(); it != x.end(); it++)
    {
        cout << *(it) << " ";
    }
   cout << endl;
   cout << "using foreach loop" << endl;
    for (auto i : x)
    {
        cout << i << " ";
    }
    return 0;
}

