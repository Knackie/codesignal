int concatenateNumbers(int a, int b) {
std::string concat=to_string(a);
    concat+=to_string(b);
    return atoi(concat.c_str());
}
