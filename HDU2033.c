#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int h[100][3],m[100][3],s[100][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<=2;j++)
        {
            h[i][j]=0;
            m[i][j]=0;
            s[i][j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d%d%d",&h[i][j],&m[i][j],&s[i][j]);
        }
        s[i][2]=(s[i][0]+s[i][1])%60;
        m[i][2]=(m[i][0]+m[i][1]+(s[i][0]+s[i][1])/60)%60;
        h[i][2]=h[i][0]+h[i][1]+(m[i][0]+m[i][1]+(s[i][0]+s[i][1])/60)/60;
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d %d\n",h[i][2],m[i][2],s[i][2]);
    }
    return 0;
}