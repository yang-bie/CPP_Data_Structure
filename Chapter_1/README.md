# CPP_Data_Structure
1.1  Why is the computer used by so many different people, in so many different professions?
     Because computer can be programmed, they are not designed to do just one job, but any job their
     programs tell them to do.
1.2  List the five major hardware components of a computer system.
     The central processing unit(CPU), Main memory, Secondary storage devices, Input devices, Output
     devices.
1.3  Internally, the CPU consists of what two units?
     Control Unit and Arithmetic and Logic Unit.
1.4  Describe the steps in the fetch/decode/execute cycle
     Fetch    The CPU's control unit fetches, from main memory, the next instruction in the sequence
              of programming instructions.
     Decode   The instruction is encoded in the form of a number. The control unit decodes the 
              instruction and generates electronic signal.
     Execute  The signal is routed to the appropriate component of the computer(such as the ALU, a
              disk drive, or some other device). The signal causes the component to perform an 
              operation.
1.5  What is a memory address? What is its purpose?
     Address is a unique number that assigned to each byte in main memory. It makes storing and 
     retrieving data easier.
1.6  Explain why computers have both main memory and secondary storage.
     Main memory is commonly known as random-access memory or RAM. The CPU is able to quickly access
     data stored at any random location in RAM. RAM is usually a volatile type of memory that is 
     used only for temporary storage while a program is running. When the computer is turned off, 
     the contents of RAM are erased.
     Secondary storage is a type of memory that can hold data for long periods of time, even there 
     is no power to the computer. Programs are normally stored in secondary memory and loaded into
     main memory as needed.
1.7  What are the two general categories of software?
     System Software and Application Software.
1.8  What fundamental set of programs control the internal operations of the computer's hardware?
     Operating Systems.
1.9  What do you call a program that performs a specialized task, such as virus scanner, a 
     file-compression program, or a data-backup program?
     Utility Programs.
1.10 Word processing programs, spreadsheet programs, e-mail programs,web browsers, and game programs
     belong to what category of software?
     Application Software.
1.11 What is an algorithm?
     An algorith is a set of well-defined steps for performing a task or solving a problem.
1.12 Why were computer programming languages invented?
     Because the process of encoding an algorithm in machine language is very tedious and difficult. 
     In addition, each different type of CPU has its own machine language. Programming languages, 
     which use words instead of numbers, were invented to ease the task of programming.
1.13 What is the difference between a low-level language and a high-level language?
     A low-level language is close to the level of the computer, which means it resembles the 
     numeric machine language of the computer than the natural language of humans.
     High-level language is close to the level of human readability than computer readability.
1.14 What does portability mean?
     Portability means a program can be writen on one type of computer, then run on many other types
     of systems.
1.15 Explain the operations carried out by the preprocessor, compiler and linker.
1.16 Explain what is stored in a source file, an object file and an executable file.
     The statements written by the programmer are called source code, and the file they are stored
     in is called source file.
     After the source code is saved to a file.The process of translating it to machine language can
     begin.During the first phase, a program called preprocessor reads the source code. The
     preprocessor searches the special lines that begin with the # symbol.These lines contain
     commands that cause the preprocessor to modify the source code in some way.
     During the next phase, the compiler steps through the preprocessed code, translating each 
     source code instruction into the appropriate machine language instruction. This process will 
     uncover any syntax errors that may be in the program. If the program is free of syntax errors,
     the compiler stores the translated machine language instructions, which are called object code,
     in an object file.
     During the last phase of translation process, another program called linker combines object
     file with the necessary library routines. Once the linker has finished with this step, an
     executable file is created. The executable file contains machine language instructions, or 
     executable code, and is ready to run on the computer.
1.17 What is an integrated development environment?
     IDEs consists of a text editor, compiler, debugger, and other utilities integrated into a 
     package with single set of menus. Preprocessing, compiling, linking, and even executing a
     program with a single click of a button, or by selecting a single item from a menu.
1.18 Describe the difference between a key word and a programmer-defined identifier.
     Key words are reserved and cannot be used of anything other than their designated purposes.
     Programmer-defined identifiers are not part of C++ language, but rather are names made up by
     the programmer.
1.19 Describe the difference between operators and punctuation symbols.
     Operators perform operations on pieces of data known as operands.
     Punctuation symbols are used to structure C++ code, they don't perform operations but help 
     organize code elements.
1.20 Describe the difference between a program line and a statement.
     A line is just a single line as it appears in the body of a program. Most of the lines contains 
     something meaningful; however, some of the lines are empty. They are only there to make the 
     program more readable.
     A statement is a complete instruction that causes the computer to perform some action.
1.21 Why are variables called "variable"?
     A variable is a named storage location in the computer's memory for holding a piece of 
     information. The information stored in the variable may change while the program is running.
1.22 What happened to a variable's current contents when a new value is stored there?
     The current contents are overwritten.
1.23 What must take place before in a program before a variable is used?
     Must make a variable definition.
1.24 What are the three primary activities of a program?
     Input, processing and output.