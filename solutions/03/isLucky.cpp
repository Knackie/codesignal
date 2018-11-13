bool isLucky(int n) {
    std::string s = std::to_string(n);
    auto half = s.begin() + s.size() / 2;
    return std::accumulate(s.begin(), half, 0) == std::accumulate(half, s.end(), 0);
}
