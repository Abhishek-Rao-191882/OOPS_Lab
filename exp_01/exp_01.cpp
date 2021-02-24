#include <iostream>
using namespace std;
const int MAX = 100;
int mat[MAX][MAX];
void read_matrix(int mat[MAX][MAX], int x , int y);
void display_matrix(int mat[MAX][MAX], int x, int y);


int main(){

    int m,n;
    cout<<"\n Enter the value of m and n : ";
    cin>>m>>n;
    // Reading elements of m*n matrix
    cout<<"\n Enter " << m*n << " elements of the matrix:";
    read_matrix(mat,m,n);
    cout<<endl;

    // Displaying elements of m*n matrix
    cout << "\n Entered Matrix is as follows:\n";
    display_matrix(mat,m,n);

    return 0;
}
void read_matrix(int mat[MAX][MAX],int x,int y){
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>mat[i][j];
        }
    }
}
void display_matrix(int mat[MAX][MAX], int x, int y){
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}

