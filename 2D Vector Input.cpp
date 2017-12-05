#include <iostream>
#include <vector>
using namespace std;

#define pb push_back

int main (void)
{
    vector <vector <int> >v;
    int i,j,val;

    for (i=0; i<3; i++)
    {
        vector <int> f;

        for (j=0; j<3; j++)
        {
            cin >> val;
            f.pb(val);
        }

        v.pb(f);
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << v[i][j];

            if (j == 2)
                cout << endl;
            else
                cout << " ";
        }
    }

    return 0;
}
