#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define pb push_back

int main ()
{
    int choose,n,i;
    char val;

    vector <char> v;

    cout << "Enter the number of elements : ";
    cin >> n;

    cout << "Enter " << n << " elements :\n";

    for (i=0; i<n; i++)
    {
        cin >> val;
        v.pb(val);
    }

    sort (v.begin(),v.end());

    cout << "\nPermutation of " << n << " elements :\n";

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
    }while(next_permutation(v.begin(),v.end()));

    return 0;
}
