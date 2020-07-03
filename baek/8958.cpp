#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int acc = 0,count = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'X')
            {
                acc = 0;
                continue;
            }

            if (s[j] == 'O')
            {
                acc = acc + 1;
                count = count + acc;
            }
        }
        cout << count << "\n";
    }
        return 0;
    }        