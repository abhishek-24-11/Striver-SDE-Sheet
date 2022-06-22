#include <bits/stdc++.h> 
using namespace std;
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

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    //Brute Force Solution
//     while(firstHead != NULL){
//         Node* temp = secondHead;
//         while(temp != NULL){
//             if(temp == firstHead) return firstHead->data;
//             temp = temp->next;
//         }
//         firstHead = firstHead->next;
//     }
//     return -1;
    //2nd Solution with time Complexity is O(firstHead + secondHead) and space complexity is O(firstHead);
//     unordered_set<Node*> s;
//     while(firstHead != NULL){
//         s.insert(firstHead);
//         firstHead = firstHead->next;
//     }
//     while(secondHead != NULL){
//         if(s.find(secondHead) != s.end()) return secondHead->data;
//         secondHead = secondHead->next;
//     }
//     return -1;
    //Most Efficient Solution 
    Node *a = firstHead;
    Node *b = secondHead;
    if(firstHead == NULL || secondHead == NULL){
        return -1;
    }
    while(a != b){
        if(a == NULL){
            a = secondHead;
        }
        else{
            a = a->next;
        }
        if(b == NULL){
            b = firstHead;
        }
        else{
            b = b->next;
        }
    }
    if(a == NULL){
        return -1;
    }
    return a->data;
    
}
