#pragma once
#include <string_view>
#include <source_location>

#define TRPG_LOG(x) Logger::Log(x);
#define TRPG_ERROR(x) Logger::Error(x);

class Logger {
public:
	Logger() {};
	~Logger() = default;

	static void Log(const std::string_view Message);
	static void Error(const std::string_view Message, const std::source_location SourceLocation = std::source_location::current());
};