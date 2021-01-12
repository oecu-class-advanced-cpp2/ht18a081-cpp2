#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

namespace cpp2 {
	/* --------------------------------------------------------------------- */
	/*
	mcxi
	mcxi 記法を解析するクラスです。
	*/
	/* --------------------------------------------------------------------- */
	class mcxi {
	public:
		mcxi(const std::string& s) : value_(0) {
			int digit = 0;
			for (auto pos = s.begin(); pos != s.end(); pos++) {

				if (*pos >= '2' && *pos <= '9') {
					digit = *pos - '0';
				}
				else {
					auto u = unit(*pos);
					value_ += std::max(digit, 1) * u;
					digit = 0;
				}
			}
		}
				/*
				//std::cout << *pos << std::endl;

				if (*pos == *"2") {
					value_ = 2;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"3") {
					value_ = 3;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"4") {
					value_ = 4;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"5") {
					value_ = 5;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"6") {
					value_ = 6;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"7") {
					value_ = 7;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"8") {
					value_ = 8;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"9") {
					value_ = 9;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"m") {
					value_ = 1000;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"c") {
					value_ = 100;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if (*pos == *"x") {
					value_ = 10;
					std::cout << *pos << ":" << value_ << std::endl;
				}
				else if(*pos == *"i"){
					value_ = 1;
					std::cout << *pos << ":" << value_ << std::endl;
				}
			}
		}
		*/

		mcxi operator +(const mcxi &r) {
			std::cout <<value_<<","<< r.value_ << std::endl;
			mcxi a = this->value_ + r.value_;
			return a;
		}
		mcxi(int value_) {
			this->value_ = value_;
		}

		std::string to_string() const{
			std::stringstream ss;

			int value_ = 2000;
			int q = value_ / 1000;
			if (q == 1) {
				ss << 'm';
			}
			if (q > 1) {
				ss << q;
				ss << 'm';
			}

			std::cout << ss.str() << std::endl;
			return ss.str();
		}

private:
	int unit(char c) {
		switch (c) {
		case 'm':
			return 1000;
		case 'c':
			return 100;
		case 'x':
			return 10;
		case 'i':
			return 1;
		}
	}
	private:
		int value_;
	};
} // namespace cpp2


int main() {
	std::string s("9m9c9x");
	auto pos = s.begin();
	std::cout << *pos - '0' << std::endl;
	int digit = *pos - '0';

	cpp2::mcxi a0("xi");
	cpp2::mcxi b0("x9i");
	cpp2::mcxi result0 = a0 + b0;
	std::cout << "3x" << " " << result0.to_string() << std::endl;

	cpp2::mcxi a1("i");
	cpp2::mcxi b1("9i");
	cpp2::mcxi result1 = a1 + b1;
	std::cout << "x" << " " << result1.to_string() << std::endl;

	cpp2::mcxi a2("c2x2i");
	cpp2::mcxi b2("4c8x8i");
	cpp2::mcxi result2 = a2 + b2;
	std::cout << "6cx" << " " << result2.to_string() << std::endl;

	cpp2::mcxi a3("m2ci");
	cpp2::mcxi b3("4m7c9x8i");
	cpp2::mcxi result3 = a3 + b3;
	std::cout << "5m9c9x9i" << " " << result3.to_string() << std::endl;

	cpp2::mcxi a4("9c9x9i");
	cpp2::mcxi b4("i");
	cpp2::mcxi result4 = a4 + b4;
	std::cout << "m" << " " << result4.to_string() << std::endl;

	cpp2::mcxi a5("i");
	cpp2::mcxi b5("9m9c9x8i");
	cpp2::mcxi result5 = a5 + b5;
	std::cout << "9m9c9x9i" << " " << result5.to_string() << std::endl;
	cpp2::mcxi a6("m");
	cpp2::mcxi b6("i");
	cpp2::mcxi result6 = a6 + b6;
	std::cout << "mi" << " " << result6.to_string() << std::endl;

	cpp2::mcxi a7("i");
	cpp2::mcxi b7("m");
	cpp2::mcxi result7 = a7 + b7;
	std::cout << "mi" << " " << result7.to_string() << std::endl;

	cpp2::mcxi a8("m9i");
	cpp2::mcxi b8("i");
	cpp2::mcxi result8 = a8 + b8;
	std::cout << "mx" << " " << result8.to_string() << std::endl;
	return 0;
}
