// here create two different list 
// first contain only even nodes and second conatain add nodes 
// at last connect both node first even and than add
// and than return even node next pointer as head pointer
    Node* divide(int N, Node *head){
        Node* odd = new Node(-1);
        Node* even = new Node(-1);
        
        Node* eve = even;
        Node* od = odd;
        
        while(head != NULL){

            // if node is even and add this node addresh in even linklist and increase the pointer
            if(head->data % 2 == 0){
                eve->next = head;
                eve = eve->next;
            }
            else{
                
                // if node is odd than node addresh add in odd linklist and increse the pointer 
                od->next = head;
                od= od->next;
            }
            head = head->next;
        }
        // give add next node to null than that list show last node of linklist
        od->next = NULL;
        eve->next = odd->next;
        return even->next;
    }
