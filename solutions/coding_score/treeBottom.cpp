std::vector<int> treeBottom(std::string tree) 
{
    int depth = 0;
    vector<pair<int, int>> v;
    
    for(int i=0; i<tree.length(); i++)
    {        
        if(tree[i] == '(') 
        {
            depth++;
            string s = tree.substr(i+1, tree.find_first_of("()",i+1)-(i+1));
            cout << s << endl;
            
            if(s.empty()) continue;
            
            int num = stoi(s);
            v.push_back({num, depth});                        
        }
        if(tree[i] == ')') depth--;                
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {return a.second > b.second; });
    
    int furthest = v[0].second;
    vector<int> nums;
    
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].second < furthest) break;
        nums.push_back(v[i].first);
    }
    return nums;
    return {0};
}
