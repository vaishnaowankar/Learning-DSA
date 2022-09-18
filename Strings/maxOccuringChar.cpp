//Problem Link = https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

#include<bits/stdc++.h>
using namespace std;

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        //create an array to store count of each charater occuring in string
        int arr[26] = {0};
        
        for(int i = 0 ; i<str.length() ; i++){
            char ch = str[i];
            
            int number = 0;
            number = ch - 'a';   
            arr[number]++;
        }
        
        //till here we have an array that has stored the no of occurence of each chars
        int maxi = -1 , ans = 0 ;
        for(int i = 0 ; i<26 ; i++){
            if(maxi < arr[i]){
                ans = i;    //store the index of max occuring char in ans
                maxi = arr[i];
            }
        }
        
        char finalAns = 'a' + ans;    //here we will obtain the actual character.
        return finalAns;
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends