#include "iostream"
using namespace std;
struct Person{  // struct with Person attributes
    // Data members ↓
    string name;
    int salary;
};
int main(){

    Person p1,p2;   // Structure variables

    p1={"ali",5500}; // 1. initializing corresponding values inside struct data members
    p2.name="nasir"; // 2. another way to initialize value
    p2.salary=3000;

    // Displaying values ↓
    cout<<"Name1: "<<p1.name<<endl;
    cout<<"rno1: "<<p1.salary<<endl;
    cout<<"Name2: "<<p2.name<<endl;
    cout<<"rno2: "<<p2.salary<<endl;

}