#include<iostream>
#include<string>
using namespace std;
//function to get maximum occurring character
char maxOccChar(string s){
 int arr[26]={0};
 for(int i=0;i<s.length();i++){
 	char ch=s[i];
 	int number =ch - 'a';
 	arr[number]++;
 	
 }
 int maxi=-1,ans=0;
 for(int i=0;i<26;i++){
 	if(maxi<arr[i]){
 		ans=i;
 		maxi=arr[i];
	 }
 }
 return 'a'+ans;
}
//driver program
int main()
{
	string a="output";
	cout<<"Maximun Occurring Character is : ";
	cout<<maxOccChar(a);
	return 0;
}
