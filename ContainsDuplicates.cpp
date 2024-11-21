#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
      bool hasDuplicate(vector<int> nums) {
           set<int>seenDuplicate;
           for(int num:nums){
            if(seenDuplicate.count(num)){
                return true;
            }
            seenDuplicate.insert(num);
           }
           return false;
    }
};
int main(){
    Solution ob;
    int n;
    vector<int>nums;
    cout<<"Enter the length of array :"<<endl;
    cin>>n;
    cout<<"Enter the elements in an array :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"Check Whether array contains duplicates"<<endl;
   if (ob.hasDuplicate(nums)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}