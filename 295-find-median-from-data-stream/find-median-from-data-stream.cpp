class MedianFinder {
public:

    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;
    int count =0;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
  
        // cout<<left.size()<<endl;

        if(!left.empty() and num>left.top()){
            right.push(num);
        }
        else {
            // cout<<"Yes";
            left.push(num);
        }
        // if right side has more elements than left side balance it 
        if((int)(left.size()-right.size())>1){
            // cout<<"No";
            right.push(left.top());
            left.pop();
        }
        // 0 - 1

         if((int)(right.size()-left.size())>1){
            left.push(right.top());
            right.pop();
        }
             cout<<"endl"<<right.size()<<" "<<left.size()<<"--> "<<endl;

        //  cout<<left.size()<<endl;
        count++;
    }
    
    double findMedian() {
        //odd 
        if(count%2){
            return left.size()>right.size()?left.top():right.top();
        }
        return (left.top()+right.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */