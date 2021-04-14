string reverseInParentheses(string inputString) {
 stack<char> st;
 
    for (int i = 0; i < inputString.length(); i++) {
 
        // Push the index of the current
        // opening bracket
        if (inputString[i] == '(') {
            st.push(i);
        }
 
        // Reverse the substring starting
        // after the last encountered opening
        // bracket till the current character
        else if (inputString[i] == ')') {
            reverse(inputString.begin() + st.top() + 1,
                    inputString.begin() + i);
            st.pop();
        }
    }
 
    // To store the modified string
    string res = "";
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] != ')' && inputString[i] != '(')
            res += (inputString[i]);
    }
    return res;
}
 
