/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

#line 5 "sort-4.c"
void __globinit_sort_4(void) ;
extern void __CrownInit(int id )  __attribute__((__crown_skip__)) ;
extern void __CrownHandleReturn(int id , int type , long long val , double fp_val )  __attribute__((__crown_skip__)) ;
extern void __CrownReturn(int id )  __attribute__((__crown_skip__)) ;
extern void __CrownCall(int id , unsigned int fid )  __attribute__((__crown_skip__)) ;
extern void __CrownBranch(int id , int bid , unsigned char b , int line , char *fname )  __attribute__((__crown_skip__)) ;
extern void __CrownApply2(int id , int op , int type , long long val , double fp_val )  __attribute__((__crown_skip__)) ;
extern void __CrownApply1(int id , int op , int type , long long val , double fp_val )  __attribute__((__crown_skip__)) ;
extern void __CrownClearStack(int id )  __attribute__((__crown_skip__)) ;
extern void __CrownStore(int id , unsigned long addr )  __attribute__((__crown_skip__)) ;
extern void __CrownLoad(int id , unsigned long addr , int type , long long val , double fp_val ,
                        char *name , int cnt_symbolic_var , char highestBit , char lowestBit )  __attribute__((__crown_skip__)) ;
unsigned long __CrownTempCall  ;
unsigned long __CrownTempAssign  ;
#line 307 "/home/moonzoo/CROWN/bin/../include/crown.h"
extern void __CrownUInt(unsigned int *x , int cnt_sym_var , int ln , char *fname 
                        , ...)  __attribute__((__crown_skip__)) ;
#line 69 "/usr/include/assert.h"
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) __assert_fail)(char const   *__assertion ,
                                                                                                   char const   *__file ,
                                                                                                   unsigned int __line ,
                                                                                                   char const   *__function ) ;
#line 8 "sort-4.c"
int main(void) ;
#line 8 "sort-4.c"
static int cnt_symbolic_var  =    1;
#line 5 "sort-4.c"
int main(void) 
{ 
  unsigned int a[7] ;
  unsigned int i ;
  unsigned int j ;
  unsigned int tmp ;
  int __retres5 ;

  {
  __globinit_sort_4();
  __CrownCall(2, 1);
  __CrownClearStack(1);
  __CrownLoad(3, (unsigned long )0, 4, (long long )0U, (double )0U, (char *)"", 0,
              (char)0, (char)0);
  __CrownStore(4, (unsigned long )(& i));
#line 8
  i = 0U;
#line 8
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    __CrownLoad(7, (unsigned long )(& i), 4, (long long )i, (double )i, (char *)"",
                0, (char)0, (char)0);
    __CrownLoad(6, (unsigned long )0, 4, (long long )7U, (double )7U, (char *)"",
                0, (char)0, (char)0);
    __CrownApply2(5, 19, 5, (long long )(i < 7U), (double )(i < 7U));
#line 8
    if (i < 7U) {
      __CrownBranch(8, 6, 1, __LINE__, __FILE__);

    } 
      #line 8
      else {
      __CrownBranch(9, 7, 0, __LINE__, __FILE__);
#line 8
      goto while_break;
    }
    }
#line 8
    __CrownUInt(& a[i], cnt_symbolic_var, 8, (char *)"sort-4.c", "a[i]");
    __CrownLoad(12, (unsigned long )(& cnt_symbolic_var), 5, (long long )cnt_symbolic_var,
                (double )cnt_symbolic_var, (char *)"", 0, (char)0, (char)0);
    __CrownLoad(11, (unsigned long )0, 5, (long long )1, (double )1, (char *)"", 0,
                (char)0, (char)0);
    __CrownApply2(10, 0, 5, (long long )(cnt_symbolic_var + 1), (double )(cnt_symbolic_var + 1));
    __CrownStore(13, (unsigned long )(& cnt_symbolic_var));
#line 8
    cnt_symbolic_var ++;
    __CrownLoad(16, (unsigned long )(& i), 4, (long long )i, (double )i, (char *)"",
                0, (char)0, (char)0);
    __CrownLoad(15, (unsigned long )0, 4, (long long )1U, (double )1U, (char *)"",
                0, (char)0, (char)0);
    __CrownApply2(14, 0, 4, (long long )(i + 1U), (double )(i + 1U));
    __CrownStore(17, (unsigned long )(& i));
#line 8
    i ++;
  }
  while_break: /* CIL Label */ 
  __CrownLoad(18, (unsigned long )0, 4, (long long )0U, (double )0U, (char *)"", 0,
              (char)0, (char)0);
  __CrownStore(19, (unsigned long )(& i));
