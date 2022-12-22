# KAIST CS458 Dynamic Analysis of Software Source Code (Spring'23)


## Announcement


## Administrative Information

- Instructor: Prof. Moonzoo Kim
  - Office: 2434 (located at the east wing of E3-1)
  - Phone:042-350-3543
  - E-mail: moonzoo.kim @ gmail.com
  - Office hour: Tues 4:00-5:00 PM (reservation e-mail is preferred)

- Teaching assistants: TBD

- Lecture hours: Tue/Thur 4:00 - 5:30 PM

- Lecture room: E3 Rm#1101 (and through Zoom)
  - I plan to make a face-to-face lecture on Tues and an online lecture on Thurs (this plan may change later depending on the academic performance of the class participants).
  - Zoom link for Thurs class: https://kaist.zoom.us/j/5258253316

- Prerequisite: proficiency in C/C++ programming and Linux utilities
  - Due to the high load of TA, TA will not provide help for basic C/C++/Linux questions.
  - Highly recommend to take CS458 after taking CS230 System Programming first
  
- Grading: attendance/class participation/quiz: 20%, HW: 50%, mid/final exams:30%
  - You should turn on your web cam when you participate an online class; class attendance will not be counted otherwise.
  - More than 7 absences of the class will get F grade
  - Late attendance shall be counted as 1/3 absence. If a student is not able to attend a class due to an important event (e.g., attending conf., etc.), he/she should submit 1 week prior notice to the professor.
  - The official language in the class is English. All students should submit all written documents such as homework, project reports, exam, etc. in English; 20% penalty of the max score otherwise.  

- Homework:
  - Late HW will be accepted with 10% penalty of the max score in 1 day, 30% penalty of the max score in 3 days. HW will not be accepted after then.
    - Hint: many questions of exams are from the homework.
  - All programming HWs you submit must be able to be replayed by executing a single script file on a TA's server account (i.e., submitted HW should not have a dependency on your home directory, environment, etc.).  Also, the replayed execution must demonstrate the same output to the submitted hw. You will get 10% penalty of the max score otherwise.
  - For your programming HWs, you should not use external libraries which are not available on the server machines.  If you really need an external library, you have to ask TAs to install it on the server machines.
  - Homework should be submitted through KLMS https://klms.kaist.ac.kr/mod/courseboard/view.php?id=724212

- Questions on the course materials and homeworks should be posted as github issues 
  - https://github.com/swtv-kaist/cs458-spring23/issues 

- Excerpts from 강의평가
    - "실질적으로 써먹을 수 있는 내용을 많이 배워서 보람찼습니다"
    - "과제가 많이 어려운것 같았다. 과제에 대한 도움을 수업에서 좀 더 주었으면 좋겠다."



## Syllabus
This class covers automated SW testing/verification techniques to detect SW bugs effectively and efficiently. In particular, this class focuses to teach techniques that automatically generate test cases to achieve high code coverage and, thus, to detect many bugs.

The class aims to teach practical applications of advanced testing/verification techniques as well as their underlying algorithms.  This class guides students to use various open-source software testing/verification tools through HWs and learn the underlying mechanisms to maximize the performance of automated testing/verification.

## Course Schedule

### Part I: Overview of software complexity and testing

“Software testers do not make software; they only make them better.” – Anonymous

- Feb 28 : [Introduction](1-overview/lec1-Intro-AutomatedSWAnalysis_v11.pdf)

<!--  Feb 28 : <a href="part2-coverage/lec1-Intro-AutomatedSWAnalysis_v11.pptx" download> Introduction2 </a> -->

- Mar 2 : [Necessity for systematic & automated testing techniques](1-overview/lec2-Intro-HighComplexitySW_v8.pdf)

  - "Variability and Reproducibility in Software Engineering: A Study of Four Companies that Developed the Same System" by Anda et al.
IEEE Trans. on Software Engineering vol. 35, no. 3, pp. 407-429, May-June 2009.

- Mar 7: [Overview of testing techniques (including the input partitioning technique)](1-overview/lec3-testing-overview-v3.pdf)

 

### Part II: Source code coverage criteria for effective SW debugging

“It’s hard enough to find an error in your code when you’re looking for it; it’s even harder when you’ve assumed your code is error-free.”— Steve McConnell

