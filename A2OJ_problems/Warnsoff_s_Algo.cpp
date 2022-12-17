#include <bits/stdc++.h>
using namespace std;
const int n=4;
void display(int st[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<st[i][j]<<" ";
        }
        cout<<endl;
    }
}
void KnightMove(int row,int col,int chess[n][n],int move)
{
    if(row<0 || col<0 || row>=n || col>=n || (chess[row][col]>0))
    return;
    else if(move == n*n)
    {
        chess[row][col]=move;
        display(chess);
        return;
    }

    chess[row][col]=move;
    KnightMove(row-2,col+1,chess,move+1);
    KnightMove(row-1,col+2,chess,move+1);
    KnightMove(row+1,col+2,chess,move+1);
    KnightMove(row+2,col+1,chess,move+1);
    KnightMove(row+2,col-1,chess,move+1);
    KnightMove(row+1,col-2,chess,move+1);
    KnightMove(row-1,col-2,chess,move+1);
    KnightMove(row-2,col-1,chess,move+1);
    chess[row][col]=0;


}
int main()
{
    
    int  ar[n][n];  
    int r,c;
    cin>>r>>c;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ar[i][j]=0;
        }
    }

    KnightMove(r,c,ar,1);
}