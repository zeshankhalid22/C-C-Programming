#include "iostream"
using namespace std;
// * Outer loop decides no of Rows, Inner loop decides no of columns
void pattern1(){
    cout<<"Enter No of Rows: ";
    int n,totalColInRow;
    cin>>n;
    for(int row=1;row<=n;row++){
        if(row<=n/2)
            totalColInRow=row;
        else if(row>n/2)
            totalColInRow=n-row;
        for(int col=1;col<=totalColInRow;col++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main(){
    pattern1();
}