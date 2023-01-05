class Solution {
public:
    vector<int> vectorSum(vector<int> vec) {
        if(vec.size() == 1) return vec;
        vector<int> sum;
        for(int i=0;i<vec.size()-1;i++) {
            sum.push_back(vec[i] + vec[i+1]);
        }
        return sum;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        vec.push_back({1});
        if(numRows <= 1) return vec;
        vec.push_back({1,1});
        for(int i=3;i<=numRows;i++) {
            vector<int> vec2 = vectorSum(vec[i-2]);
            vec2.insert(vec2.begin(), 1);
            vec2.push_back(1);
            vec.push_back(vec2);
        }
        return vec;
    }
};