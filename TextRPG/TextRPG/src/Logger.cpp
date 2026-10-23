#include "Logger.h"
#include <Windows.h>
#include "Core/Color.h"
#include <print>
#include <iostream>
void Logger::Log(const std::string_view Message)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, GREEN);
	std::cout << "LOG: " << Message << std::endl;
	SetConsoleTextAttribute(hConsole, WHITE);
}

void Logger::Error(const std::string_view Message, const std::source_location SourceLocation)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, RED);
	std::print("ERROR: ");
	std::cout << Message << " - " << " File: " << SourceLocation.file_name() << " FUNC: " << SourceLocation.function_name() << " LINE: " << SourceLocation.line() << std::endl;
	SetConsoleTextAttribute(hConsole, WHITE);
}
