#include "Span.h"

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& other)
{
    *this = other;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other) {
        this->_N = other._N;
        this->_numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
    if (_numbers.size() >= _N)
        throw std::runtime_error("Span is full");
    _numbers.push_back(num);
}

int Span::shortestSpan() const
{
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    int shortest = sorted[1] - sorted[0];
    for (size_t i = 1; i < sorted.size() - 1; ++i)
    {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < shortest)
            shortest = diff;
    }
    return shortest;
}

int Span::longestSpan() const
{
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");

    std::vector<int>::const_iterator minIt = std::min_element(_numbers.begin(), _numbers.end());
    std::vector<int>::const_iterator maxIt = std::max_element(_numbers.begin(), _numbers.end());

    return *maxIt - *minIt;
}

void Span::print() const
{
    for (std::vector<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}
