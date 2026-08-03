#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void wave(int arr[][4],int row ,int col){
    for(int j=0;j<col;j++)
    {
        if(j%2==0){
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }else{
            for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){
    int n,m;
    cout<<"Enter the value of n and m :";
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m,1));

//     vector<vector<int>>matrix(3,vector<int>(4,1));

//     for(int i=0;i<3;i++)
//     for(int j=0;j<4;j++)
//     cout<<matrix[i][j]<<" ";

//     cout<<"rows"<<matrix.size();
//      cout<<"colss"<<matrix[0].size();
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>matrix[i][j];

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    //wave form
    wave(arr1,3,4);

// }