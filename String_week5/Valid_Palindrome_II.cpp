bool checkPallindrome(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return checkPallindrome(s, i + 1, j) || checkPallindrome(s, i, j - 1);
        }
    }
    return true;
}