int commonPoints(int l1, int r1, int l2, int r2) {
    int r = min(r1, r2) - max(l1, l2) - 1;
    if (r < 0)
        return 0;
    return r;

}
