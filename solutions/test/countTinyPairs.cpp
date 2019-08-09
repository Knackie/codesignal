int countTinyPairs(std::vector<int> a, std::vector<int> b, int k) {

    int nb=0;
    for ( int i = 0; i < a.size(); i++)
    {
        if (atoi((to_string(a[i]) + to_string(b[a.size()-(i+1)])).c_str()) < k)
            nb++;
    }
    return nb;
}
