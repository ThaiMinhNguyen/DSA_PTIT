#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int c[N][N], f[N][N], trace[N];
int n, m, s, t;

bool bfs() {
    memset(trace, -1, sizeof(trace));
    queue<int> q;
    q.push(s);
    trace[s] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v = 1; v <= n; v++) {
            if (trace[v] == -1 && c[u][v] - f[u][v] > 0) {
                trace[v] = u;
                if (v == t) {
                    return true;
                }
                q.push(v);
            }
        }
    }
    return false;
}

int maxflow() {
    int ans = 0;
    while (bfs()) {
        int delta = INT_MAX;
        for (int v = t; v != s; v = trace[v]) {
            int u = trace[v];
            delta = min(delta, c[u][v] - f[u][v]);
        }
        for (int v = t; v != s; v = trace[v]) {
            int u = trace[v];
            f[u][v] += delta;
            f[v][u] -= delta;
        }
        ans += delta;
    }
    return ans;
}

int main() {
    ifstream inp("DT.INP");
    inp >> n >> s >> t;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
        	inp >> c[i][j];
		}
    }
    inp.close();

    int max_flow = maxflow();

    ofstream out("DT.OUT");
    out << max_flow << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            out << f[i][j] << " ";
        }
        out << endl;
    }
    out.close();

    return 0;
}
