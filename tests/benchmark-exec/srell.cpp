#include "common.hpp"

int main (int argc, char ** argv)
{
	auto re = srell::regex(PATTERN);
	
	benchmark(argc, argv, "srell", "#d481ff", [&] (std::string_view line) { 
		return srell::regex_search(line.begin(), line.end(), re);
	});
}
