#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("test.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int m,n;
    scanf("%d%d",&m,&n);
    map<int,int> valtoid;
    map<int,int> idtoval;
    int pre[n];
    for(int i=0;i<n;++i)
    {
       int a;
       scanf("%d",&a);
       valtoid[a] = i+1;
       idtoval[i+1] = a;
    }
    for(int i=0;i<n;++i)
    {
       int a;
       scanf("%d",&a);
       pre[i] = valtoid[a];
    }
    while(m--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int aexits=valtoid[a],bexits=valtoid[b];
        if(!aexits&&!bexits) printf("ERROR: %d and %d are not found.\n",a,b);
        else if(!aexits||!bexits) printf("ERROR: %d is not found.\n",!aexits?a:b);
        else
        {
            for(int i=0;i<n;++i)
            {
                int ia = valtoid[a],ib = valtoid[b];
                if(pre[i]<ia&&pre[i]>ib||pre[i]<ib&&pre[i]>ia)
                {
                    printf("LCA of %d and %d is %d.\n",a,b,idtoval[pre[i]]);
                    break;
                }
                else if(pre[i]==ia||pre[i]==ib)
                {
                    printf("%d is an ancestor of %d.\n",pre[i]==ia?a:b,pre[i]==ia?b:a);
                    break;
                }
            }
        }
    }
    return 0;
}
