#include <bits/stdc++.h>
using namespace std;

// Uses Row Major formula
// Column Major Formula is A[n*(j-1)-(j-2)*(j-1)/2+i-j]
class LowerTriangular
{
private:
    int n;
    int *A;

public:
    LowerTriangular()
    {
        n = 2;
        A = new int[2 * (2 + 1) / 2];
    }
    LowerTriangular(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~LowerTriangular() { delete[] A; }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};

void LowerTriangular::Set(int i, int j, int x)
{
    if (i >= j)
        A[i * (i - 1) * 2 + j - 1] = x;
}

int LowerTriangular::Get(int i, int j)
{
    if (i >= j)
        return A[i * (i - 1) * 2 + j - 1];
    return 0;
}

void LowerTriangular::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << A[i * (i - 1) * 2 + j - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    int d;
    cout << "enter dimensions :";
    cin >> d;

    LowerTriangular Lt(d);

    int x;
    cout << "enter all elements :" << endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            Lt.Set(i, j, x);
        }
    }
    cout << endl;
    Lt.Display();
    return 0;
}