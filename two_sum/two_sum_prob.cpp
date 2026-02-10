#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    Solution(){
    }
    
    vector<int>twoSum(vector<int> &nums, int target){
	vector<int> collectionVec;
        for(int i{0}; i < nums.size(); i++){
	    for(int j{0}; j < nums.size(); j++){
	        if((i != j) && (nums[i] + nums[j] == target)){
		    collectionVec.push_back(i);
		    collectionVec.push_back(j);
		    return collectionVec;
                }
	    }
        }
	return collectionVec;
    }
};

int main(){
    vector<int>inputVec{2,4,5,7,8};
    vector<int>collection;
    int target = 6;
    Solution testObj;
    collection = testObj.twoSum(inputVec, target);
    for(auto value : collection){
        cout << "Value is: " << value << endl;
    }
}
