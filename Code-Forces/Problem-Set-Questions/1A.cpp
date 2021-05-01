# include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, a;

    cin >> n >> m >> a;

    int b = n/a;
    int c = m/a;

    long long int sum = b * c ;

    if (b*a < n)
    {
        sum = sum + c ;
    } 

    if (c*a < m )
    {
        sum = sum + b ;
    }

    if (b*a < n and c*a < m)
    {
        sum++ ;
    }


    cout << sum;



    return 0;
}