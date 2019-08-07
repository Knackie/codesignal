bool bettingGame(std::vector<int> l) {

  int s = 0;
  for (int i = 0; i < l.size(); i++) {
    s += l[i];
  }
  if (s == 0) {
    return false;
  }

  return s % (int) l.size() == 0;
}
