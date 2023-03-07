struct node* search(int data){
    struct node *current = root ;
    cout << current->data;
    while (current->data != data){
        if(current != NULL){
            //Go to Left Tree
            if(current->data > data){
                current = current->left;
            }
            //Go to Right Tree
            else{
                current = current->right;
            }

            // Not Found 
            if(current == NULL){
                return NULL;
            }
        }
    }
}