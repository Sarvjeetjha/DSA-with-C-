#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// to determine the intersection of two given array
//brute force approach
// vector<int> intersection(vector<int> arr1, vector<int> arr2)
// {
//     int n = arr1.size();
//     int m = arr2.size();
//     sort(arr1.begin(),arr1.end());
//     sort(arr2.begin(),arr2.end());
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 if (ans.size() == 0 || ans.back() != arr1[i])
//                 {
//                     ans.push_back(arr1[i]);
//                     break;
//                 }
//             }
//         }
//     }
//     return ans;
// }
//better approach
vector<int> intersection(vector<int>&  arr1, vector<int>& arr2) {
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
      
        vector<int>ans;
        int i=0;
        int j=0;
        while(i<arr1.size()&& j<arr2.size()){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
            else{
               if (ans.empty() || ans.back() != arr1[i])
               { ans.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        return ans;}
int main()
{
    int n, m;
    cout << "enter number of elemnt in array 1" << endl;
    cin >> n;
    cout << "enter number of elemnt in array 2" << endl;
    cin >> m;
    vector<int> arr1;
    vector<int> arr2;
    cout << "enter element in array 1" << endl;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr1.push_back(a);
    }
    cout << "enter element in array 2" << endl;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        arr2.push_back(a);
    }
    for(auto i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;
     for(auto i:arr2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"intersection of array is "<<endl;
    vector<int>ans=intersection(arr1, arr2);
    for(auto i:ans){
        cout<<i<<" ";
    }
    


    return 0;
}