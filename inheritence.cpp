#include<iostream>
using namespace std;
class electronic_device
{
    electronic_device(){
    cout<<"this is an electronic device";
    }
};
class computer : public electronic_device{
    computer()
    {
        cout<<"i am an computer";
    }
};
int main(){
    computer obj;
    return 0;   
}