std::string reverseParentheses(std::string s) {
    std::regex r ("\\(([^()]*)\\)");
    std::smatch m;
    while(regex_search(s, m, r))
    {
        std::string n = m[1].str();
        s = m.prefix().str() + string(n.rbegin(), n.rend()) + m.suffix().str();
    }
    return s;
}
