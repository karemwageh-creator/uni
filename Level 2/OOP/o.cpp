#include<bits/stdc++.h>
using namespace std;

// enum week {sat=1,sun,mon,tue,wed,ths,fri};

enum mod_mot {cap=1,hp,nm};

struct date
{
    int day;
    int month;
    int year;
    // week s;
};


class car;


class motor{

private:
    string name;
    date d_motor;
    int cap;
    int hp;
    int nm;
    int enders;
    static vector<car> cs;

public:

    motor(){};
    motor(string na,date d,int c,int h,int n,int ca):d_motor(d),cap(c),hp(h),nm(n),enders(ca),name(na) {};



    friend car;
    void mot_mod(mod_mot x,int l){
        switch (mod_mot(x))
        {
        case 1:
            cap=l;
        case 2:
            hp=l;
        case 3:
            nm=l;
        
        default:
            break;
        }
    }


};


class car{

    private:
        static int c_count;
        int price;
        int max_speed;
        string name;
        char type;
        date model;
        int model_num;
        


    public: 

        car(const car&bm){

            price=bm.price;
            name=bm.name;
            model_num=c_count;
            c_count++;
            type=bm.type;
            max_speed=bm.max_speed;
            model = bm.model; 

        }
        car(const motor&jz){
 
            jz.cs.push_back(*this);

        }
        car(){};

        void _set(int p,int s,string n,char t,date m){
            price=p;max_speed=s;name=n;type=t;model=m;
        }
        void get(){
            cout<<"My name is vrm vrm slim shady, no just missing around my name is "<<name
            <<"\nMy price is "<<price
            <<"\nMy max speed is "<<max_speed
            <<"\nThis is the number of the car on the list "<<model_num
            <<"\nThe type is "<<type
            <<"\nThe the date of the car "<<model.month<<'/'<<model.day<<'/'<<model.year<<"\n";
        }
};



class l_p{
        string k="X company hopes that it helped you well";
    protected:
        float per=0.2;
        int width;
        int height;
        int pricePersquare;
        void ma(){
            cout<<k<<"\n";
        }
    public:
        void setInfo(){
            int x,y;cin>>x>>y;

            width=x;height=y;
        }
        void info(){
            cout<<width<<' '<<height<<"\n";
        }
        int area(){
            int a=width*height;
            return a;
        }
};


class land:public l_p{
    public:
        int pri_l(){
            
            return area()*pricePersquare;
        }
        int pri_me(){
            return pri_l()*per;
        }
        l_p::ma;

        
};

class prop:public l_p{
        int floars ;
    public:
        void set_f(int x){
            floars=x;
        }
        int pri_l(){
            
            return area()*pricePersquare*floars;
        }
        int pri_me(){
            return pri_l()*per;
        }
        l_p::ma;

};

int main(){


}