#include<iostream>
using namespace std;
    class point{
        private:
            int x,y;
            public:
            //list initialisation
                // point() : x{0},y{0} { //default constructor
                //     cout<<"default constructor"<<endl;
                // }
                point(int p=0,int q=0) : x{p},y{q} { //parameterized constructor
                    cout<<"parameterized constructor"<<endl;
                }
                    point add(point p) {
                    point r;
                    r.x = x + p.x;
                    r.y = y + p.y;
                    return r;
                }
                void show(){
                    cout<<"point: ("<<x<<", "<<y<<")"<<endl;
                }
    };
    int main(){
       point p, q(20,50);
       point r=q;
       r.show();
       q.show();
        return 0;
    }
