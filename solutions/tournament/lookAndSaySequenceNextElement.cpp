std::string lookAndSaySequenceNextElement(std::string element) {
std::ostringstream r;
 
    for (std::size_t i = 0; i != element.length();) {
        auto new_i = element.find_first_not_of(element[i], i + 1);
 
        if (new_i == std::string::npos)
            new_i = element.length();
 
        r << new_i - i << element[i];
        i = new_i;
    }
    return r.str();
}
 

