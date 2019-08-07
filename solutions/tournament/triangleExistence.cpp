bool triangleExistence(std::vector<int> sides) {

    if(sides[0] + sides[1] >= sides[2] && sides[1] + sides[2] >= sides[0] && sides[2] + sides[0] >= sides[1])
        return true;
    return false;
}
