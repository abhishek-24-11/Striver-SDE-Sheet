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

bool detectCycle(Node *head)
{
	//	Write your code here
    //Brute Force Solution
    unordered_set<Node*> s;
    while(head != NULL){
        if(s.find(head) != s.end()){
            return true;
        }
        s.insert(head);
        head = head->next;
    }
    return false;
    //Efficient Solution or Optimal Solution
//     if(head == NULL || head->next == NULL) {
//         return false;
//     }
//     Node* fast = head;
//     Node* slow = head;
//     while(fast->next != NULL && fast->next->next != NULL ){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(fast == slow){
//             return true;
//         }
//     }
//     return false;
}
