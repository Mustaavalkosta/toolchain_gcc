// PR c++/47504
// { dg-options -std=c++0x }

char constexpr sub(char arg)
{ return char(arg - char(1)); }

int main()
{ static char constexpr m = sub(-1); }
