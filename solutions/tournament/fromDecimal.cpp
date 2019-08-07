std::string fromDecimal(int b, int n) {

  std::string result = "";
  while (n) {
    result += char(n % b + '0');
    n /= b;
  }

  std::reverse(result.begin(), result.end());

  return result;
}
