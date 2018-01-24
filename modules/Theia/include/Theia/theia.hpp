#pragma once
#include <iostream>
#include <string>


namespace Theia{
	class Theia{
	public:
		// Theia();
		// ~Theia();
		std::string removeJson(std::string, bool);
		std::string retreiveData(std::string);
	  void mapStatsToFile(std::string);
		void output();

	private:
		static size_t curlWriteCallback(void*, size_t, size_t, std::string*);
	};
}
