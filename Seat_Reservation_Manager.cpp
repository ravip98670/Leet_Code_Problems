class SeatManager {
public:
    map<int,int> re;
    map<int,int> unres;
    SeatManager(int n) {
        for(int i=1;i<=n;i++){
            unres[i] = 1;
        }
    }
    
    int reserve() {
        auto sml = unres.begin();
        re[sml->first]++;
        int ret = sml->first;
        unres.erase(sml->first);
        return ret;
    }
    
    void unreserve(int seatNumber) {
        re.erase(seatNumber);
        unres[seatNumber]++;
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */