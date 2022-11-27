#include<iostream>
using namespace std;


void column_sum(int arr[m][n]){
    int i,j,sum = 0;
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            sum = sum + arr[j][i];
        }
         cout<<i<<' ';
        sum = 0;
    }
  
}
int main()
{
 
    int i,j,m,n;
    int arr[m][n];
    int x = 1;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            arr[i][j] = x++;
    column_sum(arr);
 
    return 0;
}



