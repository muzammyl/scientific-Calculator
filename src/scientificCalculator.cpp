#include<iostream>
#include<cmath>
using namespace std;

class get {
    protected:
    double a, b, c, d;
    public:
    double geta() {
        cout << "Enter a number:\n> ";
        cin >> a;
        return a;
    }
    double getb() {
        cout << "Enter second number:\n> ";
        cin >> b;
        return b;
    }
    double getexA() {
        cout << "Enter base number:\n> ";
        cin >> c;
        return c;
    }
    double getexB() {
        cout << "Enter exponent:\n> ";
        cin >> d;
        return d;
    }
};

class arithmetic {
    public:
    void add(double a, double b) {
        cout << a << "+" << b << " = " << a+b << endl;
    }
    void subtract(double a, double b) {
        cout << a << "-" << b << " = " << a-b << endl;
    }
    void multiply(double a, double b) {
        cout << a << "\u00d7" << b << " = " << a*b << endl;
    }
    void divide(double a, double b) {
        cout << a << "\u00f7" << b << " = " << a/b << endl;
    }
    void modulus(double a, double b) {
        cout << a << "%" << b << " = " << (int)a % (int) b << endl;
    }
};

class trignometry {
    public:
    void sinf(double a) {
        cout << "sin(" << a << ") = " << sin(a) << endl;
    }
    void cosf(double a) {
        cout << "cos(" << a << ") = " << cos(a) << endl;
    };
    void tanf(double a) {
        cout << "tan(" << a << ") = " << tan(a) << endl;
    }
    void sinInverse(double a) {
        cout << "sin\u207b\u00b9(" << a << ") = " << asin(a) << endl;
    }
    void cosInverse(double a) {
        cout << "cos\u207b\u00b9(" << a << ") = " << acos(a) << endl;
    }
    void tanInverse(double a) {
        cout << "tan\u207b\u00b9(" << a << ") = " << atan(a) << endl;
    }
};

class logarithm {
    public:
    void logf(double a) {
        cout << "ln(" << a << ") = " << log(a) << endl;
    }
    void baselog(double a) {
        cout << "log(" << a << ") = " << log10(a) << endl;
    }
};

class exponents {
    public:
    void power(double c, double d) {
        cout << c << "^" << d << " = " << pow(c, d) << endl;
    }
    void square(double c) {
        cout << c << "\u00b2" << " = " << c*c << endl;
    }
    void inverse(double a) {
        cout << a << "\u207b\u00b9 = " << 1/a << endl;
    }
    void root(double c, double d) {
        cout << d << "\u221a" << c << " = " << pow(c, (1.0/d)) << endl;
    }
    void sqroot(double a) {
        cout << "\u221a" << a << " = " << sqrt(a) << endl;
    }
};

class advanced {
    public:
    void absoluteValue(double a) {
        cout << "|" << a << "| = " << abs(a) << endl;
    }
    void factorial(double a) {
        long fact = 1;
        for(int i = 1; i <= a; i++) {
            fact *= i;
        }
        cout << a << "! = " << fact << endl;
    }
};

class launch: public get, public arithmetic, public trignometry, public logarithm, public exponents, public advanced {};

