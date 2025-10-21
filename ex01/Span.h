#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>

class Span {
private:
    unsigned int _N;
    std::vector<int> _numbers;

public:
    // Constructors
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    // Core methods
    void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;

    // Optional helper for testing (not required)
    void print() const;
};

#endif