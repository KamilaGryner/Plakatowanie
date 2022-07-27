//plakatowanie
#include <iostream>
#include <vector>
using namespace std;

int ile(int* wys, int n)
{
    vector <int> s;
    int ile = 0;
    int i;
    for (; s.size() > 0 && s.back() > wys[i]; )
    {
        s.pop_back();
    }

    if (s.size() == 0 || s.back() < wys[i])
    {
        s.push_back(wys[i]);
        ++ile;
    }
    return ile;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    cin >> n;
    if (n == 0) return 0;
    int* wysokosc = new int[n];

    for (int i = 0; i < n; ++i)
    {
        int nieuzyte = 0;
        cin >> nieuzyte;
        cin >> wysokosc[i];
    }
    cout << ile(wysokosc, n) << endl;
    return 0;
}

