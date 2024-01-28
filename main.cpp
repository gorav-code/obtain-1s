#include <iostream>
using namespace std;


int main(){
    const int max = 6;
    int nums[max] = {1,1,0,1,1,1};
    int count = 0; 

    for (int i = 0; i < max; i++)
    {
        if(nums[i] == 1){
            count++;
        }
    }


    cout << "count 1's: " << count; 
    return 0;
}