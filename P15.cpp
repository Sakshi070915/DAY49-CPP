#include <iostream>
using namespace std;

int main(){
int rows,cols;

cout<<"Enter the number of rows and columns : ";
cin>>rows>>cols;

int matrix1[10][10],matrix2[10][10],result[10][10];

for (int i=0; i<rows; i++){
    for (int j=0; j<cols; j++){
        result[i][j] = matrix1[i][j]+matrix2[i][j];
    }
}

cout<<"Resultant matrix after addition:\n";
for(int i=0; i<rows;i++){
    for(int j=0;j<cols ;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
}
