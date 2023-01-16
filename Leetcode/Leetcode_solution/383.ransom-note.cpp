// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem383.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start

static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}();

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        fast_io;
        //? My solution
        if (magazine.size() < ransomNote.size()) return false;

        unordered_map<char, int> mang;

        for (int i = 0; i < magazine.size(); ++i){
            mang[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.size(); ++i){
            if (mang[ransomNote[i]] == 0) return false;
            mang[ransomNote[i]]--;

        }

        return true;


    }
};
// @lc code=end

