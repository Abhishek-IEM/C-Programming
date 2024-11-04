#include<iostream>
#include<vector>
using namespace std;

void nextPermutations(vector<int>& nums)
{
    int n=nums.size();
    int idx=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            idx=i;
            break;
        }
    } 
    if(idx==-1){
        reverse(nums.begin(),nums.end());
        return;
    } 
    reverse(nums.begin()+idx+1,nums.end());

    int j=-1;
    for(int i=idx+1;i<n;i++)
    {
        if(nums[i]>nums[idx])
        {
            j=i;
            break;
        }
    } 
    int temp=nums[idx];
    nums[idx]=nums[j];
    nums[j]=temp;
} 

int main()
{
    int n;
    cout<<"Enter size of vector :";
    cin>>n;
    vector<int> v;
    cout<<"Enter elements of vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    nextPermutations(v);
}
