string longestCommonPrefix(vector<string> &strs)
{
    string ans;
    char ch;
    int i = 0;
    while (true)
    {
        ch = 0;
        for (auto str : strs)
        {
            if (i >= str.size())
            {
                ch = 0;
                break;
            }
            if (ch == 0)
            {
                ch = str[i];
            }
            else if (str[i] != ch)
            {
                ch = 0;
                break;
            }
        }
        if (ch == 0)
        {
            break;
        }
        ans.push_back(ch);
        i++;
    }
    return ans;
}