        Node *current = head;
        
        while(current)
        {
            int countM = M,countN= N;
            while(current and  --countM)
                {
                   
                    current = current->next;
                    
                }
                   if(!current)return; 
                    Node *temp = current;
            while(temp and countN--)
            {
                temp= temp->next;
                // countN--;
            }
            
            if(!temp)
            {
                current->next=NULL;
                return ;
            }
            
            current ->next= temp->next;
            current = current->next;

            }
    }
