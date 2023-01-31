#include <cmath>
#include <iostream>
#include <functional>
#include <vector>

int main()
{
	double angles[4]{ 30 * 3.1415926 / 180, 60 * 3.1415926 / 180, 90 * 3.1415926 / 180};
	std::cout << "[Входные данные]: ";
	for(const auto & angle : angles)
		std::cout << angle * 180 / 3.1415926  << " * 3.1415926 / 180, ";
	std::cout << "\n";

	auto psin = [](double angle) {
		std::cout << "sin : " << sin(angle) << " ";
	};
	auto pcos = [](double angle) {
		std::cout << "cos : " << cos(angle) << " ";
	};

	std::vector<std::function<void(const double)>> functions = { psin, pcos };

	//auto ptan = [](double angle) {
	//	std::cout << "tan : " << tan(angle) << " ";
	//};
	//functions.push_back(ptan);

	std::cout << "[Выходные данные] : \n";
	for (const auto& angle : angles) {
		std::cout << angle << ": ";
		for (const auto& function : functions)
			function(angle);
		std::cout << std::endl;
	}
}
