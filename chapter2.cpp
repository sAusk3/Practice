class Vector{    
private:
    double *elem;
    int sz;
public:
    Vector(int s);
    Vector():elem{nullptr}, sz{0}; // default constructor
    Vector(const Vector& a);       // copy constructor
    Vector& operator=(const Vector& a); //copy assignment
    double& operator[](int i);
    int size() const;
    ~Vector() {delete[] elem;}   //destructor : release resources
};

Vector::Vector(int s)
        :elem{new double[s]},sz{s}
        {
            if (s<0)
            throw length_error{};
            for(int i=0; i!=s; i++) elem[i]=0;  //initialize elements to 0
        }

Vector::Vector(const Vector& a) : elem{new double[a.sz]}, sz{a.sz} //copy constructor
{
    for(int i=0,i!=sz; ++i)
    elem[i]=a.elem[i];
}

Vector& Vector::operator=(const Vector& a) //copy assignment
{
    double* p= new double[a.sz];
    for(int i=0;i!=a.sz;++i)
        p[i]=a.elem[i];
    delete[] elem;
    elem = p;
    sz = a.sz;
    return *this;
}

double& Vector::operator[](int i)
{
    return elem[i];
}

int Vector::size()
{
    return sz;
}
