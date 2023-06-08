// ************************************************* Brute Force ********************************************* //

// Time Complexity: O((N*M)*(N+M)+(N*M))



#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix,int N,int M,int i)
    {
        for(int j=0;j<M;j++)
        {
            if(matrix[i][j]!=0)
            {
                matrix[i][j]=-1;
            }
        }
    }
    void markCol(vector<vector<int>> &matrix,int N,int M,int j)
    {
        for(int i=0;i<N;i++)
        {
            if(matrix[i][j]!=0)
            {
                matrix[i][j]=-1;
            }
        }
    }
void setZeros(vector<vector<int>> &matrix)
{
	int N=matrix.size();
        int M=matrix[0].size();
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(matrix[i][j]==0)
                {
                    markRow(matrix,N,M,i);
                    markCol(matrix,N,M,j);
                }
            }
        }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(matrix[i][j]==-1)
                {
                    matrix[i][j]=0;
                }
            }
        }
}

