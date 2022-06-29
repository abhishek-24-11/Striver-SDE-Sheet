void Insert(stack<int> &s,int temp){
    if(s.size() == 0 || s.top()<= temp){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    Insert(s,temp);
    s.push(val);
   // return;
}
void Sort(stack<int> &s){
    if(s.size() == 1){
        return;
    }
    int temp = s.top();
    s.pop();
    Sort(s);
    Insert(s,temp);
    //return;
}

void sortStack(stack<int> &stack)
{
	// Write your code here
    Sort(stack);
//     return stack;

}

