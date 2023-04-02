class Solution
{
private:
    vector<int> nextSmallerElement(vector<int> arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) // array ko end se traverse karna start kar rhe
        {
            int curr = arr[i];      // end se first element ko curr variable me store kara liya
            while (s.top() != -1 && arr[s.top()] >= curr) // sbse pehle check kar rhe ki top ki value jo ki array ka last se first element hai vo curr se badi hai ya nhi curr se
            {
                s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> nextSmallerElement(vector<int> arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; i++) // array ko end se traverse karna start kar rhe
        {
            int curr = arr[i];      // end se first element ko curr variable me store kara liya
            while (s.top() != -1 && arr[s.top()] >= curr) // sbse pehle check kar rhe ki top ki value jo ki array ka last se first element hai vo curr se badi hai ya nhi curr se
            {
                s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

public:
    int largestRectangularArea(vector<int> &heights)
    {
        int n = heights.size();

        vector<int> next(n);
        next = nextSmallerElement(heights, n);

        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int l = heights[i];

            if (next[i] == -1)
            {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            
            int newArea = l * b;
            area = max(area, newArea);
        }
        return ans;
    }
};