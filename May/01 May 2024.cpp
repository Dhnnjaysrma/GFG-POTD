class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        // Code here
      Node* vowelList=new Node(-1);
      Node* vowel=vowelList;
      Node* consonantList=new Node(-1);
      Node* consonant=consonantList;
      Node* temp=head;
      
      while(temp!=NULL){
          if(temp->data=='a'||temp->data=='e'||temp->data=='i'||temp->data=='o'||temp->data=='u')
          {
              vowel->next=temp;
              vowel=vowel->next;
          }
          else{
              consonant->next=temp;
              consonant=consonant->next;
          }
          temp=temp->next;
      }
      vowel->next=consonantList->next;
      consonant->next=NULL;
      delete consonantList;
      delete vowelList;
        return vowelList->next;;
    
   
     
     
    }
};
