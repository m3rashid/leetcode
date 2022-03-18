/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
    ListNode* third;
    if(!first && !second) return third;
    if(!first) return second;
    if(!second) return first;
    ListNode* last;
    if(first->val < second->val){
      third = last = first;
      first = first->next;
    }
    else{
      third = last = second;
      second = second->next;
    }
    third->next = NULL;
    
    while(first && second){
      if(first->val < second->val){
        last->next = first;
        last = first;
        first = first->next;
      }
      else{
        last->next = second;
        last = second;
        second = second->next;
      }
      last->next = NULL; 
    }
    
    if(first) last->next = first;
    else if(second) last->next = second;
    return third;
  }
};