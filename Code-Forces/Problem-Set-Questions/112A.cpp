#include <bits/stdc++.h>

using namespace std;

int main()
{

    string first, second;

    cin >> first >> second;

    char const *c = first.data();
    char const *d = second.data();

    int n = strcmpi(c,d);


    cout << n;






    return 0;
}