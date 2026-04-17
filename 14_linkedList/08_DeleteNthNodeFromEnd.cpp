// Basic Way (two pass).

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        if(n==len){
            head = head->next;
            return head;
        }
        // nth from end = (len-n+1)th from start
        int m = len-n+1;
        int idx = m-1; //the idx of node to be deleted
        temp = head;
        for(int i=1; i<idx; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};

// Interview Way (one pass)

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        for(int i=1; i<=n+1; i++){
            if(fast==NULL) return head->next;
            fast = fast->next;
        }

        while(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};