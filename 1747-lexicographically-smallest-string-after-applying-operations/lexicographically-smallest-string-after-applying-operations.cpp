class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {

    set<string> seen;
    queue<string> q;
    q.push(s);
    seen.insert(s);
    string minStr = s;

    while (!q.empty()) {
        string curr = q.front();
        q.pop();

        // Update minimum
        minStr = min(minStr, curr);

        // Operation 1: Add `a` to all odd indices
        string addOp = curr;
        for (int i = 1; i < addOp.size(); i += 2) {
            addOp[i] = ((addOp[i] - '0' + a) % 10) + '0';
        }
        if (!seen.count(addOp)) {
            seen.insert(addOp);
            q.push(addOp);
        }

        // Operation 2: Rotate by `b` positions
        string rotateOp = curr.substr(curr.size() - b) + curr.substr(0, curr.size() - b);
        if (!seen.count(rotateOp)) {
            seen.insert(rotateOp);
            q.push(rotateOp);
        }
    }

    return minStr;
}
};