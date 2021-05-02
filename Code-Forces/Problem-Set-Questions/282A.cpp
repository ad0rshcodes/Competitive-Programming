# include <bits/stdc++.h>

using namespace std;


int main()
{
    string operation;

    int x = 0;

    int n;

    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> operation;

        if (operation == "++x" || "x++")
        {
            x++;
        }

        if (operation == "--x" || "x--")
        {
            x--;

        }

    }
        
    cout << x;
        



    return 0;
}