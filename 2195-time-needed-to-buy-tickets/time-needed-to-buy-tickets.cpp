class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time =0;
        queue<int> qt;
        for (int i=0;i<tickets.size();i++){
            qt.push(i);

        }
        while (!qt.empty()) {
            time++;
            int front = qt.front();
            qt.pop();
            tickets[front]--;
            if (k == front && tickets[front] == 0) {
                return time;
            }
            if (tickets[front] != 0) {
                qt.push(front);
            }
        }
        return time ;
    }
};