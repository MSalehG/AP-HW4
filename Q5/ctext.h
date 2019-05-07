#ifndef CTEXT_H
#define CTEXT_H

#include <cstring>


class CText {
public:
	std::string text;
	CText(std::string input) { text = input; }
	std::string getText() { return text; }
};

#endif