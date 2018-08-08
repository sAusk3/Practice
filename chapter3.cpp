class complex{
    double re, im; // representation ; two doubles
public:
    complex(double r, double i):re{r}, im{i} {} //construct complex from two scalars
    complex(doube r):re{r}, im{0} {}            //construct complex from one scalar
    complex():re{0}, im{0} {}                   //default complex (0,0)

    double real() const { return re; }
    void real(double d) { re=d; }
    double imag() const { return im; }
    void imag(double m) { im=m; }

    complex& operator+=(complex z) { re+=z.re; im+=z.im; return *this;}
    complex& operator-=(complex z) { re-=z.re; im-=z.im; return *this;}
    bool operator==(complex a, complex b) { return a.real()==b.real() && a.imag()==b.imag(); }
    bool operator!=(complex a, complex b) { return !(a==b); }
};