#line 11
  i = 0U;
#line 11
  while (1) {
    while_continue___0: /* CIL Label */ ;
    {
    __CrownLoad(22, (unsigned long )(& i), 4, (long long )i, (double )i, (char *)"",
                0, (char)0, (char)0);
    __CrownLoad(21, (unsigned long )0, 4, (long long )6U, (double )6U, (char *)"",
                0, (char)0, (char)0);
    __CrownApply2(20, 19, 5, (long long )(i < 6U), (double )(i < 6U));
#line 11
    if (i < 6U) {
      __CrownBranch(23, 15, 1, __LINE__, __FILE__);

    } 
      #line 11
      else {
      __CrownBranch(24, 16, 0, __LINE__, __FILE__);
#line 11
      goto while_break___0;
    }
    }
    __CrownLoad(27, (unsigned long )(& i), 4, (long long )i, (double )i, (char *)"",
                0, (char)0, (char)0);
    __CrownLoad(26, (unsigned long )0, 4, (long long )1U, (double )1U, (char *)"",
                0, (char)0, (char)0);
    __CrownApply2(25, 0, 4, (long long )(i + 1U), (double )(i + 1U));
    __CrownStore(28, (unsigned long )(& j));
#line 12
    j = i + 1U;
    {
#line 12
    while (1) {
      while_continue___1: /* CIL Label */ ;
      {
      __CrownLoad(31, (unsigned long )(& j), 4, (long long )j, (double )j, (char *)"",
                  0, (char)0, (char)0);
      __CrownLoad(30, (unsigned long )0, 4, (long long )7U, (double )7U, (char *)"",
                  0, (char)0, (char)0);
      __CrownApply2(29, 19, 5, (long long )(j < 7U), (double )(j < 7U));
#line 12
      if (j < 7U) {
        __CrownBranch(32, 22, 1, __LINE__, __FILE__);

      } 
        #line 12
        else {
        __CrownBranch(33, 23, 0, __LINE__, __FILE__);
#line 12
        goto while_break___1;
      }
      }
      {
      __CrownLoad(36, (unsigned long )(& a[i]), 4, (long long )a[i], (double )a[i],
                  (char *)"", 0, (char)0, (char)0);
      __CrownLoad(35, (unsigned long )(& a[j]), 4, (long long )a[j], (double )a[j],
                  (char *)"", 0, (char)0, (char)0);
      __CrownApply2(34, 15, 5, (long long )(a[i] > a[j]), (double )(a[i] > a[j]));
#line 13
      if (a[i] > a[j]) {
        __CrownBranch(37, 25, 1, __LINE__, __FILE__);
        __CrownLoad(39, (unsigned long )(& a[i]), 4, (long long )a[i], (double )a[i],
                    (char *)"", 0, (char)0, (char)0);
        __CrownStore(40, (unsigned long )(& tmp));
#line 14
        tmp = a[i];
        __CrownLoad(41, (unsigned long )(& a[j]), 4, (long long )a[j], (double )a[j],
                    (char *)"", 0, (char)0, (char)0);
        __CrownStore(42, (unsigned long )(& a[i]));
#line 15
        a[i] = a[j];
        __CrownLoad(43, (unsigned long )(& tmp), 4, (long long )tmp, (double )tmp,
                    (char *)"", 0, (char)0, (char)0);
        __CrownStore(44, (unsigned long )(& a[j]));
#line 16
        a[j] = tmp;
      } 
        #line 13
        else {
        __CrownBranch(38, 26, 0, __LINE__, __FILE__);

      }
      }
      __CrownLoad(47, (unsigned long )(& j), 4, (long long )j, (double )j, (char *)"",
                  0, (char)0, (char)0);
      __CrownLoad(46, (unsigned long )0, 4, (long long )1U, (double )1U, (char *)"",
                  0, (char)0, (char)0);
      __CrownApply2(45, 0, 4, (long long )(j + 1U), (double )(j + 1U));
      __CrownStore(48, (unsigned long )(& j));
#line 12
      j ++;
    }
    while_break___1: /* CIL Label */ ;
    }
    __CrownLoad(51, (unsigned long )(& i), 4, (long long )i, (double )i, (char *)"",
                0, (char)0, (char)0);
    __CrownLoad(50, (unsigned long )0, 4, (long long )1U, (double )1U, (char *)"",
                0, (char)0, (char)0);
    __CrownApply2(49, 0, 4, (long long )(i + 1U), (double )(i + 1U));
    __CrownStore(52, (unsigned long )(& i));
#line 11
    i ++;
  }
  while_break___0: /* CIL Label */ 
  __CrownLoad(53, (unsigned long )0, 4, (long long )0U, (double )0U, (char *)"", 0,
              (char)0, (char)0);
  __CrownStore(54, (unsigned long )(& i));
