int matrixElementsSum(std::vector<std::vector<int>> matrix) {
 int total = 0;
    
    for (int i = 0; i < matrix[0].size(); i++) {
        
        for (int j = 0; j < matrix.size(); j++) {
            
            if (matrix[j][i] == 0) {
                break;
            }
            else {
                total += matrix[j][i];
            }
        }
    }
    
    return total;
}
