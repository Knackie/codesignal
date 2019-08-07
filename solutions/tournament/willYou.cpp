bool willYou(bool young, bool beautiful, bool loved) {

    if (young == true && beautiful == true && loved == false)
        return true;
    if (loved && (young == false || beautiful == false))
        return true;
    return false;
}
