#include <vector>
#include <iostream>
using namespace std;

//Removes duplicates from a sorted array and then returns length of new array
int removeDuplicates(vector<int> &nums)
{
    //Var to store length of array
    int len = 0;
    //Var to track first index
    int trailing=0;
    //Condition to determine if has been found
    bool finished = false;

    //Loop to remove duplicates using two for loops will be O(n) time
    for(int i=0; i<nums.size(); i++)
    {
        if(finished)
        {
            break;
        }
        //Second loop to be compared with value of index i
        for(int j=i+1; j<nums.size(); j++ )
        {
            if(j==nums.size()-1)
                finished = true;
            if((nums[i]==nums[j]) || (nums[i]>nums[j]))
                continue;
            else{
                nums[i+1] = nums[j];
                len ++;
                break;
            }    


        }


    }

    //return value
    return len;



}


int main()
{

    vector<int> sample{0,0,1,1,1,2,2,3,3,4};

    for(auto x: sample)
        cout <<x;
    cout<<endl;
    int result = removeDuplicates(sample);

    cout <<result<<endl;

    for(int i =0; i<result; i++)
        cout <<sample[i];







}