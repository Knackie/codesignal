std::string compareIntegers(std::string a, std::string b) {

  if (a.size() > b.size()) {
    return "greater";
  }
  if (a.size() < b.size()) {
    return "less";
  }
  if (a < b) {
    return "less";
  }
  if (a > b) {
    return "greater";
  }
  return "equal";
}
