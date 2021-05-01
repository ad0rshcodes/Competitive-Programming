# include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;

    for (int i=0; i < n; i++)
    {
        cin >> s;

        int m = s.length() ;

        if (m > 10)
        {
            cout << s.at(0) << m-2 << s.at(m-1) ;
        }

        else 
        {
            cout << s ;
        }
        cout << endl;
    }


    return 0;
}