void levelOrder(Node * root) {

        queue<Node *>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                Node* cur = q.front();
                q.pop();
                if(cur->left!=NULL){
                    q.push((cur->left));
                }
                if(cur->right !=NULL){
                    q.push(cur->right);
                }
                cout<<cur->data<<" ";
            }
        }
    };