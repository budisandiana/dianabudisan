#include <iostream>
#include "shape.h"
#include <vector>
#include <algorithm>
using namespace std;

//sume function
template <typename T>
T sume(vector<T> A, int start, int end, T anfangswert) 
{
    if (start > A.size() || end > A.size())
        return anfangswert;
    for (int i = start; i < end; i++) 
    {
        anfangswert += A[i];
    }
    return anfangswert;

}

//2nd sume function
template <typename T>
T sume2(vector<T> A, int start, int end, T anfangswert)
{
    auto f1 = [&anfangswert](T n, T m) { anfangswert = n + m; };
    if (start > A.size() || end > A.size())
        return anfangswert;
    for (int i = start; i < end; i++)
        f1(anfangswert, A[i]);
    return anfangswert;
}

//apply function
template <typename T>
void apply(std::vector <shape*> vect, T f) 
{
    std::for_each(vect.begin(), vect.end(), f);
}


int main()
{
    vector<int> A = { 2, 4, 1, 5, 3 };
    int n = sume<int>(A, 3, 1, 4);
    int m = sume2<int>(A, 5, 2, 1);
    cout << n << '\n';
    cout << m << '\n';
    shape a = shape("A", 1.0);
    shape* a_1 = &a;
    shape b = shape("B", 2.0);
    shape* b_1 = &b;
    shape c = shape("C", 3.0);
    shape*  c_1= &c;
    shape d = shape("D", 4.0);
    shape* d_1 = &d;
    shape e = shape("E", 5.0);
    shape* e_1 = &e;
    std::vector <shape*> B = { a_1, b_1, c_1, d_1, e_1 };
    apply(B, inmultire(10));
    apply(B, form());
    apply(B, impartire(10));
    apply(B, form());
}
