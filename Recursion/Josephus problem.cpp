int Approach_1(vector<int> &v, int k, int idx)
{

    if (v.size() == 1)
    {
        return v[0];
    }

    idx = (idx + k - 1) % v.size();
    v.erase(v.begin() + idx);

    return Approach_1(v, k, idx);
}

int Approach_2(int n, int k)
{

    if (n == 1)
        return 0;

    return (Approach_2(n - 1, k) + k) % n;
}

int josephus(int n, int k)
{

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    int idx = 0;

    // return Approach_1(v, k, idx);    // Approach-1

    return Approach_2(n, k) + 1; // Approach-2
}