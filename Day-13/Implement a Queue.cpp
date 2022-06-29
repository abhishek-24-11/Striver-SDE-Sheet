class Queue {
    int *arr;
    int size;
    int frontI;
    int rear;
    
public:
    Queue() {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        frontI = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(frontI == rear) {
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size){
            cout<<"Queue is full";
        }
        arr[rear++] = data;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(frontI == rear){
            return -1;
        }
        return arr[frontI++];
    }

    int front() {
        // Implement the front() function
        if(frontI == rear){
            return  -1;
        }
        return arr[frontI];
    }
};
