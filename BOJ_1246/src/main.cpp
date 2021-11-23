#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> p(M);
    for (int i = 0; i < M; ++i)
    {
        int x;
        cin >> x;

        p[i] = x;
    }

    sort(p.begin(), p.end());

    ll nowP{ 0 };
    ll max{ 0 };
    for (int i = 0; i < M; ++i)
    {
        ll sum = p[i] * (min(static_cast<ll>(M) - i, static_cast<ll>(N)));
        if (max < sum) {
            nowP = p[i];
            max = sum;
        }
    }

    cout << nowP << ' ' << max;

    return 0;
}