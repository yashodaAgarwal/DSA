bool isIsomorphic(string s, string t)
{
    int hash[256] = {0};
    bool istHashed[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] == 0 && istHashed[t[i]] == 0)
        {
            hash[s[i]] = t[i];
            istHashed[t[i]] = true;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] != t[i])
        {
            return false;
        }
    }
    return true;
}