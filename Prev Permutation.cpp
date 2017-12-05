#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define pb push_back

int main ()
{
    vector <char> v;
    char ch;
    int n,i;

    cout << "Enter the number of elements : ";
    cin >> n;

    cout << "Enter " << n << " elements : ";
    for (i=0; i<n; i++)
    {
        cin >> ch;
        v.pb(ch);
    }

    sort (v.begin(),v.end());
    reverse (v.begin(),v.end());

    cout << "Permutation of " << n << " elements :\n";

    do
    {
        for (i=0; i<n; i++)
        {
            cout << v[i];

            if (i == n-1)
                cout << '\n';
            else
                cout << " ";
        }
    }while (prev_permutation(v.begin(),v.end()));

    return 0;
}
