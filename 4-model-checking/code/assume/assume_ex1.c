void foo(int x) {
    __CPROVER_assume    (0<x && x<10);
    x=x+1;;
    assert (x*x <= 100);
}
