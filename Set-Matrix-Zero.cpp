// ************************************************* Brute Force ********************************************* //

// Time Complexity: O((N*M)*(N+M)+(N*M))



// #include <bits/stdc++.h>
// using namespace std;

// void markRow(vector<vector<int>> &matrix,int N,int M,int i)
//     {
//         for(int j=0;j<M;j++)
//         {
//             if(matrix[i][j]!=0)
//             {
//                 matrix[i][j]=-1;
//             }
//         }
//     }
//     void markCol(vector<vector<int>> &matrix,int N,int M,int j)
//     {
//         for(int i=0;i<N;i++)
//         {
//             if(matrix[i][j]!=0)
//             {
//                 matrix[i][j]=-1;
//             }
//         }
//     }
// void setZeros(vector<vector<int>> &matrix)
// {
// 	int N=matrix.size();
//         int M=matrix[0].size();
//         for(int i=0;i<N;i++)
//         {
//             for(int j=0;j<M;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     markRow(matrix,N,M,i);
//                     markCol(matrix,N,M,j);
//                 }
//             }
//         }
//         for(int i=0;i<N;i++)
//         {
//             for(int j=0;j<M;j++)
//             {
//                 if(matrix[i][j]==-1)
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//         }
// }



// *************************************** Better Solution ***************************************** //

#include<bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int> row(n,0);
    vector<int> col(m,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i] || col[j])
            {
                matrix[i][j]=0;
            }
        }
    }
}