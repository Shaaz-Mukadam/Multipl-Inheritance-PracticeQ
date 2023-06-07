//Write a program using multiple inheritance that perform add , mul , sub , divides
#include<iostream>
using namespace std;
class Add {
 public:
     int a = 10 ;
     int b = 20;
     void sum() {
     cout<<"Addition is "<<a+b<<endl;
     }
};
class Sub {
    public:
 int a = 30;
 int b = 40;

 void min() {
  cout<<"Substraction is"<<a-b<<endl;
 }
};
class Div : public Add , public Sub {
 public:
};
int main() {
    Div d1;
    d1.sum();
    d1.min();

    return 0;
}
