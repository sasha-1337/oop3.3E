#include "Long.h"
Long::Long()
{
    int first = 0;
    int second = 0;
    SetFirst(first);
    SetSecond(second);
}
Long::Long(int f = 0, int s = 0)
{
    int first = f;
    int second = s;
    SetFirst(first);
    SetSecond(second);
}
Long::Long(const Long& r)
{
    int first = r.GetFirst();
    int second = r.GetSecond();
    SetFirst(first);
    SetSecond(second);
}
Long::~Long() { }

istream& operator >> (istream& in, Long& r)
{
    int first = 0, second = 0;
    do {
        cout << " "; in >> first;
        cout << " "; in >> second;
    } while (!r.Init(first, second));
    return in;
}
ostream& operator << (ostream& out, const Long& r)
{
    out << string(r);
    return out;
}
Long::operator string() const
{
    stringstream sstr;
    sstr << endl << " ( " << GetFirst() << " , " << GetSecond() << " )" << endl << endl;
    return sstr.str();
}

Long& Long::operator = (const Long& r)
{
    int first = 0, second = 0;
    first = r.GetFirst();
    second = r.GetSecond();
    return *this;
}

Long operator * (const Long& a, const Long& b)
{
    return Long(a.GetFirst() * b.GetFirst(), a.GetSecond() * b.GetSecond());
}

Long operator - (const Long& a, const Long& b)
{
    return Long(a.GetFirst() - b.GetFirst(), a.GetSecond() - b.GetSecond());
}
