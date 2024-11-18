#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo(int i, int j)
        {
            A = i;
            B = j;
        }
        Demo(Demo &ref)
        {
            A = ref.A;
            B = ref.B;
        }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(obj1);

    cout<<obj1.A<<"\t"<<obj1.B<<"\n";
    cout<<obj2.A<<"\t"<<obj2.B<<"\n";
    
    return 0;
}