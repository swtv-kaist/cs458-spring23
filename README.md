# KAIST CS458 Dynamic Analysis of Software Source Code (Spring'23)


## Announcement


## Administrative Information

- Instructor: [Prof. Moonzoo Kim](https://swtv.kaist.ac.kr/members/mzkim)

  - Office: 2434 (located at the east wing of E3-1)
  - Phone: 042-350-3543
  - E-mail: moonzoo.kim @ gmail.com
  - Office hour: Tues 3:00-4:00 PM (reservation e-mail is preferred)

- Teaching assistants: Youngseok Choi (youngseok.choi@kaist.ac.kr) and Mehdi Aghakishiyev (agakisiyev@kaist.ac.kr)

- Lecture hours: Tue/Thur 4:00 - 5:15 PM

- Lecture room: E3 Rm#1101 (and through Zoom)
  - a face-to-face lecture on Tues and an online lecture on Thurs (this plan may change later) 
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
  - Homework should be submitted through KLMS https://klms.kaist.ac.kr/course/view.php?id=145058
  - Late HW will be accepted with 10% penalty of the max score in 1 day, 30% penalty of the max score in 3 days. HW will not be accepted after then.
    - Hint: many questions of exams are from the homeworks.
  - All programming HWs you submit must be able to be replayed by executing a single script file on a TA's server account (i.e., submitted HW should not have a dependency on your home directory, environment, etc.).  Also, the replayed execution must demonstrate the same output to the submitted hw. You will get 10% penalty of the max score otherwise.
  - For your programming HWs, you should not use external libraries which are not available on the server machines.  If you really need an external library, you have to ask TAs to install it on the server machines.
  
- Questions on the course materials and homeworks should be posted as github issues 
  - https://github.com/swtv-kaist/cs458-spring23/issues 

- Excerpts from 강의평가
    - "실질적으로 써먹을 수 있는 내용을 많이 배워서 보람찼습니다"
    - "과제가 많이 어려운것 같았다. 과제에 대한 도움을 수업에서 좀 더 주었으면 좋겠다."


## Syllabus
This class covers automated SW testing/verification techniques to detect SW bugs by analyzing **SW source code** and its **diverse runtime behaviors**. In particular, this class focuses to teach techniques that automatically generate test cases to achieve high code coverage and, thus, to detect many bugs. 

The class teaches **practical applications** of testing/verification techniques by applying open-source testing/verification tools to complete homework tasks. Also, it guides students to learn the underlying fundamental algorithms of such techniques/tools to improve the performance of automated testing/verification.

## Course Schedule

### Part I: Overview of High SW Complexity and Testing

*“Software testers do not make software; they only make them better.” – Anonymous*

- Feb 28 : [Introduction](1-overview/lec1-Intro-AutomatedSWAnalysis_v11.pptx) [[pdf]](1-overview/lec1-Intro-AutomatedSWAnalysis_v11.pdf)

<!--  Feb 28 : <a href="part2-coverage/lec1-Intro-AutomatedSWAnalysis_v11.pptx" download> Introduction2 </a> -->

- Mar 2, 7: [Necessity for systematic & automated testing techniques](1-overview/lec2-Intro-HighComplexitySW_v9.pptx) [[pdf]](1-overview/lec2-Intro-HighComplexitySW_v9.pdf)

  - "Variability and Reproducibility in Software Engineering: A Study of Four Companies that Developed the Same System" by Anda et al.
IEEE Trans. on Software Engineering vol. 35, no. 3, pp. 407-429, May-June 2009.

- Mar 7: [Overview of testing techniques (including the input partitioning technique)](1-overview/lec3-testing-overview-v3.pptx) [[pdf]](1-overview/lec3-testing-overview-v3.pdf)

 

### Part II: Source Code Coverage Criteria for Effective SW Debugging

*“It’s hard enough to find an error in your code when you’re looking for it; it’s even harder when you’ve assumed your code is error-free.”— Steve McConnell*

- Mar 9: [Graph coverage](2-coverage/lec4-graph_coverage-v4.pptx) [[pdf]](2-coverage/lec4-graph_coverage-v4.pdf)

  - [Intro to Software Testing web site](https://cs.gmu.edu/~offutt/softwaretest/)
  - "An Experimental Comparison of Four Unit Test Criteria: Mutation, Edge-Pair, All-uses and Prime Path Coverage" by Nan Li et al. '09 Intl. Conf. on Software Testing, Verification, and Validation Workshops

- Mar 14: [Graph coverage for source code](2-coverage/lec5-graph-coverage-code.pptx) [[pdf]](2-coverage/lec5-graph-coverage-code.pdf)
  - Generating CFG using GCC and Graphviz [pdf] http://www.webgraphviz.com/
   - Cyclometic complexity (또다른 한글문서) https://www.guru99.com/cyclomatic-complexity.html

- Mar 16: [gcov tutorial](2-coverage/lec6-gcov-llvm-cov-v5.pptx) [[pdf]](2-coverage/lec6-gcov-llvm-cov-v5.pdf) , [CLang tutorial 1/2: Clang AST](2-coverage/lec7-Clang-tutorial-v2.pptx) [[pdf]](2-coverage/lec7-Clang-tutorial-v2.pdf)
   - gcov manual, clang for LLVM, Clang tutorial (code)
- Mar 21: [Clang tutorial 2/2: a program analysis tool by using Clang](2-coverage/lec8-building-Clang-analyzer-v3.pptx) [[pdf]](2-coverage/lec8-building-Clang-analyzer-v3.pdf)
  - PrintFunction.zip
  - clang_example.c

- Mar 23: [Logic coverage](2-coverage/lec9-Logic-covearge-v3.pptx) [[pdf]](2-coverage/lec9-Logic-covearge-v3.pdf)
  - example [pdf]
- Mar 28:  [Logic coverage from source code](2-coverage/lec10-logic-covearge-code-v2.pptx) [[pdf]](2-coverage/lec10-logic-covearge-code-v2.pdf)

- Mar 30: [Mutation testing](2-coverage/lec11-mutation-testing-v2.pptx) [[pdf]](2-coverage/lec11-mutation-testing-v2.pdf),  Q&A session for coverage guided whitebox testing
  - "Design Of Mutant Operators For The C Programming Language" by Agrawal et al

### Part III: Automated Test Generation (Fuzzing and Concolic Testing (a.k.a., Dynamic Symbolic Execution))
- Apr 4: Modern fuzzing technique overview (i.e., coverage-guided automated blackbox testing)

- Apr 6: AFL++ (american fuzzy lop) fuzzer tutorial

- Apr 11: [Automated SW analysis for high reliability: a Concolic testing approach](3-fuzz-concolic/lec31-concolic-v5.pptx) [[pdf]](3-fuzz-concolic/lec31-concolic-v5.pdf)
  - Industrial Application of Concolic Testing on Embedded Software: Case Studies [ICSE'12 paper]

- Apr 13, 25: [CROWN tutorial](3-fuzz-concolic/lec32-crown_tutorial-v3.pptx) [[pdf]](3-fuzz-concolic/lec32-crown_tutorial-v3.pdf)
  - triangle.c example

- **Apr 18: Midterm exam (closed book)**

- Apr 27, May 2: [CROWN Examples](3-fuzz-concolic/lec33-crown-Examples-v2.pptx) [[pdf]](3-fuzz-concolic/lec33-crown-Examples-v2.pdf) 
  - crown_examples.zip
  
- May 4: [System-level concolic testing: Busybox application examples through CROWN](3-fuzz-concolic/lec35-printf-grep-vi-system-testing-v3.pptx) [[pdf]](3-fuzz-concolic/lec35-printf-grep-vi-system-testing-v3.pdf)

- May 9: [Automated unit testing](3-fuzz-concolic/lec36.automated_unit_testing-v2.pptx) [[pdf]](3-fuzz-concolic/lec36.automated_unit_testing-v2.pdf), [Unit-level concolic testing: Busybox ls example](3-fuzz-concolic/lec37-ls-unit-testing-v4.pptx) [[pdf]](3-fuzz-concolic/lec37-ls-unit-testing-v4.pdf)

- May 11: Industrial case studies (pre-recorded movie clip)
  - [Automated Unit Testing of Large Industrial Embedded Software using Concolic Testing](3-fuzz-concolic/lec38-conbol.pptx) [[pdf]](3-fuzz-concolic/lec38-conbol.pdf)  [ASE'13 paper] [[Movie (40 min)]](https://drive.google.com/file/d/10DaVUtSZGJiHhHKe-abez7C3XuFQxoBx/view?usp=share_link)
  - [Concolic Testing for High Test Coverage and Reduced Human Effort in Automotive Industry](3-fuzz-concolic/lec39-ICSE19-MAIST-rev18.pptx) [[pdf]](3-fuzz-concolic/lec39-ICSE19-MAIST-rev18.pdf)  [ICSE'19 paper] [[Movie (35min)]](https://drive.google.com/file/d/1G2j92qvfJBkPvIiBIklYE2EWjadEYIiW/view?usp=share_link)

### Part IV: Model Checking and Test Oracles

- May 16, 18: [SAT-based bounded software model checking](4-model-checking/lec21-model_checking-v3.pptx) [[pdf]](4-model-checking/lec21-model_checking-v3.pdf)
  - The importance of unwinding loop bound: SAT-based Bounded Software Model Checking for Embedded Software: A Case Study, APSEC 2014 by Kim et al

- May 23: [Software model checking examples](4-model-checking/lec22-SMC-examples-v4.pptx) [[pdf]](4-model-checking/lec22-SMC-examples-v4.pdf), [CBMC memory model](4-model-checking/lec25-cbmc-memory-model.pptx) [[pdf]](4-model-checking/lec25-cbmc-memory-model.pdf)
  - code examples for CBMC
  - cbmc-memory-model-example.zip

- May 25:  [Model Checking flash memory storage platform software - an industrial case study](4-model-checking/lec26-ase08-v2.pptx) [[pdf]](4-model-checking/lec26-ase08-v2.pdf)
  - "A Comparative Study of Software Model Checkers as Unit Testing Tools: An Industrial Case Study," IEEE Transactions on Software Engineering (TSE), vol 37, no 2, pages 146-160, March 2011
  - "Formal Verification of a Flash Memory Device Driver- an Experience Report" Spin 2008, by M.Kim, Y.Kim, Y.Choi, and H.Kim

- May 30: [Verification of the multi-sector read of flash memory storage](4-model-checking/lec27-SMC-examples2.pptx) [[pdf]](4-model-checking/lec27-SMC-examples2.pdf) 
 
### Part V: Testing/Verification Engine - SAT/SMT Solver

- June 1: [SMTlib tutorial](5-smt/lec40-smtlibV2-v5.pptx) [[pdf]](5-smt/lec40-smtlibV2-v5.pdf), [SMTLib web page](https://smtlib.cs.uiowa.edu/), [First order theories](5-smt/lec43-first-order-theories.pptx) [[pdf]](5-smt/lec43-first-order-theories.pdf)
  - SMTlib examples
  - Examples of First Order Theories [pdf] (for concolic testing, UML OCL, JML, pre/post condition verification, etc)
  - Definition of "theory"
  - CS402 Intro to Logic (Predicate Calculus - Semantics)
  - SMT-competition 2022

- June 8: [Using SAT solver for Sudoku](5-smt/lec44-sudoku-v2.pptx) [[pdf]](5-smt/lec44-sudoku-v2.pdf), Q&A for the final exam, LLVM IR basics, CLANG vs LLVM
  - "Sudoku as a SAT problem" by I.Lynce and J.Ouaknine, Intl. Symp. on Artificial Intelligence and Mathematics 2006
  - The SuDoku Puzzle as a Satisfiability Problem

- **June 13:  Final exam (closed book)**

