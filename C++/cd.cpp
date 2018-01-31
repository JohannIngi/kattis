#include <iostream>
#include <unordered_set>

void cd(int N, int M)
{
    int k = 0, n = 0;
    std::unordered_set<int> mySet;
    for (int i = 0; i < N; i++) {
        std::cin >> n;
        mySet.insert(n);
    }
    for (int i = 0; i < N; i++) {
        std::cin >> n;
        if (mySet.find(n) != mySet.end()) {
            k++;
        }
    }
    std::cout << k << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    while (true) {
        int N = 0, M = 0;
        std::cin >> N >> M;
        if (N == 0 && M == 0) {
            break;
        }
        else {
            cd(N, M);
        }
    }
    return 0;
}