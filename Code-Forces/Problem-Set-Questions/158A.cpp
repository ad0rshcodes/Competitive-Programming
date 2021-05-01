# include <bits/stdc++.h>

using namespace std;

int main()

{
    int n,k;

    cin >> n >> k;

    int array [n];

    for (int i=0 ; i<n; i+=1 )
    {
        cin >> array[i];

    }

    int num = array[k-1];
    int counter = 0;

    for (int i = 0; i < n; i++ )
    {
        if (array[i] >= num && array[i] > 0)
        {
            counter++;
        }
    }

    cout << counter;



    return 0;
}