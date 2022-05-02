/*
 * @lc app=leetcode id=127 lang=cpp
 *
 * [127] Word Ladder
 */

// @lc code=start
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<string> myQueue;
        unordered_set<string>mySet(wordList.begin(), wordList.end());
        if(mySet.find(endWord) == mySet.end()){
            return 0;
        }

        myQueue.push(beginWord);

        int counter = 1;
        while (!myQueue.empty()){
            int n = myQueue.size();
           for(int i =0;i < n;i++ ){
               string curr = myQueue.front();
               if(curr == endWord){
                   return counter;
               }
               myQueue.pop();
              mySet.erase(curr);
               for(int j = 0;j < curr.length();j++){
                   char t = curr[j];
                   for(int k = 0; k < 26;k++){
                       curr[j] ='a' + k;
                       if(mySet.find(curr) != mySet.end()){
                           myQueue.push(curr);
                           cout<<curr;
                            
                       }
                   }
                   curr[j] = t;
               }
                
           }
           counter++;
        }
        return 0;

    }
};
// @lc code=end

