std::vector<int> fractionReducing(std::vector<int> fraction) {
int max;
    if (fraction[0] > fraction[1])
        max = fraction[0];
    else
        max = fraction[1];
    for (int i = 1 ; i < max; i++)
        if (fraction[0]/i*i ==fraction[0] && fraction[1]/i*i == fraction[1])
        {
            fraction[0]/=i;
    fraction[1]/=i;
        }
    return fraction;
}
