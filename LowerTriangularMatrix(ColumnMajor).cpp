#include <bits/stdc++.h>
using namespace std;

struct Matrix
{
    int *A;
    int n;
};

// Setting the matrix by putting elements in the 1d array
void Set(struct Matrix *m, int i, int j, int x)
{
    if (i >= j)
    {
        m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j] = x;
    }
}

// getting the elements from the 1d array where matrix elements are stored
int Get(struct Matrix m, int i, int j)
{
    if (i >= j)
        return m.A[m.n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j];
    return 0;
}

// displaying the matrix
void Display(struct Matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i >= j)
                cout << m.A[m.n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    struct Matrix m;
    int i, j, x;

    cout << "enter the dimension : ";
    cin >> m.n;
    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));

    cout << "enter all elements " << endl;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            cin >> x;
            Set(&m, i, j, x);
        }
    }
    cout << endl
         << "Matrix:" << endl;
    Display(m);
    free(m.A);
    return 0;
}