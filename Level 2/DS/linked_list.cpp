#include<bits/stdc++.h>
using namespace std;

class node{
    
    public:

    int value {};
    node* next {nullptr};

    node(int i){
        value =i;
        next =NULL;
    }
    
};

class _list{
    private:
        node* n {};

    public:
        _list(){
            n=NULL;
        }
        ~_list(){
            while(!is(n))d_Head();

            cout<<"we had good time\n";
        }

        bool is(node* k){
            return k==NULL;
        }


        void toHead(int i){
            node* ne=new node(i);

                ne->next=n;
                n=ne;
        }


        void toTail(int i){
            node* ne=new node(i);
            if(is(n)){
                cout<<"Head = Tail here\n";
                n=ne;
            }else{
                node*p =n;
                while(!is(p->next)){
                    p=p->next;
                }
                p->next=ne;
            }
        }
        
        int find(int i){
            int cnt=0;
            if(is(n)){
                cout<<"list is empty\n";
                return 0;
            }
            else {
                
                node* p=n;
                while(p != nullptr){
                    cnt++;
                    if(p->value==i){
                        
                        return cnt;
                    }
                    p=p->next;
                }
                cout<<"element wasn't found\n";
                return 0;
            }   
        }

    int d_Head(){
        int x = -1;

        if(is(n)){
            cout << "List is empty\n";
            return x;
        }

        else
        {
            node* p = n;
            x = n->value;
            n = n->next;
            delete p;
            
            return x;
        }

    }
    int d_Tail(){
        int x = -1;

        if(is(n)){
            cout << "List is empty\n";
            return x;
        }
        else if(n->next==NULL)
        {
            x = n->value;
            delete n;
            n = NULL;
            return x;
        }else {
            node* p=n;
            node* b=p;
            while(!is(p->next)){
                b=p;
                p=p->next;
            }
            b->next=NULL;
            x=p->value;
            delete p;
            return x;
        }
    }

        void print(){
            if(is(n))cout<<"list is empty\n";
            else{
                node* p=n;
                while(!is(p)){
                    cout<<p->value<<' ';
                    p=p->next;
                }cout<<"\nall elements are printed.\n";
            }
        }
        void num(){
            int i=0;
            node* p=n;
            while(!is(p)){
                i++;
            p=p->next;
            }
            cout<<"the number of elements = "<< i<<"\n";
        }

        int _min(){
            if(is(n)){
                cout<<"list is empty\n";
                return 0;
            }
            else {
                node* p=n;
                int o=p->value;
                p=p->next;
                while(!is(p)){
                    if(p->value<o)o=p->value;

                    p=p->next;
                }
                return o;
            }
            
        }

        int od(){
            if(is(n)){
                cout<<"list is empty\n";
                return 0;
            }else {
                int sum=0;
                node* p=n;
                while(!is(p)){
                    if(p->value%2 != 0)sum+=p->value;

                    p=p->next;
                }
                return sum;
            }
        }

        void co(/*const _list& from,*/_list*& to){
            
            if(is(n))cout<<"the list is empty\n";

            else{
                if(is(to->n))to->~_list();
                to->n=new node(n->value);
                node* tail=to->n;
                node* p=n->next;

                while(!is(p)){
                    tail->next =new node(p->value);
                    tail=tail->next;
                    p=p->next;
                }
            }
        }



};

void ma(int t){
    switch(t){
        case 1:{
            cout<<"Choose the _list you want by index : ";
            break;
        }
        case 2:{
            cout<<"this index does not have a _list\n";
            break;
        }
        case 3:{
            cout<<"Enter the number : ";
            break;
        }
        }
}


bool che(vector<_list*>&z,bool& con,int& w){
        ma(1);
        cin>>w;
        if(w>z.size() || w<=0){
            ma(2);
            con=1;
            return 0;
        }
        return 1;
}

int main(){

    int x=0,_list_count=0;cout<<"How many operations do you want : ";cin>>x;
    vector<_list*> lists;
    while(x){
            int q=0;
            cout<<"the operations that is available are : "
            <<"\n1:Add number to head"
            <<"\n2:Add number to tail"
            <<"\n3:Find number in the _list"
            <<"\n4:Delete number from head"
            <<"\n5:Delete number from tail"
            <<"\n6:Print all _list"
            <<"\n7:How many elements are in the _list"
        <<"\n8:The smallest number in the _list"
        <<"\n9:Sum of all odd numbers"
        <<"\n10:create new _list and copy it from another"
        <<"\n11:create new _list"
        <<"\n12:Destroy _list"
        <<"Enter the operation number : ";cin>>q;
    
    bool con=0;
        switch (q){
            case 1:{
                int w=0;
                if(che(lists,con,w)){
                    int ww=0;ma(3);cin>>ww;
                    
                    lists[w-1]->toHead(ww);
                }

                break;
            }

            case 2:{
                
                int w=0;
                if(che(lists,con,w)){
                    int ww=0;ma(3);cin>>ww;

                    lists[w-1]->toTail(ww);
                }
                break;

            }
            
            case 3:{
                
                int w=0;
                if(che(lists,con,w)){
                    int ww=0;ma(3);cin>>ww;
                    lists[w-1]->find(ww);

                }
                break;
            }
            case 4:{
                int w=0;
                if(che(lists,con,w)){
                    cout<<lists[w-1]->d_Head()<<"\n";

                }
                break;
            }
            case 5:{
                int w;
                if(che(lists,con,w)){
                    cout<<lists[w-1]->d_Tail()<<"\n";
                }
                break;
            }
            case 6:{
                int w=0;
                if(che(lists,con,w))lists[w-1]->print();
                break;
            }
            case 7:{
                int w=0;
                if(che(lists,con,w))lists[w-1]->num();
                break;
            }
            case 8:{
                int w;
                if(che(lists,con,w))cout<<lists[w-1]->_min()<<"\n";
                break;
            }
            case 9:{
                int w;
                if(che(lists,con,w))lists[w-1]->od();
                break;
            }
            case 10:{
                int w=0;
                if(che(lists,con,w)){
                    _list* k=new _list();lists.push_back(k);
                    lists[w-1]->co(k);
                }
                break;
            }
            case 11:{
                _list* l=new _list();lists.push_back(l);
                break;
            }
            case 12:{
                int w=0;
                if(che(lists,con,w)){
                    lists[w-1]->~_list();
                }
                break;
            }
            default :{
                cout<<"try again\n";
                con=1;
                break;
            }
    
        }
        if(con)continue;
        x--;
    cout<<"\n\n\n\n\n\n\n\n";
    }
lists.clear();
}
