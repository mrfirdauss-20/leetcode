#include <bits/stdc++.h>
#include <string>
#include <map>
#include <stack>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if (s.length()%2) return false;
        map<char, char> open{
            {'(',')'},
            {'{','}'},
            {'[',']'}
        };
        stack<char> st;
        int i = 0;
        bool still = true;
        while(i<s.length() && still){
            if(open.find(s[i])!=open.end()){
                st.push(s[i]);
            }else if (st.size()>0&&open[st.top()]==s[i]){
                st.pop();
            }else{
                still = false;
            }
            i=i+1;
        }

        return !st.size() && still;
    }
};