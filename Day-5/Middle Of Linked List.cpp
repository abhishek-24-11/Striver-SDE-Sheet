#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    //Brute Force Solution
   /* Node *temp = head;
    int n = 0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
    temp = head;
    int i = 0;
    while(i != n/2){
        temp = temp->next;
        i++;
    }
    return temp;*/
    //More Efficient Solution;
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
    
    
}
