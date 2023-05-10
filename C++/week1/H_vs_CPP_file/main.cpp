
#include "test.h"



/*****************************************************
 * Where to put include statements, header or source file?
 * - Only put includes in a header if header itself needs them.
 * - https://cplusplus.com/articles/Gw6AC542/
 * - https://www.tutorialspoint.com/cprogramming/c_header_files.htm
 * Include Syntax:
 * #include <file> => used for system header files
 * #include "file" => used for your own program header files
 *
 *
 * #ifndef MY_CLASS_H   // include guard to prevent multiple
 * #define MY_CLASS_H   // inclusions
 *
 * #endif // MY_CLASS_H
 * ***************************************************/

int main()
{
    printtaa("tama teksti");
    cout << "Hello World!" << endl;
    return 0;
}
