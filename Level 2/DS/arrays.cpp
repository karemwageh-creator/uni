#include<iostream>
using namespace std;

// class arr{};

struct arr{
    int *P;//-> the array elements 
    int size;//-> the array size 
    int length;//-> how many elements are in the array 
};
void view(arr t)
{
   for(int i=0;i<t.length;i++){
    cout<<*(t.P+i)<<' ';
   }cout<<"\n";
}
void set(arr t){

    for(int i=0;i<t.length;i++){
        cout<<"Enter the "<<i+1<<"th element :";
        cin>>t.P[i];
        cout<<"\n";
    }
} 
void ins(arr t){
    cout<<"Enter the index and the element you want :";int in,el;cin>>in>>el;

    
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