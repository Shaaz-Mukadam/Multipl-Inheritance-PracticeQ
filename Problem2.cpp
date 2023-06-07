//Write a c++ program of Multiple inheritance for finding average of six subject marks.
#include<iostream>
using namespace std;

class Student{
 protected:
     int rno,sum=0 , marks[5],i;

 public:
    void details() {
     cout<<"\nEnter the student roll number:\t";
     cin>>rno;

     cout<<"\nEnter the marks of five subject:\t";
     for(i=0 ; i<5 ; i++){
        cin>>marks[i];
     }
     for ( i = 0; i < 5; i++)
            {
            sum = sum + marks[i];
            }
    }
};

class Sports {
protected:
    int s_mark;
public:
    void get_mark() {
    cout<<"\nEnter the sports Marks\t";
    cin>>s_mark;
    }
};

class Result : public Student , public Sports {
 protected:
     int total,avg;
 public:
    void Display() {
    total = sum + s_mark;
    avg = total / 6;
    cout<<"Roll Number is"<<rno<<endl;
    cout<<"Total is "<<total<<endl;
    cout<<"Avrage is"<<avg<<endl;

    }
};
int main() {
  Result r1;
  r1.details();
  r1.get_mark();
  r1.Display();

  return 0;
}

//*********OUTPUT********
Roll Number is10
Total is 250
Avrage is41

