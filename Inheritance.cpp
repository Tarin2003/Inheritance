#include<iostream>
#include<string>
using namespace std;

class person {
   public:
       string name;
       int age;

       person(string name, int age) {
           this->name = name;
           this->age = age;
       }

       void display(){
           cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
       }

};

class student : public person {
   public:
       string id;
       // Corrected constructor, calls the base class constructor 'person'
       student(string name, int age, string id): person(name, age){
           this->id = id;

       }

       void display(){
           cout<<"Student Name: "<<name<<endl<<"Student Age: "<<age<<endl<<"Student ID: "<<id<<endl;
       }
};

int main() {
    cout<<"Calling person class-"<<endl;
    person p("Sharika Alam", 24);
    p.display();

    cout<<endl<<"Calling student class-"<<endl;
    student s("Kaniz Fatema", 25, "CSE 0210970");
    s.display();

    return 0;
}

