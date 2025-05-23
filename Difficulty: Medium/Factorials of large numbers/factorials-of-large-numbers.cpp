//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int>ans;
        ans.push_back(1);
        int carry=0;
        for(int i=2;i<=n;i++){
            int j=0;
            while(j<ans.size()){
                int sum=ans[j]*i+carry;
                ans[j]=sum%10;
                carry=sum/10;
                j++;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends