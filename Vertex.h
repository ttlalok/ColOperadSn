#pragma once
#include <array>
#include <memory>

constexpr int mockArity = 2;

using tVertexPtr = std::shared_ptr<tVertex>;
using tInputs = std::array<tVertexPtr, mockArity>;

class tVertex
{
public:
private:
    tVertexPtr Parent = nullptr;
    tInputs Children;

};
