class SnapshotArray {
public:
    int s_id = 0;
    vector<map<int, int>>v;
    
    SnapshotArray(int length) {
        v.resize(length);
        for(int i=0;i<length;i++){
            v[i][0]=0;
        }
    }
    
    void set(int index, int val) {
        v[index][s_id] = val;
    }
    
    int snap() {
        s_id++;
        return s_id-1;
    }
    
    int get(int index, int snap_id) {
        if(v[index].find(snap_id)==v[index].end()){
            auto it= --v[index].lower_bound(snap_id);
            return it->second;
        }
        return v[index][snap_id];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */