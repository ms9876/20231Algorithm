#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

queue<int> q;
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (str == "push") {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (str == "pop") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (str == "size") {
            cout << q.size() << '\n';
        }
        else if (str == "empty") {
            cout << q.empty() << '\n';
        }
        else if (str == "front") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.front() << '\n';
            }
        }
        else if (str == "back") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.back() << '\n';
            }
        }
    }
}

#pragma region º¤ÅÍ ±Ùµ¥ ¾È µÊ
//class Queue {
//    vector<int> data;
//    int frontidx;
//    int rear;
//public:
//    Queue() : frontidx(0), rear(0) {}
//
//    void push(int x) {
//        data.push_back(x);
//        rear++;
//    }
//
//    int pop() {
//        if (empty()) {
//            return -1;
//        }
//        int a = data[++frontidx];
//        return a;
//    }
//    int size() {
//        return rear - frontidx;
//    }
//
//    int empty() {
//        return frontidx == rear;
//    }
//
//    int front() {
//        if (empty()) {
//            return -1;
//        }
//        return data[frontidx];
//    }
//
//    int back() {
//        if (empty()) {
//            return -1;
//        }
//        return data[rear - 1];
//    }
//};
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int N;
//    cin >> N;
//
//    Queue queue;
//
//    for (int i = 0; i < N; i++) {
//        string str;
//        cin >> str;
//
//        if (str == "push") {
//            int x;
//            cin >> x;
//            queue.push(x);
//        }
//        else if (str == "pop") {
//            cout << queue.pop() << '\n';
//        }
//        else if (str == "size") {
//            cout << queue.size() << '\n';
//        }
//        else if (str == "empty") {
//            cout << queue.empty() << '\n';
//        }
//        else if (str == "front") {
//            cout << queue.front() << '\n';
//        }
//        else if (str == "back") {
//            cout << queue.back() << '\n';
//        }
//    }
//}
#pragma endregion

#pragma region µÇ´Â º¤ÅÍ
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    vector<int>myqueue;
//    int n;
//    string str;
//    cin >> n;
//    cin.ignore();
//    while (n--)
//    {
//        getline(cin, str);
//        if (str.substr(0, 4) == "push")
//        {
//            myqueue.push_back(stoi(str.substr(5)));
//        }
//        else if (str == "front")
//        {
//            if (myqueue.empty()) cout << -1 << '\n';
//            else    cout << myqueue.front() << '\n';
//
//        }
//        else if (str == "back")
//        {
//            if (myqueue.empty()) cout << -1 << '\n';
//            else    cout << myqueue.back() << '\n';
//        }
//        else if (str == "size")
//        {
//            cout << myqueue.size() << '\n';
//        }
//        else if (str == "empty")
//        {
//            cout << myqueue.empty() << '\n';
//        }
//        else if (str == "pop")
//        {
//            if (myqueue.empty()) cout << -1 << '\n';
//            else
//            {
//                myqueue.erase(myqueue.begin());
//            }
//        }
//
//    }
//}
#pragma endregion

