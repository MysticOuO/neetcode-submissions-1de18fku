class TimeMap {
public:
    unordered_map<string, map<int, string>> m;
    // map<int, string> become sorted not unordered_map
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        m[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        // upper_bound find the first one more than timestamp (no equal)
        auto it = m[key].upper_bound(timestamp);
        return it == m[key].begin() ? "" : prev(it) -> second;
    }
};
