#pragma region 정답 코드
#include<iostream>
#include <string>
#include<deque>
using namespace std;

int main()
{
	string order, nums, num;
	int t, numsize;
	bool isError = false, isReverse = false;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		isError = isReverse = false;
		deque<int> deq;
		cin >> order >> numsize >> nums;

		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] >= '0' && nums[i] <= '9') {
				num += nums[i];
			}
			else if (nums[i] == ',' || nums[i] == ']') {
				if (!num.empty()) {
					deq.push_back(stoi(num));
					num = "";
				}
			}
		}

		for (int j = 0; j < order.size(); ++j)
		{
			if (order[j] == 'R')
				isReverse = !isReverse;
			else
			{
				if (deq.empty())
				{
					isError = true;
					break;
				}
				if (!isReverse)
					deq.pop_front();
				else
					deq.pop_back();
			}
		}

		if (isError)
			cout << "error\n";
		else if (deq.empty())
			cout << "[]\n";
		else if (!isReverse)
		{
			cout << '[' << deq.front();
			deq.pop_front();
			while (!deq.empty())
			{
				cout << ',' << deq.front();
				deq.pop_front();
			}
			cout << "]\n";
		}
		else
		{
			cout << '[' << deq.back();
			deq.pop_back();
			while (!deq.empty())
			{
				cout << ',' << deq.back();
				deq.pop_back();
			}
			cout << "]\n";
		}
	}
}
#pragma endregion

#pragma region 내 코드(런타임 에러)
//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int t, numSize;
//
//	string p, num, n;
//	bool isReversed = false, isError = false;
//
//	cin >> t;
//
//	for (int i = 0; i < t; i++)
//	{
//		isError = isReversed = false;
//		deque<int> deq;
//		cin >> p >> numSize >> num;
//
//		for (int i = 0; i < num.size(); i++)
//		{
//			if (num[i] >= '0' && num[i] <= '9') {
//				n += num[i];
//			}
//			else if (num[i] == ',' || num[i] == ']') {
//				if (!num.empty()) {
//
//					deq.push_back(stoi(n));
//					n = "";
//				}
//			}
//		}
//		for (int j = 0; j < p.size(); j++)
//		{
//			if (p[j] == 'R') {
//				isReversed = !isReversed;
//			}
//			else if (p[j] == 'D') {
//				if (deq.empty()) {
//					isError = true;
//					break;
//				}
//				if (!isReversed)
//					deq.pop_front();
//				else
//					deq.pop_back();
//			}
//		}
//
//		if (isError) {
//			cout << "error" << '\n';
//		}
//		else {
//			cout << '[';
//			if (isReversed) {
//				while (!deq.empty())
//				{
//					cout << deq.back();
//
//					deq.pop_back();
//					if (!deq.empty()) {
//						cout << ",";
//					}
//				}
//			}
//			else {
//				while (!deq.empty()) {
//					cout << deq.front();
//
//					deq.pop_front();
//					if (!deq.empty()) {
//						cout << ",";
//					}
//				}
//			}
//			cout << "]" << '\n';
//		}
//	}
//}
#pragma endregion


