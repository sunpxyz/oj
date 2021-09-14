// �ֽ�����-��˿���
//
// 2019/10/14

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int index(vector<int> &ivec, int val) {
	int ret = -1;
	for (int i = 0; i < ivec.size(); ++i) {
		if (ivec[i] == val) {
			ret = i;
			break;
		}
	}

	return ret;
}


int main()
{
	int tmp;
	vector<int> ivec;
	while (cin >> tmp) {
		ivec.push_back(tmp);
	}

	vector<int> rvec(ivec);
	sort(rvec.begin(), rvec.end());

	cout << "[";
	int idx;
	for (int i = 0; i < ivec.size(); ++i) {
		idx = index(rvec, ivec[i]);

		if (i) {
			cout << ", ";
		}
		if (idx == ivec.size()-1) {
			cout << "\'��\'";
		} else if (idx == ivec.size()-2) {
			cout << "\'��\'";
		} else if (idx == ivec.size()-3) {
			cout << "\'ͭ\'";
		} else {
			cout << "\'" << ivec.size()-idx << "\'";
		}
	}
	cout << "]" << endl;

	return 0;
}

/*
87 33 29 99 10 55 88 63 71 43

['ͭ', '8', '9', '��', '10', '6', '��', '5', '4', '7']

 */
