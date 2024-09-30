class CustomStack {
    private : 
    vector<int> stack;
    int topIndex;
    
public:
    
    CustomStack(int maxSize) {
        this->stack.resize(maxSize);
        this->topIndex=0;
    }
    
    void push(int x) {
        if(topIndex == this->stack.size()) return;
        this->stack[topIndex]=x;
        ++this->topIndex;
    }
    
    int pop() {
        if(this->topIndex == 0) return -1;
        return this->stack[--topIndex];
    }
    
    void increment(int k, int val) {
        for(int i=0; i<k && i<this->topIndex; ++i)
        {
            this->stack[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */