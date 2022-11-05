#include "iostream"
using namespace std;
// * Outer loop decides no of Rows, Inner loop decides no of columns
void pattern1(){
    int n;
    cin>>n; // if n=4,  r=(1→4) 3, c=(1→7)
    // * Formula:  for(col>=(n-r-1) to col<=(n+r-1)) print "*"
    /*    r | n-3 n-2 n-1 n n+1 n+2 n+3
          1 |             *
          2 |          *  *  *
          3 |      *   *  *  *   *
          4 |   *  *   *  *  *   *  *
         */
    for(int r=1;r<=n;r++){
        for(int col=1;col<=(2*n)-1;col++){
            if(col >= n - (r -1) && col <= n + (r - 1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern1();
}