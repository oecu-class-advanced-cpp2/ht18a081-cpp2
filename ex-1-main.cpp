#include <iostream>
using namespace std;
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限

/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */
bool is_prime(int num) {
	int count = 0;
	if (num <= 1) {
		return false;
	}
	for (int a = 2;a <= num - 1;a++) {
		if (num % a == 0) {
			return false;
		}
	}
		return true;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int current = a;
	int count = 0;
	while (current<=CPP2_PRIME_UPPER_LIMIT) {
		if (is_prime(current)) {
			count++;
			if (count == n) {
				return current;
			}
		}
		current += d;
	}
}

int main() {
	// 以下、同様に、入出力例通りになるか確認せよ。
	std::cout<<"入力: a:367,d:186,n:151 出力: "<<nth_prime(367, 186, 151)<<std::endl;
	std::cout <<"入力: a:179,d:10,n:203 出力: "<< nth_prime(179, 10, 203) << std::endl;
	std::cout <<"入力: a:271,d:37,n:39 出力: "<<nth_prime(271, 37, 39) << std::endl;
	std::cout <<"入力: a:103,d:230,n:1 出力: "<<nth_prime(103, 230, 1) << std::endl;
	std::cout <<"入力: a:27,d:104,n:185 出力: " << nth_prime(27, 104, 185) << std::endl;
	std::cout <<"入力: a:253,d:50,n:85 出力: " << nth_prime(253, 50, 85) << std::endl;
	std::cout <<"入力: a:1,d:1,n:1 出力: " << nth_prime(1, 1, 1) << std::endl;
	std::cout <<"入力: a:9075,d:337,n:210 出力: " << nth_prime(9075, 337, 210) << std::endl;
	std::cout <<"入力: a:307,d:24,n:79 出力: "<< nth_prime(307, 24, 79) << std::endl;
	std::cout <<"入力: a:331,d:221,n:177 出力: "<< nth_prime(331, 221, 177) << std::endl;
	std::cout <<"入力: a:259,d:170,n:40 出力: "<< nth_prime(259, 170, 40) << std::endl;
	std::cout <<"入力: a:269,d:58,n:102 出力: " << nth_prime(269, 58, 102) << std::endl;
	return 0;
}