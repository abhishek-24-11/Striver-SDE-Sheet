#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> *reverse(LinkedListNode<int> *head){
    if(!head || !head->next) return head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* nex = NULL;
    while(curr != NULL){
        nex = curr->next;
        curr->next= prev;
        prev = curr;
        curr = nex;
    }
     return prev; 
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    //Brute Force Solution
//     vector<int> ans;
//     while(head != NULL){
//         ans.push_back(head->data);
//         head = head->next;
//     }
//     for(int i = 0;i<ans.size()/2;i++){
//         if(ans[i] != ans[ans.size()-i-1]) return false;
        
//     }
//     return true;
    //Optimal Solution
    if(!head || !head->next) {
        return true;
    }

     LinkedListNode<int>* fast = head;
     LinkedListNode<int> *slow = head;
    while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverse(slow->next);
    slow = slow->next;
    LinkedListNode<int>* dummy = head;
    while(slow != NULL) {
        if(dummy->data != slow->data){
            return false;
        }
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;

 
}
