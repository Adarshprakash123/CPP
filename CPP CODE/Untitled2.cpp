#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
     int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char p=n+1-i;
        while(j<=i){
            char e=p+j-1;
            cout<<e;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
