class MyQueue {
public:
stack<int>q;
stack<int>help;
    MyQueue() 
    {
        
    }
    
    void push(int x) 
    {
     q.push(x);   
    }
    
    int pop() 
    {
        while(q.size()>0)
        {
            help.push(q.top());
            q.pop();
        }
        int data=help.top();
        help.pop();
        while(help.size()>0)
        {
            q.push(help.top());
            help.pop();
        }
        return data;
    }
    
    int peek() 
    {
         while(q.size()>0)
        {
            help.push(q.top());
            q.pop();
        }
        int data=help.top();
        while(help.size()>0)
        {
            q.push(help.top());
            help.pop();
        }
        return data;
    }
    
    bool empty() 
    {
        if(q.size()==0)return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */