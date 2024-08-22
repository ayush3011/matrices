#include <bits/stdc++.h>
using namespace std;

struct Matrix
{
    int A[10];
    int n;
};

// Setting the matrix by putting elements in the 1d array
void Set(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
        m->A[i - 1] = x;
}

// getting the elements from the 2d array where matrix elements are stored
int Get(struct Matrix m, int i, int j)
{
    if (i == j)
        return m.A[i - 1];
    return 0;
}

// displaying the matrix
void Display(struct Matrix m)
{
    int i, j;
    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i == j)
                cout << m.A[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    struct Matrix m;
    m.n = 4; // 4x4 matrix
    Set(&m, 1, 1, 5);
    Set(&m, 2, 2, 8);
    Set(&m, 3, 3, 9);
    Set(&m, 4, 4, 12);
    cout<<Get(m, 3, 3)<<endl;
    Display(m);
    return 0;
}