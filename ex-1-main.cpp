#include <iostream>
using namespace std;
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏��

/* --------------------------------------------------------------- */
/*
* nth_prime
*
* �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
* �f����Ԃ��B
*
* TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
* �t�@�C�����쐬����B
*/
/* -------------------------------------------------------------- */

bool is_prime(int num) {
	int count = 0;
	if (num == 1) {
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
	int num_add = a;
	int current = 0;
	int count = 0;
	while (num_add<=CPP2_PRIME_UPPER_LIMIT) {
		if (is_prime(current)) {
			count++;
			if (count == n) {
				return current;
			}
			current += d;
		}
		std::cout << num_add << std::endl;
		num_add += d;
}
	//return -1;
}

int main() {
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	std::cout<<nth_prime(367, 186, 151)<<std::endl;
	std::cout << nth_prime(179, 10, 203) << std::endl;
	std::cout << nth_prime(271, 37, 39) << std::endl;
	std::cout << nth_prime(103, 230, 1) << std::endl;
	std::cout << nth_prime(27, 104, 185) << std::endl;
	std::cout << nth_prime(253, 50, 85) << std::endl;
	std::cout << nth_prime(1, 1, 1) << std::endl;
	std::cout << nth_prime(9075, 337, 210) << std::endl;
	std::cout << nth_prime(307, 24, 79) << std::endl;
	std::cout << nth_prime(331, 221, 177) << std::endl;
	std::cout << nth_prime(259, 170, 40) << std::endl;
	std::cout << nth_prime(269, 58, 102) << std::endl;
	/*std::cout << is_prime(1) << std::endl;
	std::cout << is_prime(5) << std::endl;
	std::cout << is_prime(6) << std::endl;
	std::cout << is_prime(7) << std::endl;
	std::cout << is_prime(8) << std::endl;
	std::cout << is_prime(13) << std::endl;
	*/
	return 0;
}