main() {
    double a, b, c, d;
    int choice, choice1;
    launch obj;
    do {
        A: {
            cout << "Scientific Calculator" << endl;
            cout << "-------------------------------------" << endl << endl;
            cout << "7\t8\t9\t÷\t𝑥²\t𝑥ⁿ\t√\t𝑥⁻¹" << endl;
            cout << "4\t5\t6\t×\tⁿ√\tsin\tcos\ttan" << endl;
            cout << "1\t2\t3\t−\tsin⁻¹\tcos⁻¹\ttan⁻¹\tln" << endl;
            cout << ".\t0\t=\t+\tlog\t|𝑥|\t𝑥!\t%" << endl << endl;
            cout << "-------------------------------------" << endl << endl;
            cout << "Main Menu" << endl;
            cout << "-------------------------------------" << endl << endl;
            cout << "1. Arithmetic operations" << endl;
            cout << "2. Trignometric operations" << endl;
            cout << "3. Logarithm operations" << endl;
            cout << "4. Exponential functions" << endl;
            cout << "5. Advance functions" << endl;
            cout << "0. Exit" << endl;
            cout << "Enter your choice:\n> ";
            cin >> choice;
            cout << endl;

            switch(choice) {
                case 1: {
                    B: {
                        do {
                            cout << "-------------------------------------" << endl;
                            cout << "1. Addition" << endl;
                            cout << "2. Subtraction" << endl;
                            cout << "3. Multiplication" << endl;
                            cout << "4. Division" << endl;
                            cout << "5. Modulus" << endl;
                            cout << "0. Main Menu" << endl;
                            cout << "Enter your choice:\n> ";
                            cin >> choice1;
                            cout << endl;
                            switch(choice1) {
                                case 1: {
                                    a = obj.geta();
                                    b = obj.getb();
                                    cout << endl;
                                    obj.add(a, b);
                                    cout << endl;
                                    break;
                                }
                                case 2: {
                                    a = obj.geta();
                                    b = obj.getb();
                                    cout << endl;
                                    obj.subtract(a, b);
                                    cout << endl;
                                    break;
                                }
                                case 3: {
                                    a = obj.geta();
                                    b = obj.getb();
                                    cout << endl;
                                    obj.multiply(a, b);
                                    cout << endl;
                                    break;
                                }
                                case 4: {
                                    a = obj.geta();
                                    b = obj.getb();
                                    cout << endl;
                                    obj.divide(a, b);
                                    cout << endl;
                                    break;
                                }
                                case 5: {
                                    a = obj.geta();
                                    b = obj.getb();
                                    cout << endl;
                                    obj.modulus(a, b);
                                    cout << endl;
                                    break;
                                }
                                case 0: {
                                    system("clear");
                                    goto A;
                                }
                                default:
                                system("clear");
                                goto B;
                            }
                        } while(choice1 != 0);
                    }
                }
                case 2: {
                    C: {
                        do {
                            cout << "-------------------------------------" << endl;
                            cout << "1. sin" << endl;
                            cout << "2. cos" << endl;
                            cout << "3. tan" << endl;
                            cout << "4. sin⁻¹" << endl;
                            cout << "5. cos⁻¹" << endl;
                            cout << "6. tan⁻¹" << endl;
                            cout << "0. Main Menu" << endl;
                            cout << "Enter your choice:\n> ";
                            cin >> choice1;
                            cout << endl;
                            switch(choice1) {
                                case 1: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.sinf(a);
                                    cout << endl;
                                    break;
                                }
                                case 2: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.cosf(a);
                                    cout << endl;
                                    break;
                                }
                                case 3: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.tanf(a);
                                    cout << endl;
                                    break;
                                }
                                case 4: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.sinInverse(a);
                                    cout << endl;
                                    break;
                                }
                                case 5: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.cosInverse(a);
                                    cout << endl;
                                    break;
                                }
                                case 6: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.tanInverse(a);
                                    cout << endl;
                                    break;
                                }
                                case 0: {
                                    system("clear");
                                    goto A;
                                }
                                default:
                                system("clear");
                                goto C;
                            }
                        } while(choice1 != 0);
                    }
                }
                case 3: {
                    D: {
                        do {
                            cout << "-------------------------------------" << endl;
                            cout << "1. ln" << endl;
                            cout << "2. log" << endl;
                            cout << "0. Main Menu" << endl;
                            cout << "Enter your choice:\n> ";
                            cin >> choice1;
                            cout << endl;
                            switch(choice1) {
                                case 1: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.logf(a);
                                    cout << endl;
                                    break;
                                }
                                case 2: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.baselog(a);
                                    cout << endl;
                                    break;
                                }
                                case 0: {
                                    system("clear");
                                    goto A;
                                }
                                default:
                                system("clear");
                                goto D;
                            }
                        } while(choice1 != 0);
                    }
                }
                case 4: {
                    E: {
                        do {
                            cout << "-------------------------------------" << endl;
                            cout << "1. Power" << endl;
                            cout << "2. Square" << endl;
                            cout << "3. Square root" << endl;
                            cout << "4. Inverse" << endl;
                            cout << "5. Root" << endl;
                            cout << "0. Main Menu" << endl;
                            cout << "Enter your choice:\n> ";
                            cin >> choice1;
                            cout << endl;
                            switch(choice1) {
                                case 1: {
                                    c = obj.getexA();
                                    d = obj.getexB();
                                    cout << endl;
                                    obj.power(c, d);
                                    cout << endl;
                                    break;
                                }
                                case 2: {
                                    c = obj.getexA();
                                    cout << endl;
                                    obj.square(c);
                                    cout << endl;
                                    break;
                                }
                                case 3: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.sqroot(a);
                                    cout << endl;
                                    break;
                                }
                                case 4: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.inverse(a);
                                    cout << endl;
                                    break;
                                }
                                case 5: {
                                    c = obj.getexA();
                                    d = obj.getexB();
                                    cout << endl;
                                    obj.root(c, d);
                                    cout << endl;
                                    break;
                                }
                                case 0: {
                                    system("clear");
                                    goto A;
                                }
                                default:
                                system("clear");
                                goto E;
                            }
                        } while(choice1 != 0);
                    }
                }
                case 5: {
                    F: {
                        do {
                            cout << "-------------------------------------" << endl;
                            cout << "1. Absolute Value" << endl;
                            cout << "2. Factorial" << endl;
                            cout << "0. Main Menu" << endl;
                            cout << "Enter your choice:\n> ";
                            cin >> choice1;
                            cout << endl;
                            switch(choice1) {
                                case 1: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.absoluteValue(a);
                                    cout << endl;
                                    break;
                                }
                                case 2: {
                                    a = obj.geta();
                                    cout << endl;
                                    obj.factorial(a);
                                    cout << endl;
                                    break;
                                }
                                case 0: {
                                    system("clear");
                                    goto A;
                                }
                                default:
                                system("clear");
                                goto F;
                            }
                        } while(choice1 != 0);
                    }
                }
                case 0: {
                    cout << "Exiting..." << endl;
                    break;
                }
                default:
                system("clear");
                goto A;
            }
        }
    } while(choice != 0);
}