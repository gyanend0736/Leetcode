class RecentCounter {
public:
    int count;
    queue<int> q;
    RecentCounter() {
        count=0;
    }
    
    int ping(int t) {
        q.push(t);
        int bound= t-3000;
        count++;
        while(q.front()<bound){
            count--;
            q.pop();
        }
        return count;
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */