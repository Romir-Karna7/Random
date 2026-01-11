#include <iostream>
#include <vector>
using namespace std;

int main() {
  
    int singleNumber(vector<int>& nums) {
        int num=0;
        for(int i:nums){
            num = num^i;
        }
        return num;
    }
}