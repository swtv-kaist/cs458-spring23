int x = nondet();
void bar() {
    int y;
    __CPROVER_assume
   (0<x && 0<y);
    if(x < 0 && y < 0) 
   assert(0); 
}
// VERIFICATION SUCCESSFUL

