class RandomizedSet {
    map<int, bool> in;
    vector<int> el;
  public:
    /** Initialize your data structure here. */
    RandomizedSet() {}

    /** Inserts a value to the set. Returns true if the set did not already
     * contain the specified element. */
    bool insert(int val) {
        if (!in[val]) {
            el.push_back(val);
            in[val] = true;
            return true;
        }
        return false;
    }

    /** Removes a value from the set. Returns true if the set contained the
     * specified element. */
    bool remove(int val) {
        if (!in[val]) {
            return false;
        }
        in[val] = false;
        el.erase(find(el.begin(), el.end(), val));
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() { return el[rand() % el.size()]; }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
