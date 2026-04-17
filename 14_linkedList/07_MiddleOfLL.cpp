// Basic Way (two pass).   
class Solution {
public:
    void middleNode(ListNode* head) { //T.C-O(n)
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        int midIdx = len/2;
        ListNode* mid = head;
        for(int i=0; i<midIdx;i++){
            mid = mid->next;
        }
        return mid;
    }
};

// Interview Way (one pass)
class Solution {
public:
    ListNode* middleNode(ListNode* head) { //T.C-O(n)
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};