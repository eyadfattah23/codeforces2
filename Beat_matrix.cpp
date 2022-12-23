#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int row_index(int arr[5]){

}

int main(){
    fastio();
    int row,col,moves=0;
    bool arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if (arr[i][j] == 1)
            {
                row = i+1;
                col = j+1;
            }
            
        }
        
    }
    while (row > 3)
    {
        row--;
        moves++;
    }
    while (col > 3)
    {
        col--;
        moves++;
    }
    while (row<3)   
    {
        row++;
        moves++;
    }
    while (col<3)
    {
        col++;
        moves++;
    }
    cout<<moves;
    
    
    
    
    
    




return 0;}