- Mar 9: [Graph coverage](2-coverage/lec4-graph_coverage-v4.pptx)

  - Intro to Software Testing web site
  - "An Experimental Comparison of Four Unit Test Criteria: Mutation, Edge-Pair, All-uses and Prime Path Coverage" by Nan Li et al. '09 Intl. Conf. on Software Testing, Verification, and Validation Workshops

- Mar 14: [Graph coverage for source code](2-coverage/lec5-graph-coverage-code.pptx)
  - Generating CFG using GCC and Graphviz [pdf] http://www.webgraphviz.com/
   - Cyclometic complexity (또다른 한글문서) https://www.guru99.com/cyclomatic-complexity.html

- Sep 20: [gcov tutorial](2-coverage/lec6-gcov-llvm-cov-v5.pptx), [CLang tutorial 1/2: Clang AST](2-coverage/lec7-Clang-tutorial-v2.pptx)
   - gcov manual, clang for LLVM, Clang tutorial (code)
- Sep 22: [Clang tutorial 2/2: a program analysis tool by using Clang](2-coverage/lec8-building-Clang-analyzer-v3.pptx)
  - PrintFunction.zip
  - clang_example.c

- : Logic coverage [pdf]
  - example [pdf]
- :  Logic coverage from source code [pdf]

- : No class (requested by KAIST)

-  : Mutation testing [pdf],  Q&A session for coverage guided whitebox testing
  - "Design Of Mutant Operators For The C Programming Language" by Agrawal et al

### Part III: Automated test generation (fuzzing and concolic testing (a.k.a., dynamic symbolic execution))
- : Modern fuzzing overview  

- : AFL tutorial

- Nov 8 : Automated SW analysis for high reliability: a Concolic testing approach
  - Industrial Application of Concolic Testing on Embedded Software: Case Studies [ICSE'12 paper]

- Nov 10: no class

- Nov 15: no class

- Nov 17: CROWN tutorial
  - triangle.c example

- Nov 22, 24: CROWN Examples, compared to CBMC Memory Model, application of concolic testing to the circular queue example
  - crown_examples.zip
  - cbmc-memory-model-example.zip

- Nov 29: System-level concolic testing: Busybox application examples through CROWN

- Dec 1 (Makeup class 1): Automated unit testing, Unit-level concolic testing: Busybox ls example

- Online makeup class 2 (pre-recorded movie clip):
  - Automated Unit Testing of Large Industrial Embedded Software using Concolic Testing [ASE'13 paper] [Movie (40 min)]
  - Concolic Testing for High Test Coverage and Reduced Human Effort in Automotive Industry [ICSE'19 paper] [Movie (35min)]

### Part IV: Model checking and test oracles

- Oct 11, 13: SAT-based bounded software model checking [pdf]
  - The importance of unwinding loop bound: SAT-based Bounded Software Model Checking for Embedded Software: A Case Study, APSEC 2014 by Kim et al

- Oct 18, 20: No class due to midterm exam

- Oct 25, 27: Software model checking examples [pdf]
  - code examples for CBMC

- Nov 1: Model Checking flash memory storage platform software - an industrial case study
  - "A Comparative Study of Software Model Checkers as Unit Testing Tools: An Industrial Case Study," IEEE Transactions on Software Engineering (TSE), vol 37, no 2, pages 146-160, March 2011
  - "Formal Verification of a Flash Memory Device Driver- an Experience Report" Spin 2008, by M.Kim, Y.Kim, Y.Choi, and H.Kim

- Nov 3: Verification of the multi-sector read of flash memory storage
 
### Part V: Verification engine - SAT/SMT solver

- Dec 6: SMTlib tutorial, SMTlib web page, First order theories [pdf]
  - SMTlib examples
  - Examples of First Order Theories [pdf] (for concolic testing, UML OCL, JML, pre/post condition verification, etc)
  - Definition of "theory"
  - CS402 Intro to Logic (Predicate Calculus - Semantics)
  - SMT-competition 2022

- Dec 8: Using SAT solver for Sudoku, Q&A for the final exam, LLVM IR basics, CLANG vs LLVM
  - "Sudoku as a SAT problem" by I.Lynce and J.Ouaknine, Intl. Symp. on Artificial Intelligence and Mathematics 2006
  - The SuDoku Puzzle as a Satisfiability Problem
  - SAT-competition 2022

- Dec 15 (13:00~15:30): Final exam (closed book)

