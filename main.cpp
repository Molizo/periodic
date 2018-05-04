#include <iostream>

using namespace std;

int main()
{int n,p=1;bool fg=false;
    cin>>n;int v[n];
    for(int i=0;i<n;i++)    cin>>v[i];
    while(true)
    {
        for(int i=0;i<n-p-1;i++)
        {
            if(v[i]==v[i+p] && v[i+1]==v[i+p+1])
            {
                fg=true;
                break;
            }
        }
        if(fg==true)
            break;
        p++;
    }
    cout<<p;
    return 0;
}
