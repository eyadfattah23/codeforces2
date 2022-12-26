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

int main(){
    fastio();
    string a,b;
    cin >> a>>b;

    if (a == b)
    {
        cout<<0;
        return 0;
    }
    
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    
    if (a == b)
    {
        cout<<0;
        return 0;
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] > b[i])
        {
            cout<<1;
            break;
        }
        else if (a[i] < b[i])
        {
            cout<<-1;
            break;
        }
        
    }
    


return 0;}