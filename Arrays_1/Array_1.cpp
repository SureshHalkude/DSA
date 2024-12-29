#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[]={5,1,22,12,-15,24};
    int size=6;

    int smallest=INT_MAX;

    for(int i=1;i<=size;i++){
        // if(nums[i] < smallest){
        //     smallest = nums[i];

        // }

    smallest = min(nums[i],smallest);
    }
    cout <<"Smallest is:" << smallest << endl;
    return 0;

    
}