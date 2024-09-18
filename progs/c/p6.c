//usage of macros for metaprogramming in C
#define list \
  x(a)\
  x(b)\
  x(c)\
  x(d)\
  x(e)

#define x(arg) char* arg =#arg;
list
#undef x

#define x(arg) void arg##f() { return; }
list
#undef x

int main() {
  return 0;
}

