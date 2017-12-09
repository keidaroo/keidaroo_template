P dat[114514];
void init(ll n_) {
    n = 1;
    while (n < n_) { n *= 2; }
    REP(i, 2 * n - 1) {
        dat[i] = P(INF,-1);//変えよう
    }
}
void update(ll k, P a) {
    k += n - 1;
    dat[k]= a;
    while (k > 0) {
        k = (k - 1) / 2;
        //k*2+1,k*2+2
        dat[k] = P(min(dat[k*2+1].first,dat[k*2+2].first),max(dat[k*2+1].second,dat[k*2+2].second));
    }
}
P query(ll a,ll b,ll k, ll l,ll r){
    if(r<=a||b<=l){return P(INF,-1);}
    if(a<=l&&r<=b){return dat[k];}
    else{
        P vl=query(a,b,k*2+1,l,(l+r)/2);
        P vr=query(a,b,k*2+2,(l+r)/2,r);
        return P(min(vl.first,vr.first),max(vl.second,vr.second));
    }
}
