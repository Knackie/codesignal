std::vector<int> concatenateArrays(std::vector<int> a, std::vector<int> b) {
  for (int i = 0; i < b.size(); i++) {
    a.push_back(b[i]);
  }
  return a;
}
