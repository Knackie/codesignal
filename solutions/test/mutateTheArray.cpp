std::vector<int> mutateTheArray(int n, std::vector<int> a) {
vector<int> result;
    for (int i =0; i < n; i++)
    {
        if ( i == 0)
            result.push_back(  0 + a[i] + a[i+1]);
       else  if (i >= a.size()-1)
            result.push_back( a[i-1] + a[i] + 0);
        else 
             result.push_back( a[i-1] + a[i] + a[i+1]);
        
    }
    return result;
}
