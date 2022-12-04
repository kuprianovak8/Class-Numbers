#include <iostream>

using namespace std;

struct Numb
{
    int a, b, c, d;
};

class Numbers
{
private:
    int n_a;
    int n_b;
    int n_c;
    int n_d;
    int n_abcd;
//    Numb abcd;
public:

    Numbers(int a = 0, int b = 0, int c = 0, int d = 0)
    {
        n_a = a;
        n_b = b;
        n_c = c;
        n_d = d;
    }
    Numbers(int abcd)
    {
        n_abcd = abcd;
    }
    void setNumbers(int a, int b, int c, int d)
    {
        n_a = a;
        n_b = b;
        n_c = c;
        n_d = d;
//        cout << "Введите первое число:\n";
//        cin >> a;
//        if (a > 9){
//            cout << "Введите ещё раз:\n";
//            cin >> a;
//        }
    }

    double sredArfm(int a, int b, int c, int d)
    {
        n_a = a;
        n_b = b;
        n_c = c;
        n_d = d;
        int sum;
        sum = a + b + c + d;
        double sr_arfm;
        sr_arfm = (double)sum/4;
        return sr_arfm;
    }

    void maxVal(int a, int b, int c, int d)
    {
        n_a = a;
        n_b = b;
        n_c = c;
        n_d = d;

        if(a > b && b > c && c > d)
            cout << "Max: " << a << endl;
        else if (a < b && b > c && c > d)
            cout << "Max: " << b << endl;
        else if (a < b && b < c && c > d)
            cout << "Max: " << c << endl;
        else if (a < b && b < c && c < d)
            cout << "Max: " << d << endl;
    }
};

int main()
{
    Numbers chislo;
    int a, b, c, d;
    cout << "Введите 4 числа:";
    for(int i = 0; i < 4; ++i)
        cin >> a >> b >> c >> d;
    chislo.setNumbers(a, b, c, d);
    cout << "Среднее арифметическое: " << chislo.sredArfm(a, b, c, d) << endl;
    chislo.maxVal(a, b, c, d);

    return 0;
}
