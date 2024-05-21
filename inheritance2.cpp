#include<iostream>
using namespace std;
class animal{
    public:
    void eat()
    {
        cout<<"i can eat"<<endl;
    }
    void sleep(){
        cout<<"i can sleep"<<endl;
    }
};
class dog:public animal{
void bark(){
    cout<<"i can bark"<<endl;
}

};
int main(){
    dog mydog;
    mydog.eat();
    mydog.sleep();
    mydog.bark();
    return 0;
}
