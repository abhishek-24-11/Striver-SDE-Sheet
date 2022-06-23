#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    //Brute force Solution
//     map<LinkedListNode<int> *,LinkedListNode<int> *>m;
//     LinkedListNode<int> *temp = head;
//     while(temp != NULL){
//         LinkedListNode<int> *clone = new LinkedListNode<int>(temp->data);
//         m[temp] = clone;
//         temp = temp->next;
//     }
//     temp = head;
//     while(temp != NULL){
//         LinkedListNode<int> *newNode = m[temp];
//         newNode->next = m[temp->next];
//         newNode->random = m[temp->random];
//         temp = temp->next;
//     }
//     return m[head];
    LinkedListNode<int> *iter = head;
    LinkedListNode<int> *front = head;
    while(iter != NULL){
        front = iter->next;
        LinkedListNode<int> *deepCopy = new LinkedListNode<int>(iter->data);
        iter->next = deepCopy;
        deepCopy->next = front;
        iter = front;
    }
    iter = head;
    while(iter !=  NULL){
      //  if(iter->random != NULL){
            iter->next->random = iter->random;
        //}
        iter = iter->next->next;
    }
    iter = head;
    LinkedListNode<int>* pseudoHead = new LinkedListNode<int>(0);
    LinkedListNode<int>* temp = pseudoHead;
    while(iter != NULL){
        front = iter->next->next;
        temp->next = iter->next;
        iter->next = front;
        iter = front;
        temp = temp->next;
        
    }
    return pseudoHead->next;
}
