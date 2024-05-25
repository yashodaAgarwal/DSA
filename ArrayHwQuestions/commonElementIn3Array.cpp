vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    // code here.
    vector<int> ans;
    set<int> st;
    int i;
    int j;
    int k;
    i = j = k = 0;

    while (n1 > i && n2 > j && n3 > k)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            st.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    for (auto i : st)
    {
        ans.push_back(i);
    }
    return ans;
}