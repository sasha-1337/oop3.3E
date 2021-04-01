#include "Pair.h"
#include "Pair.h"
Pair::Pair()
{
    first = 0;
    second = 0;
}
Pair::Pair(int f = 0, int s = 0)
{
    first = f;
    second = s;
}
Pair::Pair(const Pair& r)
{
    first = r.first;
    second = r.second;
}
Pair::~Pair(void) { }

bool Pair::Init(int f, int s)
{
    if ((f >= 0 || f <= 0) &&
        (s >= 0 || s <= 0))
    {
        SetFirst(f);
        SetSecond(s);
        return true;
    }
    else
        return false;
}

ostream& operator << (ostream& out, const Pair& r)
{
    out << string(r);
    return out;
}
Pair::operator string () const
{
    stringstream sstr;
    sstr << endl << " ( " << first << " , " << second << " )" << endl << endl;
    return sstr.str();
}

Pair& Pair::operator = (const Pair& r)
{
    first = r.first;
    second = r.second;
    return *this;
}
Pair operator + (const Pair& a, const Pair& b)
{
    return Pair(a.first + b.first, a.second + b.second);
}