class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int i=0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        for(auto x : m){
            int count = x.second;
            if(s.find(count)!=s.end()) return false;
            else s.insert(count);
        }
        return true;
    }
};