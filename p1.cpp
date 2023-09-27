#include <iostream>
using namespace std;

string var(string pre, int idx) {return pre + to_string(idx);}

int main()
{
    char junk;
    // read n
    int n;
    cin >> junk >> junk >> n;
    // read n ints
    int vals[n] = {0};
    for(int i = 0; i < n; i++)
        cin >> vals[i];
    // read W
    int W;
    cin >> junk >> junk >> W;

    // output a's
    for(int i = 0; i < n; i++)
        cout << "(" << var("a", i) << " => " << var("w", i) << " = " << vals[i] << ") & ("
             << var("~a", i) << " => " << var("w", i) << " = 0) &" << endl;

    // output the sums
    cout << "sum = ";
    for(int i = 0; i < n-1; i++)
        cout << "plus(";
    cout << "w0,";
    for(int i = 1; i < n-1; i++)
        cout << var("w", i) << "),";
    cout << var("w", n-1) << ") &" << endl;
    cout << "sum = " << W << endl;


    return 0;
}
