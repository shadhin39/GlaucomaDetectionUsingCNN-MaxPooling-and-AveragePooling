#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[100][100];
int rowMax= -10000;
int colMax= -10000;

int maxRowSum(int a[100][100])
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            sum = sum+a[i][j];
        }
        if(sum>rowMax)
            rowMax=sum;
        sum=0;
    }
    return rowMax;
}

int maxColSum(int a[100][100])
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            sum = sum+a[j][i];
        }
        if(sum>colMax)
            colMax=sum;
        sum=0;
    }
    return colMax;
}

int main(void)
{
    cout<<"Enter the number no. of rows: ";
    cin>>n;
    cout<<"\n";
    cout<<"Enter the number no. of columns: ";
    cin>>m;
    cout<<"\n";
    cout<<"Enter the values: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    cout<<"Your 2D Matrix is: ";
    cout<<"\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    int maxRow = maxRowSum(a);
    cout<<"\nMaximum value among the rows is: "<<maxRow;
    int maxCol = maxColSum(a);
    cout<<"\nMaximum value among the columns is: "<<maxCol;
    cout<<"\n";
    if(rowMax<colMax)
        cout<<"\nThe minimum value between rowMax and colMax is: "<<rowMax;
    else
        cout<<"\nThe minimum value between rowMax and colMax is: "<<colMax;
    cout<<"\n";
    return 0;
}
