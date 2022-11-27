#include <iostream>
#include <cstring>
#include<string>
using namespace std;

void getCompressedString(string str){
        int len=str.length();
        for(int i=0;i<len;i++){
            int count=1;
            while(i<len-1&&str[i]==str[i+1]){
                count++;
                i++;
            }
            if(count==1){
            cout<<str[i];
        }
        else{
            cout<<str[i]<<count;
             
        }
            
        }
         
    }
int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str=getCompressedString(str);
    cout << str << endl;
}
