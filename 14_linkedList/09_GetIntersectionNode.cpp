class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        int lenB = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=NULL){
            lenA++;
            tempA = tempA->next;
        }
        while(tempB!=NULL){
            lenB++;
            tempB = tempB->next;
        }
        int gap;
        tempA = headA;
        tempB = headB;
        if(lenA>lenB){
            gap = lenA-lenB;
            for(int i=1; i<=gap; i++){
                tempA = tempA->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
            
        } 
        else{
            gap = lenB-lenA;
            for(int i=1; i<=gap; i++){
                tempB = tempB->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
    }
};