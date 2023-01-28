/**
 * Problem Link
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 */
class Solution
{
public:
    /**
     *
     * Approach
     * Here we are first going to find the first word size then we are going to
     * itterate using 2 loop
     * in the first loop we will itterate till the string at [0] because we want to find common
     * prefix for if we get out of range of a string there will not be possible
     * to find common prefix
     * After this we are again itterating using a loop from j = 0 to j<size of the strs giving in the question
     * which is a vector of string
     * the we are going to compare in an if block weather it is avalible in the next strings or not
     * after this loop has done its work we will add the current character to the output string and at last
     * we are going to return the output string
     *
     */
    
    /*
        Test Cases
        Example 1:
        Input: strs = ["flower","flow","flight"]
        Output: "fl"

        Example 2:
        Input: strs = ["dog","racecar","car"]
        Output: ""
    */
    string longestCommonPrefix(vector<string> &strs)
    {
        string str = "";
        // Str will be returned
        int size = strs.size();
        int stringSize = strs[0].size();
        // O(n^2) timecomplexity
        for (int i = 0; i < stringSize; i++)
        {
            char current = strs[0][i];
            for (int j = 0; j < size; j++)
            {
                if (current != strs[j][i])
                {
                    return str;
                }
            }
            str += current;
        }
        return str;
    }
};