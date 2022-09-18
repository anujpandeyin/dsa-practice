int height(Node* root) {
        // Write your code here.
         queue<Node *>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            i++;
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
               // cout<<cur->data<<" ";
            }
        }
        return i-1;
    };
