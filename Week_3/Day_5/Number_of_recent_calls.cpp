class RecentCounter {
public:

    queue<int> Qu;

    RecentCounter() {
        
    }

    int ping(int t) {

        Qu.push(t);

        while (!Qu.empty() && Qu.front() < t - 3000){
            Qu.pop();
        }

        return Qu.size();
    }
    
};