bool isTandemRepeat(std::string inputString) {

    int longueur = inputString.length()/2;
    string a = inputString.substr(0, longueur);
    string b = inputString.substr(longueur);
    if (a == b)
        return true;
    return false;
    
}
