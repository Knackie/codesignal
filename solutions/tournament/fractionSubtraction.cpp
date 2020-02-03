std::vector<int> fractionSubtraction(std::vector<int> a, std::vector<int> b) {
std::vector<int> result;
int den = (a[0]*b[1] - a[1]*b[0]);
int num = a[1] * b[1];
int pgcd = std::__gcd(den, num);
den = den / pgcd;
num = num /pgcd;
result.push_back(den);
result.push_back(num);

return result;
}
