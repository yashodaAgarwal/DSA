int countForOdd(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}
int countSubstrings(string s)
{
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        count = count + countForOdd(s, i, i);
        count = count + countForOdd(s, i, i + 1);
    }
    return count;
}