#include <bits/stdc++.h>

int main() {
    std::string s;
    std::cin >> s;

    std::deque<char> q;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == 'B') {
            if (q.size() != 0) {
                q.pop_back();
            }
        } else {
            q.push_back(s[i]);
        }
    }

    std::string str(q.begin(),  q.end());
    std::cout << str << std::endl;

    return 0;
}
