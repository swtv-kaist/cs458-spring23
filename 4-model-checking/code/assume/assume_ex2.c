void bar() {
    int y=0;
    __CPROVER_assume    ( y > 10); 
    assert(0); 
}
