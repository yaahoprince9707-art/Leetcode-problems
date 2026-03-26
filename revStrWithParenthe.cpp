#include <iostream>
#include <string>
using namespace std;
string revStr(int k, int i, string s)
{
    int l = k + 1;
    int h = i - 1;
    while (l < h)
    {
        swap(s[l], s[h]);
        l++;
        h--;
    }
    s[k] = '\0';
    s[i] = '\0';
    return s;
}

string reverseParenyheses(string s)
{
    string ans = s;
    int count = 0;
    int k = 0;
    int i = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
    }
    for (int m = 0; m < count; m++)
    {
        int l = 0;
        while (ans[l] != ')')
        {
            if (ans[l] == '(')
            {
                k = l;
            }
            l++;
        }
        int c = 0;
        while (c < ans.length())
        {
            if (ans[c] == ')')
            {
                i = c;
                break;
            }
            c++;
        }
        ans = revStr(k, i, ans);
    }

    return ans;
}
int main()
{
    string s = "(u(love)i)";
    s = reverseParenyheses(s);
    cout << s << endl;
    return 0;
}