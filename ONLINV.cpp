#include<bits/stdc++.h>
#define endl "\n"
#define all(v) v.begin(), v.end()
#define int long long
#define getbit(x,y) (((x)>>(y))&1)
#define getoff(x,y) ((x)^(1<<(y)))
#define bp __builtin_popcount
#pragma GCC optimize ("Ofast","unroll-loops")
#pragma GCC target ("avx2")
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define mize(a, b) a = min(a, b)
#define FOR(i, a, b) for (int i = a, _n = b; i <= _n; i++)
#define ii pair<int, int>
#define fi first
#define se second

using namespace std;

const int N = 1e5 + 10, M = 5e6 + 10;

int a[N], inv[N], it[N], cost[N];

struct node {
    int left, right, cnt;
};

struct segment {
    int cost, left, right;
    bool operator<(const segment& other) const {
        return cost < other.cost;  // for max-heap behavior
    }
};

node T[M];

int cnt = 0;

void up(int s, int l, int r, int pos, int val) {
    if (l == r) {
        T[s].cnt += val;
        return;
    }
    int mid = l + r >> 1;
    if (pos <= mid) {
        T[++cnt] = T[T[s].left];
        T[s].left = cnt;
        up(T[s].left, l, mid, pos, val);
    } else {
        T[++cnt] = T[T[s].right];
        T[s].right = cnt;
        up(T[s].right, mid + 1, r, pos, val);
    }
    T[s].cnt = T[T[s].left].cnt + T[T[s].right].cnt;
}

int get(int s, int l, int r, int from, int to) {
    if (l > to || r < from) return 0;
    if (from <= l && r <= to) return T[s].cnt;
    int mid = l + r >> 1;
    return get(T[s].left, l, mid, from, to) + get(T[s].right, mid + 1, r, from, to);
}

int32_t main() {
   fast
   //freopen("ONLIV.inp","r",stdin);
  //freopen("ONLIV.out","w",stdout);

    int n; cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = 1; i <= n; i++) {
        inv[i] = inv[i - 1];
        it[i] = ++cnt;
        T[it[i]] = T[it[i - 1]];
        inv[i] += get(it[i], 1, n, a[i] + 1, n);
        up(it[i], 1, n, a[i], 1);
    }

    priority_queue<segment> q;
    q.push({cost[1] = inv[n], 1, n});

    set<int> s;
    s.insert(0);
    s.insert(n + 1);

    int ans = 0;

    for(int loop = 1; loop <= n; loop++) {
        int x; cin >> x;
        x ^= ans;
        int to = *s.upper_bound(x) - 1;
        int from = *--s.upper_bound(x) + 1;
        s.insert(x);

        int old = cost[from];
        int inv_x = 0;
        if (x + 1 <= to) inv_x += get(it[to], 1, n, 1, a[x] - 1) - get(it[x], 1, n, 1, a[x] - 1);
        if (from < x) inv_x += get(it[x - 1], 1, n, a[x] + 1, n) - get(it[from - 1], 1, n, a[x] + 1, n);

        if (x - from <= to - x) {
            int il = inv[x - 1] - inv[from - 1];
            int c = 0;
            for(int j = from; j < x; j++) {
                il -= get(it[from - 1], 1, n, a[j] + 1, n);
                c += get(it[to], 1, n, 1, a[j] - 1) - get(it[x], 1, n, 1, a[j] - 1);
            }

            if (from < x) {
                cost[from] = il;
                q.push({il, from, x - 1});
            }
            if (x + 1 <= to) {
                int ir = old - il - inv_x - c;
                cost[x + 1] = ir;
                q.push({ir, x + 1, to});
            }
        } else {
            int ir = inv[to] - inv[x];
            int c = 0;
            for(int j = x + 1; j <= to; j++) {
                ir -= get(it[x], 1, n, a[j] + 1, n);
                c += get(it[x - 1], 1, n, a[j] + 1, n) - get(it[from - 1], 1, n, a[j] + 1, n);
            }

            if (from < x) {
                int il = old - ir - inv_x - c;
                cost[from] = il;
                q.push({il, from, x - 1});
            }
            if (x + 1 <= to) {
                cost[x + 1] = ir;
                q.push({ir, x + 1, to});
            }
        }

        while (!q.empty()) {
            segment top_seg = q.top();
            if (*s.lower_bound(top_seg.left) <= top_seg.right) q.pop();
            else break;
        }

        ans = q.empty() ? 0 : q.top().cost;
        cout << ans << " ";
    }
}
    