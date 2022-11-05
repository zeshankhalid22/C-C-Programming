//// Array by default works as a pointer a=&a(base address) , while in pointers (int *ptr) ptr != &ptr
//#include "iostream"
//using namespace std;
//int main(){
//    int a[5]={2,6,10,14,18};
//    int *ptr = a;  // initialize pointer with array's base address and continuous addresses with 4Byte(int) gap
//
//    cout<<"&a=a=ptr "<<ptr<<endl;   //&a=a=ptr whatever we print gives us same value(base address)
//    cout<<"&a+1=a+1=ptr+1 "<<a+1<<endl;    // base address + 1 Next int(4 Bytes) address
//
//    // Printing out values
//    cout<<"*a=*ptr: "<<*a<<endl;
//    cout<<"*a+1=*ptr+1: "<<*a+1<<endl<<endl;
//
//    cout<<"*(a+1) != *a+1"<<endl;           // BUT here's a twist
//    // .*a+1 will print 1st block value with 1 increment, *(a+1) in will increment block and print 2nd element value
//    cout<<"*a+1: "<<*a+1<<". *(a+1): "<<*(a+1)<<endl<<endl;
//
//    // As a=&a but ptr!=&ptr
//    cout<<"ptr "<<ptr<<". &ptr "<<&ptr<<endl; // ptr stores Address of a, while &ptr stores Address of &ptr
//
//}