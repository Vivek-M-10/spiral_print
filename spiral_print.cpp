#include<iostream>
using namespace std;

void spiral_print(int a[][10], int n,int m)
{
    int startrow = 0;
    int endrow = n-1;
    int startcol = 0;
    int endcol = m-1;

    while(startcol<=endcol and startrow<=endrow ){

        //startrow
        for(int col= startcol;col<=endcol;col++)
        {
            cout<<a[startrow][col]<<" ";
        }
        //endcol
        for(int row = startrow+1;row<=endrow;row++)
        {
            cout<<a[row][endcol]<<" ";
        }
        //endrow
        for(int col = endcol-1;col>=startcol;col--)
        {
            if(startrow==endrow){
                break;
            }
            cout<<a[endrow][col]<<" ";
        }
        //startcol
        for(int row = endrow-1;row>=startrow+1;row--)
        {
            if(startcol==endcol){
                break;
            }
            cout<<a[row][startcol]<<" ";
        }
        startcol++;
        endcol--;
        startrow++;
        endrow--;
    }
    cout<<endl;

}

int main()
{
    int a[][10] = {{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}};
    int n = 4, m=4;
    spiral_print(a,n,m);
    int b[][10] = {{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12}};
    spiral_print(b,3,4);
}