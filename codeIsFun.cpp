//Program to check whether a  string is a palindrome or not
#include<iostream>
using namespace std;
class solution{
    public:
       bool palindrome(string s){
       int l=s.length()-1;
       int start=0;
       int end=l;
       for(int i=0;i<l/2;i++){
        if(s[start]!=s[end]){
            start++;
            end--;
            return false;
        }
    }
    return true;
   }
    void sol(string s){
       if(palindrome(s)){
        cout<<"It is a palindrome string";
    }else{
        cout<<"It is not a palindrome string";
    }
}
};
int main(){
    solution ob;
    string s;
    cin>>s;
    ob.sol(s);
}

//Performed the Program in both in both class based and function based type.