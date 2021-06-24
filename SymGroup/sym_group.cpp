#include "sym_group.h"

//tPerm::tPerm(std::vector<int> const& image) : N(image.size()), Image(image)
//{
//
//}

void tPerm::Print()
{
    std::for_each(Image.begin(), Image.end(), [](int& n) {std::cout << n << " "; });
}

tPerm Compose(tPerm const& sigma, tPerm const& tau)
{
    int n = sigma.GetArity();
    std::vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        result[i] = sigma.GetImageOf(tau.GetImageOf(i));
    }
    return result;
}

//template <size_t N>
//tPerm<N> tPerm<N>::Compose(tPerm<N> const& sigma, tPerm<N> const& tau)
//{
//    std::array<int, N> result;
//    for (int i = 0; i < N; i++)
//    {
//        //int tau_i = tau.Image[i];
//        result[i] = sigma.Image[tau.Image[i]];
//    }
//    return result;
//}

int main() {}
