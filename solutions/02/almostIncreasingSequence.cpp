bool almostIncreasingSequence(std::vector<int> a) {
    int n=a.size(), p=-1, c=0;
    for (int i=1;i<n;i++) if (a[i-1]>=a[i]) p=i, c++;
    if (c>1) return 0;
    if (c==0) return 1;
    if (p==n-1 || p==1) return 1;
    if (a[p-1] < a[p+1]) return 1;
    if (a[p-2] < a[p]) return 1;
    return 0;
}
