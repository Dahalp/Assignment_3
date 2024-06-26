/* Write a C++ program to overload both unary operators (i.e. increment and decrement).

#include <iostream>
using namespace std;
//unary operator are: ++(increment),--(decrement),-(subtract)
class Counter {
private:
    int count;

public:
    // Constructor called
    Counter() : count(5) {}


    Counter operator++() {
        Counter temp;
        temp.count = ++count;
        return temp;
    }


    Counter operator--() {
        Counter temp;



        temp.count = --count;
        return temp;
    }


    void display() {
    cout << " " << count << endl;
    }
};

int main() {
    Counter c1;

    cout << "Original value: ";
    c1.display();


      // Prefix decrement
    --c1;
    cout << "After decrement: ";
    c1.display();
    // Prefix increment

    ++c1;
    cout << "After increment: ";
    c1.display();



    return 0;
}
*/

/*Write a C++ program to overload binary operator ‘+’ to add two complex numbers.
#include<iostream>
using namespace std;


class Complex {
    private:
        int real;
        int imag;

    public:
    //constructor called
        Complex(int r, int i) {
            real = r;
            imag = i;
        }

        // Overload binary + operator
        Complex operator+(Complex &c) {
            return Complex(real + c.real, imag + c.imag);
        }

        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();

    Complex c3 = c1 + c2;

    cout << "Sum: ";
    c3.display();

    return 0;
}

*/

/*Write a C++ program to add two complex numbers using operator overloaded by a friend
function
#include<iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex(float r = 0, float i = 0) {
            real = r;
            imag = i;
        }

        void display() {
            cout << real << " + " << imag << "i" << endl;
        }

        friend Complex add(Complex& c1, Complex& c2);
};

Complex add(Complex& c1, Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    float r1, i1, r2, i2;
    cout << "Enter real and imaginary parts of complex number 1: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of complex number 2: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();

    Complex c3 = add(c1, c2);

    cout << "Sum: ";
    c3.display();

    return 0;
}
*/

/*Consider a class Matrix of size 3X3. Overload the – (unary) should negate the numbers stored in
the object.
#include <iostream>
using namespace  std;
class Matrix {
private:
    int element[3][3];

public:
int i,j;
    void input() {
        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 3; j++) {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> element[i][j];
            }
        }
    }

    Matrix operator-() {
        Matrix negated;
        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 3; j++) {
                negated.element[i][j] = -element[i][j];
            }
        }
        return negated;
    }

    void print() {
        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 3; j++) {
                cout << element[i][j] << " ";
            }
          cout << endl;
        }
    }
};

int main() {
    Matrix m;
    cout << "Enter elements of the matrix:" << endl;
    m.input();

    cout << "Original matrix:" << endl;
    m.print();

    Matrix negated = -m;
    cout << "Negated matrix:" << endl;
    negated.print();

    return 0;
}
*/
/*  Consider a class Matrix of size 3X3. Let m1 & m2 are two matrices. Find out m3=m1+m2 (use
operator overloading).
#include<iostream>
using namespace std;

class Matrix {
private:
    int element[3][3];


public:
int i,j;

   void input() {
        for (i = 0; i < 3; i++) {
            for ( j = 0; j < 3; j++) {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> element[i][j];
            }
        }
    }

    Matrix operator+(const Matrix& other) {
        Matrix sum;
        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 3; j++) {
                sum.element[i][j] = element[i][j] + other.element[i][j];
            }
        }
        return sum;
    }
    void print() {
        for ( i = 0; i < 3; i++) {
            for ( j = 0; j < 3; j++) {
                cout << element[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()  {
  Matrix m1, m2, m3;
    cout << "Enter elements of matrix 1:" << endl;
    m1.input();
    cout << "Enter elements of matrix 2:" << endl;
    m2.input();

    m3 = m1 + m2;

    cout << "Matrix 1:" << endl;
    m1.print();
    cout << "Matrix 2:" << endl;
    m2.print();
    cout << "Matrix 3 (sum of Matrix 1 and Matrix 2):" << endl;
    m3.print();

return 0;
}
*/

/* Create a class Fraction to represent a fraction of the type 2/5. Overload the 4 arithmetic
operators and = = to compare two fraction objects.

#include<iostream>
using namespace std;

class Fraction{


};
*/
