/**
 * Author: Vincent X
 * Date:   2021-12-16
 * 
 * Given an array of integers nums, calculate the pivot index of this array.
 * The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
 * If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
 * Return the leftmost pivot index. If no such index exists, return -1.
 *
 * Example 1:
 * 
 * Input: nums = [1,7,3,6,5,6]
 * Output: 3
 * Explanation:
 * The pivot index is 3.
 * Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
 * Right sum = nums[4] + nums[5] = 5 + 6 = 11
 */

#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(const vector<int>& v);

int main() {

    vector<int> v{-1, 9, 4, 3, 5}; // (-1) + 9 = 3 + 5, so index 2 is the output

    cout << pivotIndex(v) << endl;

    return 0;
}

int pivotIndex(const vector<int>& v) {
    int leftSum = 0, rightSum = 0;

    for (const int& elem: v) rightSum += elem;

    for (int index = 0; index < v.size(); index++) {
        rightSum -= v.at(index);

        if (leftSum == rightSum)
            return index;

        leftSum += v.at(index);      
    }

    return -1;    
}