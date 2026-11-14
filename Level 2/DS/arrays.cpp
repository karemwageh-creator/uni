#include<iostream>
using namespace std;

// class arr{};

struct arr{
    int *P;//-> the array elements 
    int size;//-> the array size 
    int length;//-> how many elements are in the array 
};


void view(const arr& t)
{
   for(int i=0;i<t.length;i++){
    cout<<*(t.P+i)<<' ';
   }cout<<"\n";
}



void set(const arr& t){

    for(int i=0;i<t.length;i++){
        cout<<"Enter the "<<i+1<<"th element :";
        cin>>t.P[i];
        cout<<"\n";
    }
}


void ins(const arr& t){
    cout<<"Enter the index and the element you want :";int in,el;cin>>in>>el;

    
}



int search(const arr& t,int key){
    for(int i=0;i<t.size;i++){
        if(t.P[i]==key)return i+1;
    }
    return -1;
}




int im_search(arr& t,int key){

        for(int i=0;i<t.size;i++){
            if(t.P[i]==key)
            {
                if(i!=0)swap(t.P[i],t.P[i-1]);
                return i+1;
            }
        }
    return -1;
}




int binarySearch(const arr& t,int key){
    int low=0,high=t.size;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(key==t.P[mid])return mid;

        if(key>t.P[mid])high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int sum(const arr& t){
    int total=0;
    for(int i=0;i<t.size;i++)total+=t.P[i];

    return total;
}
int avg(const arr&t)
{
    return sum(t)/t.size;
}

int max(const arr& t){
    int m=t.P[0];
    for(int i=1;i<t.size;i++){
        if(t.P[i]>m)m=t.P[i];
    }
    return m;
}


int min(const arr& t){
    int m=t.P[0];
    for(int i=1;i<t.size;i++){
        if(t.P[i]<m)m=t.P[i];
    }
    return m;
}

int main(){
arr a;
int s,n;
cout<<"Enter the size of the array :";
cin>>s;
    a.size=s;
        a.P=new int[s];
    cout<<"\nHow many numbers do you want to add :";
    cin>>n;
    a.length=n;

    set(a);
    view(a);


}