#line 19
  i = 0U;
#line 19
  while (1) {
    while_continue___2: /* CIL Label */ ;
    {
    __CrownLoad(57, (unsigned long )(& i), 4, (long long )i, (double )i, (char *)"",
                0, (char)0, (char)0);
    __CrownLoad(56, (unsigned long )0, 4, (long long )6U, (double )6U, (char *)"",
                0, (char)0, (char)0);
    __CrownApply2(55, 19, 5, (long long )(i < 6U), (double )(i < 6U));
#line 19
    if (i < 6U) {
      __CrownBranch(58, 36, 1, __LINE__, __FILE__);

    } 
      #line 19
      else {
      __CrownBranch(59, 37, 0, __LINE__, __FILE__);
#line 19
      goto while_break___2;
    }
    }
    {
    __CrownLoad(62, (unsigned long )(& a[i]), 4, (long long )a[i], (double )a[i],
                (char *)"", 0, (char)0, (char)0);
    __CrownLoad(61, (unsigned long )(& a[i + 1U]), 4, (long long )a[i + 1U], (double )a[i + 1U],
                (char *)"", 0, (char)0, (char)0);
    __CrownApply2(60, 17, 5, (long long )(a[i] <= a[i + 1U]), (double )(a[i] <= a[i + 1U]));
#line 20
    if (a[i] <= a[i + 1U]) {
      __CrownBranch(63, 39, 1, __LINE__, __FILE__);

    } 
      #line 20
      else {
      __CrownBranch(64, 40, 0, __LINE__, __FILE__);
      __CrownLoad(65, (unsigned long )0, 6, (long long )"a[i] <= a[i+1]", 8, (char *)"",
                  0, (char)0, (char)0);
      __CrownLoad(66, (unsigned long )0, 6, (long long )"sort-4.c", 8, (char *)"",
                  0, (char)0, (char)0);
      __CrownLoad(67, (unsigned long )0, 4, (long long )20U, (double )20U, (char *)"",
                  0, (char)0, (char)0);
      __CrownLoad(68, (unsigned long )0, 6, (long long )"main", 8, (char *)"", 0,
                  (char)0, (char)0);
#line 20
      __assert_fail("a[i] <= a[i+1]", "sort-4.c", 20U, "main");
      __CrownClearStack(69);
    }
    }
    __CrownLoad(72, (unsigned long )(& i), 4, (long long )i, (double )i, (char *)"",
                0, (char)0, (char)0);
    __CrownLoad(71, (unsigned long )0, 4, (long long )1U, (double )1U, (char *)"",
                0, (char)0, (char)0);
    __CrownApply2(70, 0, 4, (long long )(i + 1U), (double )(i + 1U));
    __CrownStore(73, (unsigned long )(& i));
#line 19
    i ++;
  }
  while_break___2: /* CIL Label */ 
  __CrownLoad(74, (unsigned long )0, 5, (long long )0, (double )0, (char *)"", 0,
              (char)0, (char)0);
  __CrownStore(75, (unsigned long )(& __retres5));
#line 21
  __retres5 = 0;
  __CrownLoad(76, (unsigned long )(& __retres5), 5, (long long )__retres5, (double )__retres5,
              (char *)"", 0, (char)0, (char)0);
  __CrownReturn(77);
#line 5
  return (__retres5);
}
}
void __globinit_sort_4(void) 
{ 


  {
  __CrownInit(78);
}
}
