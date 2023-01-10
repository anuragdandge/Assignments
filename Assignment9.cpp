#include <iostream>
using namespace std;
class MAT
{
    int a[3][3];

public:
    void getMat()
    {
        cout << "Enter Elements for  Matrix :";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
       
    }
    void dispMat()
    {
      
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << "\n";
        }
    }

    MAT operator+(MAT m1)
    {
        MAT m2;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m2.a[i][j] = a[i][j] + m1.a[i][j];
            }
        }
        return m2;
    };
    MAT operator-(MAT m1)
    {
        MAT m2;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m2.a[i][j] = a[i][j] - m1.a[i][j];
            }
        }
        return m2;
    };
    MAT operator*(MAT m1)
    {
        MAT m2;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m2.a[i][j] = a[i][j] * m1.a[i][j];
            }
        }
        return m2;
    };
    MAT operator/(MAT m1)
    {
        MAT m2;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m2.a[i][j] = a[i][j] / m1.a[i][j];
            }
        }
        return m2;
    };
};

int main()
{
    MAT m1, m2, add, sub, mul, div;
    m1.getMat();
    m2.getMat();
    add = m1 + m2;
    sub = m1 - m2;
    mul = m1 * m2;
    div = m1 / m2;
    cout << " Addition :\n" ; add.dispMat();
    cout << " Subtraction : \n " ; sub.dispMat();
    cout << " Multiplication : \n " ; mul.dispMat();
    cout << " Division : \n " ; div.dispMat();
}
