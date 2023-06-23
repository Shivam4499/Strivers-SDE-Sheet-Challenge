// **************************************************** Naive Solution ************************************** //

// T.C => O(n*n*r)


// #include<bits/stdc++.h>
// using namespace std;
 
// int nCr(int n,int r)
// {
//     long long ans=1;
//     for(int i=0;i<r;i++)
//     {
//         ans=ans*(n-i);
//         ans=ans/(i+1);
//     }
//     return ans;
// }

// vector<vector<int>> pascalTriangle(int n)
// {
//     vector<vector<int>> res;
//     for(int row=1;row<=n;row++)
//     {
//         vector<int> temp;
//         for(int col=1;col<=row;col++)
//         {
//             temp.push_back(nCr(row-1,col-1));
//         }
//         res.push_back(temp);
//     }
//     return res;
// }

// int main()
// {
//     int n=6;
//     vector<vector<int>> res = pascalTriangle(n);
//     for(auto it:res)
//     {
//         for(auto ele:it)
//         {
//             cout<<ele<<" ";
//         }
//         cout<<endl;
//     }
// }







// ****************************************** Optimized Solution ****************************************** //


#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row)
{
    long long ans=1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col=1;col<row;col++)
    {
        ans=ans*(row-col);
        ans=ans/col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> res;
    for(int row=1;row<=n;row++)
    {
        res.push_back(generateRow(row));
    }
    return res;
}


int main()
{
    int n=6;
    vector<vector<int>> res = pascalTriangle(n);
    for(auto it:res)
    {
        for(auto ele:it)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}