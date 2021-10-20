class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       vector<int> ans;
        int n=num.size();
        int i=n-1;
        
        while(i>=0 || k>0){
            if(i>=0){
                ans.push_back((num[i]+k)%10);
                k=(num[i]+k)/10;
            }
            else{
                ans.push_back(k%10);
                k=k/10;
            }
            i--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

/*


Example 1:

Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234
Example 2:

Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455
Example 3:

Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021
Example 4:

Input: num = [9,9,9,9,9,9,9,9,9,9], k = 1
Output: [1,0,0,0,0,0,0,0,0,0,0]
Explanation: 9999999999 + 1 = 10000000000
*/
