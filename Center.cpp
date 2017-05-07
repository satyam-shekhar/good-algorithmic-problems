    #include<bits/stdc++.h>
    #include<string>
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef pair<ll,ll > pii;
    typedef pair<long,pii > piii;
    typedef vector<long long >   VI;
    #define sc1(x) scanf("%lld",&x);
    #define sc2(x,y) scanf("%lld%lld",&x,&y);
    #define sc3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z);
    #define pb push_back
    #define mp make_pair
    #define ini(x,val) memset(x,val,sizeof(x));
    #define fs first
    #define sc second
    #define MOD 1000000007
    #define inf 999999999999999ll   //long long inf
    #define PI 3.1415926535897932384626

    #define gcd __gcd
    #define tr(contaner, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
    #define PrintCont(cont) {cout<<("\n----------------\n");\
    for(typeof(cont.begin()) it = cont.begin();it!=cont.end();++it) cout<<*it<<" ";cout<<("\n----------------\n");}
    #define all(v) v.begin(),v.end()
    #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

    #define debug(x) cout<<#x<<" :: "<<x<<"\n";
    #define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
    #define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";

    ll n;
    double x[100010],y[100010],w[100010];

    double fun(double lx,double ly)
    {
        double sum=0.0;
        for(int i=0;i<n;i++)
        {
            sum+=(max(abs(lx-x[i]),abs(ly-y[i]))*w[i]);
        }
        return sum;
    }

     double solve2(double tx)
    {      
        double low=-1000.00,high=1000.00;
        for(int i=0;i<100;i++)
        {
            double mid1,mid2;
            mid1=low+(high-low)/3;
            mid2=high-(high-low)/3;
            if(fun(tx,mid1)>fun(tx,mid2))
            {
                low=mid1;
            }
            else
            {
                high=mid2;
            }
        }
        return fun(tx,low);
    }

    double solve1()
    {      
        double low=-1000.00,high=1000.00;
        for(int i=0;i<100;i++)
        {
            double mid1,mid2;
            mid1=low+(high-low)/3;
            mid2=high-(high-low)/3;
            if(solve2(mid1)>solve2(mid2))
            {
                low=mid1;
            }
            else
            {
                high=mid2;
            }
        }
        return solve2(low);
    }

   

    int main()
    {
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
        ll t,cas=0,a[100010];
        cin>>t;
        while(t--)
        {
            cas++;
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cin>>x[i]>>y[i]>>w[i];
            }
            double ans=solve1();

            cout<<"Case #"<<cas<<": ";
            printf("%.8lf\n",ans);
        }
        return 0;
    }
