#include <stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) // array ko end se traverse karna start kar rhe
    {
        int curr = arr[i]; // end se first element ko curr variable me store kara liya
        while (s.top() >= curr) // sbse pehle check kar rhe ki top ki value jo ki array ka last se first element hai vo curr se badi hai ya nhi curr se
        {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}