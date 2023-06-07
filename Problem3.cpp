#include<iostream>
using namespace std;
class Mammals{
public:
    void Mamal() {
    cout<<"I am a Mammals"<<endl;
    }

};
class MarineAnimals{
public:
    void marine() {
     cout<<"I am a Marine Animal"<<endl;
    }
};
class BlueWhale : public Mammals , public MarineAnimals{
public:

};
int main() {
    BlueWhale b;
    b.Mamal();
    b.marine();

    return 0;
}
