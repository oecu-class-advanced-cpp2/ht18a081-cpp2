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
	return 0;
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
}