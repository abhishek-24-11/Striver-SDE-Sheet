#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
//     if(first == NULL) return second;
//     if(second == NULL) return first;
//     if(first->data <= second->data){
//         first->next = sortTwoLists(first->next,second);
//         return first;
//     }
//     else{
//         second->next = sortTwoLists(first,second->next);
//         return second;
//     }
    //Brute For Solution using Merge Sort
    Node<int>*dummy = new Node<int>(0);
    Node<int>*ans = dummy;
    while(first != NULL && second != NULL){
        if(first->data <= second->data){
            dummy->next = first;
            dummy = dummy->next;
            first = first->next;
        }
        else{
            dummy->next = second;
            dummy = dummy->next;
            second = second->next;
        }
    } 
    while(first != NULL){
        dummy->next = first;
        dummy = dummy->next;
        first = first->next;
    }
    while(second != NULL){
        dummy->next = second;
        dummy = dummy->next;
        second = second->next;
    }
    return ans->next;
    // Efficient Solution without using extra Space
//     if(first == NULL ) return second;
//     if(second == NULL) return first;
//     if(first->data > second->data){
//         swap(first,second);
//     }
//     Node<int> *res = first;
//     while(first != NULL && second != NULL){
//         Node<int> *temp = NULL;
//         while(first != NULL && first->data <= second->data){
//             temp = first;
//             first = first->next;
//         }
//         temp->next = second;
//         swap(first,second);
        
//     }
//     return res;
}
