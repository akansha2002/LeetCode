// intution - use stack
// possible ans -> [-ve, +ve], [-ve], [+ve]


// pushing only positive elements in stack
// negative elements will be pushed in our ans array when stack is empty
// 

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        vector<int> ans;
        stack<int> st;
        bool flag;

        for(int i = 0; i < arr.size(); i++)
        {
            flag = true;
            if(arr[i] > 0) st.push(arr[i]); 
            else
            {
                while(!st.empty() && abs(arr[i]) >= st.top())
                {
                    
                    if(abs(arr[i]) == st.top()) 
                    {
                        flag = false;
                        st.pop();
                        break;
                    }
                    st.pop();
                    
                } 
                if(st.empty() && flag == true) ans.push_back(arr[i]);
            }
        }
        
        int count = ans.size();
        int size = st.size();

        while(!st.empty()) 
        {
            ans.push_back(st.top()); 
            st.pop();
        }
        reverse(ans.begin() + count, ans.end());




        return ans;
    }
};