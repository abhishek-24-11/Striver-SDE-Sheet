// Stack class.
class Stack {
    int n;
    int *ar;
    int phela;
public:
    
    Stack(int capacity) {
        // Write your code here.
        this->n = capacity;
        phela = -1;
        ar = new int[n];
    }

    void push(int num) {
        // Write your code here.
        ar[++phela] = num;
    }

    int pop() {
        // Write your code here.
        if(phela == -1)
        {
            return -1;
        }
        return ar[phela--];
    }
    
    int top() {
        // Write your code here.
        if(phela == -1){
            return -1;
        }
        return ar[phela];
        }
    
    int isEmpty() {
        // Write your code here.
        if(phela == -1){
            return 1;
        }
        return 0;
        
    }
    
    int isFull() {
        // Write your code here.
        if(phela == n-1){
            return 1;
        }
        return 0;
    }
    
};
