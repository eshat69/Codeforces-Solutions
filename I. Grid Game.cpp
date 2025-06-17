#include<bits/stdc++.h>
using namespace std;
int spojna[12][12];
int tab[12][12];
vector<pair<int,int>>V[102];
vector<int>D[102];
int match[102];
int zaj[102];
bool CzyBylo[12][12];
int n,m;
int H=0;
bool DFS(int v)
{
    if(zaj[v]==H){return 0;}
    zaj[v]=H;
    for(int som : D[v])
    {
        if(match[som]==-1||DFS(match[som]))
        {
            match[v]=som;
            match[som]=v;
            return 1;
        }
    }
    return 0;
}
void TurboMatching()
{
    for(int i=1;i<=n*m;i++)
    {
        match[i]=-1;
    }
    for(int i=1;i<=n*m;i++)
    {
        if(match[i]==-1)
        {
            H++;
            DFS(i);
        }
    }
}
int GetNumer(int y, int x)
{
    return (y-1)*m+x;

}
pair<int,int>GetWsp(int u)
{
    return {(u-1)/m+1,(u-1)%m+1};

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int _T;
cin>>_T;
for(int _I=1;_I<=_T;_I++)
{
    cin>>n>>m;
    for(int i=1;i<=n*m;i++)
    {

        D[i].clear();
        V[i].clear();

    }
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=m;j++)
        {
            spojna[i][j]=0;
            tab[i][j]=0;
            CzyBylo[i][j]=0;
        }
    }
    int h=0,h2=n*m-11;
    if(n%2==1&&m%2==1)
    {
        h++;
        spojna[n][m]=h;
        tab[n][m]=n*m;
        h2=1;
    }
    else
    {
        h++;
        spojna[1][1]=h;
        spojna[2][1]=h;
        spojna[2][2]=h;
        spojna[3][1]=h;
        tab[1][1]=h2++;
        tab[2][2]=h2++;
        tab[3][1]=h2++;
        tab[2][1]=1;
        h++;
        spojna[1][2]=h;
        spojna[1][3]=h;
        spojna[1][4]=h;
        spojna[2][3]=h;
        tab[1][2]=h2++;
        tab[1][4]=h2++;
        tab[2][3]=h2++;
        tab[1][3]=2;
        if(n%2==0&&m%2==0)
        {
            h++;
            spojna[(n+1)-1][(m+1)-1]=h;
            spojna[(n+1)-2][(m+1)-1]=h;
            spojna[(n+1)-2][(m+1)-2]=h;
            spojna[(n+1)-3][(m+1)-1]=h;
            tab[(n+1)-1][(m+1)-1]=h2++;
            tab[(n+1)-2][(m+1)-2]=h2++;
            tab[(n+1)-3][(m+1)-1]=h2++;
            tab[(n+1)-2][(m+1)-1]=3;
            h++;
            spojna[(n+1)-1][(m+1)-2]=h;
            spojna[(n+1)-1][(m+1)-3]=h;
            spojna[(n+1)-1][(m+1)-4]=h;
            spojna[(n+1)-2][(m+1)-3]=h;
            tab[(n+1)-1][(m+1)-2]=h2++;
            tab[(n+1)-1][(m+1)-4]=h2++;
            tab[(n+1)-2][(m+1)-3]=h2++;
            tab[(n+1)-1][(m+1)-3]=4;
        }
        else if(n%2==0&&m%2==1)
        {

            h++;
            spojna[1][(m+1)-1]=h;
            spojna[2][(m+1)-1]=h;
            spojna[2][(m+1)-2]=h;
            spojna[3][(m+1)-1]=h;
            tab[1][(m+1)-1]=h2++;
            tab[2][(m+1)-2]=h2++;
            tab[3][(m+1)-1]=h2++;
            tab[2][(m+1)-1]=3;
            h++;

            spojna[(n+1)-1][1]=h;
            spojna[(n+1)-1][2]=h;
            spojna[(n+1)-1][3]=h;
            spojna[(n+1)-2][2]=h;
            tab[(n+1)-1][1]=h2++;
            tab[(n+1)-1][3]=h2++;
            tab[(n+1)-2][2]=h2++;
            tab[(n+1)-1][2]=4;

        }
        else if(n%2==1&&m%2==0)
        {

            h++;
            spojna[2][(m+1)-1]=h;
            spojna[3][(m+1)-1]=h;
            spojna[3][(m+1)-2]=h;
            spojna[4][(m+1)-1]=h;
            tab[2][(m+1)-1]=h2++;
            tab[3][(m+1)-2]=h2++;
            tab[4][(m+1)-1]=h2++;
            tab[3][(m+1)-1]=3;
            h++;

            spojna[(n+1)-1][(m+1)-1]=h;
            spojna[(n+1)-1][(m+1)-2]=h;
            spojna[(n+1)-1][(m+1)-3]=h;
            spojna[(n+1)-2][(m+1)-2]=h;
            tab[(n+1)-1][(m+1)-1]=h2++;
            tab[(n+1)-1][(m+1)-3]=h2++;
            tab[(n+1)-2][(m+1)-2]=h2++;
            tab[(n+1)-1][(m+1)-2]=4;

        }
        h2=5;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            vector<pair<int,int>>Som={{i+1,j},{i,j+1}};
            for(auto[y,x] : Som)
            {

                if(y<1||n<y||x<1||m<x||tab[i][j]!=0||tab[y][x]!=0){continue;}
                int a=GetNumer(i,j);
                int b=GetNumer(y,x);
                D[a].push_back(b);
                D[b].push_back(a);

            }

        }

    }

    TurboMatching();
    for(int i=1;i<=n*m;i++)
    {
        if(match[i]==-1){continue;}
        int a=i;
        int b=match[i];
        if(a<b)
        {
            int y1,x1,y2,x2;
            tie(y1,x1)=GetWsp(a);
            tie(y2,x2)=GetWsp(b);
            h++;

            spojna[y1][x1]=h;
            spojna[y2][x2]=h;
            tab[y1][x1]=h2++;
            tab[y2][x2]=h2++;
        }

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            V[spojna[i][j]].push_back({i,j});

        }

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<tab[i][j]<<" ";

        }
        cout<<endl;
    }
    h=0;
    while(h<n*m)
    {

        int y,x;
        cin>>y>>x;
        h++;
        CzyBylo[y][x]=1;
        if(h==n*m){break;}
        int s=spojna[y][x];
        pair<int,pair<int,int>>Minn={INT_MAX,{INT_MAX,INT_MAX}};
        if(n%2==1&&m%2==1)

        {
            vector<pair<int,int>>Som;
            for(int y2=1;y2<=n;y2++)
            {

                for(int x2=1;x2<=m;x2++)

                {

                    if(CzyBylo[y2][x2]==0){continue;}
                    Som={{y2-1,x2},{y2,x2-1},{y2+1,x2},{y2,x2+1}};
                    for(auto[y3,x3] : Som)

                    {

                        if(y3<1||n<y3||x3<1||m<x3){continue;}
                        if(CzyBylo[y3][x3]==0)

                        {

                            Minn=min(Minn,{tab[y3][x3],{y3,x3}});

                        }

                    }

                }

            }
        }


        else
        {
            for(auto[y2,x2] : V[s])
            {
                if(CzyBylo[y2][x2]==0){continue;}
                vector<pair<int,int>>Som={{y2-1,x2},{y2,x2-1},{y2+1,x2},{y2,x2+1}};
                for(auto[y3,x3] : Som)
                {
                    if(y3<1||n<y3||x3<1||m<x3){continue;}
                    if(CzyBylo[y3][x3]==0&&spojna[y3][x3]==s)
                    {
                        Minn=min(Minn,{tab[y3][x3],{y3,x3}});
                    }
                }
            }
        }
        y=Minn.second.first;
        x=Minn.second.second;
        CzyBylo[y][x]=1;
        h++;
        cout<<y<<" "<<x<<endl;
    }
}
/*
 1. Grid Initialization
Arrays like spojna, tab, CzyBylo reset at each test case.

Variables:

spojna[i][j]: Component label of cell (i, j)

tab[i][j]: Output value for the cell

CzyBylo[i][j]: Visited status

 2. Special Case Handling
Handles configurations for:

Odd x Odd

Even x Even

Even x Odd

Odd x Even

This initializes a fixed set of tiles (pre-colored or grouped). These depend on corners or borders.

 3. Graph Building
For every cell (i, j), it creates graph edges to adjacent right and down cells (i+1, j) and (i, j+1), if neither is part of the fixed layout.

This graph is stored in D[u] where u = GetNumer(i,j).

 4. TurboMatching()
A custom name for the maximum matching algorithm, matching grid cells in such a way that they can be grouped in pairs.

Uses DFS to find augmenting paths and builds up match[i] array.

 5. Labeling Pairs
After matching, each matched pair gets:

A new spojna group number.

A unique value in tab.

 6. Output tab Grid
Prints the entire tab grid with unique integers for visualization or further input use.

 7. Simulation with User Input
Reads n*m clicks (first is given, the rest are auto-generated).

On each step:

Marks the cell visited (CzyBylo[y][x] = 1)

Then looks for a neighboring unvisited cell in the same group (or globally for odd x odd grid).

Chooses the one with the smallest tab value.

*/
    return 0;
}
