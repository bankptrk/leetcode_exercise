class RandomizedSet {
private:
    unordered_map<int, int> mpp;
    vector<int> ls;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mpp.find(val) != mpp.end()) return false;
        ls.push_back(val);
        mpp[val] = ls.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mpp.find(val) != mpp.end()){
            int last = ls.back();
            int index = mpp[val];
            ls[index] = last;
            ls.pop_back();
            mpp[last] = index;
            mpp.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return ls[rand()%ls.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */