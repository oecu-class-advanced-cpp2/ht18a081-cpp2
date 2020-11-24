#include <iostream>
using namespace std;
#define CPP2_PRIME_UPPER_LIMIT 100 //�T������l�̏��

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
		count++;
	}
	if (count == num) {
		return true;
	}
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int num_add = a;
	while (num_add<=CPP2_PRIME_UPPER_LIMIT) {
		std::cout << num_add << std::endl;
		num_add += d;
}
	return -1;
}

int main() {
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	nth_prime(2, 3, 100);
	std::cout << is_prime(1) << std::endl;
	std::cout << is_prime(5) << std::endl;
	std::cout << is_prime(6) << std::endl;
	std::cout << is_prime(7) << std::endl;
	std::cout << is_prime(8) << std::endl;
	std::cout << is_prime(13) << std::endl;
}