/*
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(void) {
	string input;
	char s; // ���⼭ 's'�� ���ڸ� ���� �����̹Ƿ� char Ÿ������ ����Ǿ�� �մϴ�.
	int n;

	cin >> input >> n; // input�� ���� �Է�

	int result = 0; // �迭 'num'�� ������� �ʱ� ������ 'int num[10000] = {};'�� �����߽��ϴ�.

	for (auto i = 0u; i < input.size(); i++) { // �ݺ����� 0���� �����ϵ��� �����߽��ϴ�.
		s = input[i]; // ���ڿ����� �� ���ڸ� �����Ͽ� 's'�� �����մϴ�.

		int num; // 'num' ������ �߰��߽��ϴ�.

		if (s >= '0' && s <= '9') {
			num = s - '0'; // ���ڸ� ���ڷ� ��ȯ
		}
		else if (s >= 'A' && s <= 'Z') {
			num = s - 'A' + 10; // ���ڸ� 10������ ��ȯ
		}
		else {
			cout << "Invalid character in input." << endl;
			return 1; // ���α׷� ����
		}

		num *= pow(n, input.size() - 1 - i); // �ش� ������ ���� ��ȯ

		result += num; // ���� ���Ѵ�
	}

	cout << result;

	return 0;
}
*/
/*
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{
	char m[255];
	int n;
	scanf("%s %d", &m, &n);

	printf("%d\n", strtol(m, NULL, n));

	//strtol �Լ��� ����ϸ� �������� ǥ��� ���ڿ��� ������ ��ȯ�����ش�.
	//strtol �Լ��� stdlib.h ��� ���Ͽ� ����Ǿ� �ִ�.
	
	//strtol(���ڿ�, ��������, ����); ���� ���ȴ�.
	
	return 0;
}
*/