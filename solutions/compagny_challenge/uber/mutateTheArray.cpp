std::vector<int> mutateTheArray(int n, std::vector<int> a) {

    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        result.push_back(0 + a[i] + a[i+1]);
    else if (i+1 < a.size())
        result.push_back(a[i-1] + a[i] + a[i+1]);
    else if (i+1 >= a.size()-1)
     result.push_back(a[i-1] + a[i] + 0);

    }
return result;
}
