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
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	std::cout<<"����: a:367,d:186,n:151 �o��: "<<nth_prime(367, 186, 151)<<std::endl;
	std::cout <<"����: a:179,d:10,n:203 �o��: "<< nth_prime(179, 10, 203) << std::endl;
	std::cout <<"����: a:271,d:37,n:39 �o��: "<<nth_prime(271, 37, 39) << std::endl;
	std::cout <<"����: a:103,d:230,n:1 �o��: "<<nth_prime(103, 230, 1) << std::endl;
	std::cout <<"����: a:27,d:104,n:185 �o��: " << nth_prime(27, 104, 185) << std::endl;
	std::cout <<"����: a:253,d:50,n:85 �o��: " << nth_prime(253, 50, 85) << std::endl;
	std::cout <<"����: a:1,d:1,n:1 �o��: " << nth_prime(1, 1, 1) << std::endl;
	std::cout <<"����: a:9075,d:337,n:210 �o��: " << nth_prime(9075, 337, 210) << std::endl;
	std::cout <<"����: a:307,d:24,n:79 �o��: "<< nth_prime(307, 24, 79) << std::endl;
	std::cout <<"����: a:331,d:221,n:177 �o��: "<< nth_prime(331, 221, 177) << std::endl;
	std::cout <<"����: a:259,d:170,n:40 �o��: "<< nth_prime(259, 170, 40) << std::endl;
	std::cout <<"����: a:269,d:58,n:102 �o��: " << nth_prime(269, 58, 102) << std::endl;
	return 0;
}