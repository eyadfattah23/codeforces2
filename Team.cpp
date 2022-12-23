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
    unsigned int n,probs=0;
    cin >> n;
    bool p , v ,t;
    for (int i = 0; i < n; i++)
    {
        cin>>p>>v>>t;
        if(p+v+t >=2){
            probs++;
        }
    }
    
    cout<<probs<<endl;


return 0;}