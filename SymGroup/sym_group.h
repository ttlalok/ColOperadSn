#pragma once
#include <array>
#include <vector>
#include <iostream>
#include <algorithm>

constexpr int mockN = 3;

class tPerm
{
public:
    // TODO: ban copy and move constructors
    tPerm(std::vector<int> const& image) : N(image.size()), Image(image) {}

    void Print();

    int GetArity() const { return N; }
    int GetImageOf(int i) const { return Image[i]; }
    std::vector<int> GetWholeImage() const { return Image; }
    /*Composition of sigma and tau acts by first applying tau then sigma*/



    bool operator==(tPerm const& other) const
    {
        return Image == other.Image;
    }

private:
    int N;
    std::vector<int> Image;
};

tPerm Compose(tPerm const& sigma, tPerm const& tau);


template <int N>
class tSymGroup
{
public:
private:
};

