//
// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
bool isTreeSymmetric(Tree<int> * t) { //here tree is template
    queue<Tree<int>*> q1,q2;
    if(t==NULL)
        return true;
    q1.push(t->left);
    q2.push(t->right);
    vector<int> v1,v2;
    while(!q1.empty())
    {
        Tree<int> * tp = q1.front();q1.pop();
        if(tp == NULL)
            v1.push_back(-1);
        else if(!(tp->left == NULL && tp->right == NULL) && tp != NULL)
        {
            q1.push(tp->left);
            q1.push(tp->right);
        }
        if(tp != NULL)
            v1.push_back(tp->value); 

        
        
    }
     while(!q2.empty())
    {
        Tree<int> * tp = q2.front();q2.pop();
        if(tp == NULL)
            v2.push_back(-1);
        
       
        else if(!(tp->left == NULL && tp->right == NULL) && tp != NULL)
        {
        
            q2.push(tp->right);
            q2.push(tp->left); 
        }
        if(tp != NULL)
            v2.push_back(tp->value);
    }

    for(auto it = v1.begin(),it2=v2.begin(); it2!=v2.end()&&it != v1.end(); it++,it2++)
    {
        cout<<*it<< " "<<*it2<<endl;
        if(*it != *it2)
            return false;
    }
    return true;
}