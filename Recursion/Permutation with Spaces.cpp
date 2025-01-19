
void solve(int index, string s, string out, vector<string> &result)
{
    if (index == s.length())
    {
        result.push_back(out);
        return;
    }

    if (index < s.length() - 1)
    {
        solve(index + 1, s, out + s[index] + " ", result);
    }
    solve(index + 1, s, out + s[index], result);
}

vector<string> permutation(string s)
{

    vector<string> result;
    if (s.length() == 1)
    {
        result.push_back(s);
        return result;
    }

    int index = 0;

    string out = "";

    solve(index, s, out, result);
    return result;
}
