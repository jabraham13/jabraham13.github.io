
/**********************************************************************
 * EXAMPLE C++ PROGRAM SHOWING BASIC LANGUAGE COMPONENTS
 **********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <bitset>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

// Preprocessor definitions:
#define PI 3.14159

// Constant expressions:
const double pi = 3.14159;

// Static variables:
int statX; // Note static variables are initialized to zero.

// Function prototypes:
void helloWorld();
void dataTypes();
void strings();
void operators();
void inputAndOutput();
void flowControl();
void functions();
void namespaces();
void arrays();
void pointers();
void dynamicMemory();
void dataStructures();
void vectors();

int main(int argc, char** argv) {

    helloWorld();
//    dataTypes();
//    strings();
//    operators();
//    inputAndOutput();
//    flowControl();
//    functions();
//    namespaces();
//    arrays();
//    pointers();
//    dynamicMemory();
//    dataStructures();
//    vectors();

    string pause;
    getline(cin, pause);
    return 0;
}


/**********************************************************************
 * HELLO WORLD
 **********************************************************************/
void helloWorld() {
    cout << "Hello World" << endl;
}


/**********************************************************************
 * DATA TYPES
 **********************************************************************/
void dataTypes() {

    // Initialization methods:
    int a, b, c;
    a = 2;
    b = 7;
    c = 0;
    int i = 0, n = 0;
    float x = 1;
    float y(2);
    float z{3};
    float v(5), w(3);

    // Type deduction:
    int var1 = 0;
    auto var2 = var1; // int var2 = var1; 
    int var3 = 0;
    decltype(var3) var4 = var3; // int var4 = var3;

    // Different bases:
    int var5;
    // Octal starts with 0:
    var5 = 010;
    cout << "Octal: " << var5 << " equ. to " << oct << var5 << endl;
    // Hex starts with 0x:
    var5 = 0x3d;
    cout << "Hex: " << var5 << " equ. to " << hex << var5 << endl;
    // Binary (C++14 will support 0b for binary type):
    // Display as binary:
    cout << "binary: " << bitset<8>(var5) << endl;

}

/**********************************************************************
 * STRINGS
 **********************************************************************/
void strings() {

    // Basic strings:
    string str1 = "this forms" " a single" " string " "of characters";
    cout << str1 << endl;
    // Raw strings:
    string str2 = R"(some \escaped 'text' interpreted literally\n)";
    cout << str2 << endl;
    // Hex strings:
    string str3 = "string1";
    cout << str3 << ": ";
    for (int c : str3) cout << setfill('0') << setw(2) << hex << c;
    cout << endl;

    // String Concatenation:
    cout << "str1 + str2: " << str1 + str2 << endl;

}

/**********************************************************************
 * OPERATORS
 **********************************************************************/
void operators() {

    int i = 10;
    int a = 5, b = 15, c = 20;

    // Logical operators (note that the condition increments i if and 
    // only if the first expression is true):
    if ((i >= 0) && (++i < 25)) {
        cout << "i: " << i << endl;
    }

    // Conditional ternary operator:
    c = (a > b) ? a : b;

    // Comma operator:
    a = (b = 10, b + 2); // a is the leftmost expression.

    // Bitwise operators (results expressed as hex):
    b = a << 3;
    c = a ^ b;

}

/**********************************************************************
 * INPUT AND OUTPUT
 **********************************************************************/
void inputAndOutput() {

    string str1, str2;

    cout << "Enter string1: "; // Standard output.
    cin >> str1; // Standard input, reads to next space.
    cin.ignore(); // Required to flush the newline character (use getline() instead).
    cout << "str1: " << str1 << '\n';
    cout << "Enter string2: ";
    getline(cin, str2); // Standard input, reads the whole line.
    cout << "str2: " << str2 << endl;

    // Input and output (from string):
    string str("1204");
    int i;
    stringstream(str) >> i;
    cout << dec << i << endl;
}

/**********************************************************************
 * FLOW CONTROL
 **********************************************************************/
void flowControl() {

    float x;
    int i, n, num1, num2;

    // if and else blocks:
    cout << "Enter a number: ";
    cin >> x;
    cin.ignore();
    if (x > 0) cout << "x is positive\n";
    else if (x < 0) cout << "x is negative\n";
    else cout << "x is 0\n";

    // while loop:
    cout << "Enter an integer: ";
    cin >> i;
    cin.ignore();
    while (i > 0) {
        cout << i-- << ", ";
    }
    cout << endl;

    // do while loop (always executes once):
    string str;
    do {
        cout << "Enter text (\"goodbye\" to terminate): ";
        getline(cin, str);
        cout << "You entered: " << str << '\n';
    } while (str != "goodbye");

    // for loop (note the use of the comma operator):
    cout << "Enter lower number: ";
    cin >> num1;
    cin.ignore();
    cout << "Enter higher number: ";
    cin >> num2;
    cin.ignore();
    for (n = num1, i = num2; n != i; ++n, --i) {
        cout << n << ", ";
    }
    cout << "Met in the middle!\n";

    // Range based for loop:
    str = "A random string";
    for (auto c : str)
        std::cout << "[" << c << "]";
    std::cout << endl;

    // break statement:
    for (n = 10; n > 0; n--) {
        cout << n << ", ";
        if (n == 3) {
            cout << "countdown stopped by break statement\n";
            break;
        }
    }

    // continue statement:
    cout << "continue statment:\n";
    for (n = 10; n > 0; n--) {
        if (n == 5) continue;
        cout << n << ", ";
    }
    cout << endl;

    // goto statement:
    cout << "goto statment:\n";
    n = 10;
mylabel:
    cout << n-- << ", ";
    if (n > 0) goto mylabel;
    cout << endl;

    // switch statement:
    cout << "Enter a number: ";
    cin >> i;
    cin.ignore();
    switch (i) {
        case 1:
        case 2:
        case 3:
            cout << "number is 1, 2 or 3";
            break;
        default:
            cout << "number is not 1, 2 nor 3";
    }

}

/**********************************************************************
 * FUNCTIONS
 **********************************************************************/
inline void inlineFuncByVal(string str1, string str2) {
    cout << "By val\n";
    cout << str1 << str2 << endl;
    str1 = str1 + str2;
}

inline void inlineFuncByRef(string& str1, string& str2) {
    cout << "By ref\n";
    cout << str1 << str2 << endl;
    str1 = str1 + str2;
}

int overloadedAdd(int a, int b) {
    return a + b;
}

float overloadedAdd(float a, float b) {
    return a + b;
}

template <class T>
T templateFunc1(T a, T b) {
    T result;
    result = a + b;
    return result;
}

// Note that the argument N CANNOT be a variable.

template <class T, int N>
T templateFunc2(T var) {
    return var * N;
}

void functions() {
    string str1, str2;
    str1 = "Label: ", str2 = "value";
    inlineFuncByVal(str1, str2);
    cout << str1 << endl;
    str1 = "Label: ", str2 = "value";
    inlineFuncByRef(str1, str2);
    cout << str1 << endl;

    // Overloaded functions:
    int i = 2, j = 3;
    float x = 5, y = 10;
    cout << overloadedAdd(i, j) << endl;
    cout << overloadedAdd(x, y) << endl;

    // Template functions:
    cout << templateFunc1<int>(i, j) << endl;
    cout << templateFunc1<float>(x, y) << endl;
    // Or equivalently:
    cout << templateFunc1(i, j) << endl;
    cout << templateFunc1(x, y) << endl;

    cout << templateFunc2<int, 4>(10) << endl;

}


/**********************************************************************
 * NAMESPACES
 **********************************************************************/
namespace jla1 {
    int i = 5, j = 10;

    void print(int a, int b) {
        cout << a << " " << b << endl;
    }
}

void namespaces() {

    int i = 4, j = 8;

    using namespace jla1;

    cout << i << " " << j << endl;
    cout << jla1::i << " " << jla1::j << endl;
    print(i, j);

}

/**********************************************************************
 * ARRAYS
 **********************************************************************/
void arrays() {

    int vars1[5] = {1, 2, 3, 4, 5};
    for (int a : vars1) cout << a << endl;

    int vars2[4]{};
    for (int a : vars2) cout << a << endl;

    int vars3[5][3] = {
        { 1, 2, 3},
        { 6, 7, 8},
        { 11, 12, 13},
        { 16, 17, 18},
        { 21, 22, 23}
    };
    for (auto &a : vars3) {
        for (auto b : a) {
            cout << b << endl;
        }
    }

    int vars4[] = {1, 2, 3, 4, 5};
    for (int a : vars4) cout << a << endl;

    // The following is incorrect:
    //int vars5[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    // This is okay:
    int vars5[][3] = {
        { 1, 2, 3},
        { 4, 5, 6},
        { 7, 8, 9}
    };
    for (auto &a : vars5) {
        for (auto b : a) {
            cout << b << endl;
        }
    }

}

/**********************************************************************
 * POINTERS
 **********************************************************************/
void pointers() {

    cout << "POINTERS\n";

    int firstvalue, secondvalue;
    int * mypointer;

    // Pointers:
    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << mypointer << endl;
}

/**********************************************************************
 * DYNAMIC MEMORY
 **********************************************************************/
void dynamicMemory() {

    cout << "DYNAMIC MEMORY\n";

    // Dynamic memory:
    int * foo;
    int j = 10;
    foo = new (nothrow)int [j]; // nothrow assigns to nullptr if memory unavailable
    if (foo != nullptr) {
        for (int i = 0; i < j; i++) foo[i] = i * 10;
        cout << foo << endl;
        cout << *foo << endl;
        cout << *(foo + j - 1) << endl; // pointer addition is a logical addition!

    }
}

/**********************************************************************
 * DATA STRUCTURES
 **********************************************************************/
void dataStructures() {

    cout << "DATA STRUCTURES\n";


    // Declare structure than variables:

    struct book {
        string title;
        string author;
        int pages;

    };
    book bk1, bk2;
    bk1.title = "Title1";
    bk1.author = "Author1";
    bk1.pages = 150;
    bk2.title = "Title2";
    bk2.author = "Author2";
    bk2.pages = 250;


    // Declare structure with some variables:

    struct address {
        string street;
        string town;
        string county;

    } addr1;
    address addr2;
    addr1.street = "High St";
    addr1.town = "Metropolis";
    addr1.county = "Shire";
    addr2.street = "Main St";
    addr2.town = "Gotham";
    addr2.county = "Side";


    // Declare un-named structure with variables:

    struct {
        string starter;
        string main;
        string dessert;

    } lunch, tea;
    lunch.starter = "salad";
    lunch.main = "omelette";
    lunch.dessert = "yogurt";
    tea.starter = "soup";
    tea.main = "steak";
    tea.dessert = "pie";

    // Structure arrays:
    book biblio[] = {bk1, bk2};
    for (auto b : biblio) {
        cout << b.title << endl;

    }

    // The dereference pointer:
    book * pbook;
    pbook = &bk1;
    cout << pbook->title << endl;

    // Type aliasing:
    using nameField = char[50];
    nameField nm1 = "Alfred Smith";
    nameField nm2 = "Bob Jones";
    cout << nm1 << " " << nm2 << endl;


    // Unions (all members share the same memory portion):

    union currency {
        float dollars;
        int yen;

    } curr1;
    curr1.dollars = 25.75;
    cout << curr1.dollars << endl;
    curr1.yen = 3100;
    cout << curr1.yen << endl;


    // Enumerated types:

    enum months {
        january = 1, february, march, april,
        may, june, july, august,
        september, october, november, december
    } date1;
    date1 = august;
    cout << date1 << endl;


    // Enumeratered types with enum class:

    enum class EyeColor : char {
        blue, green, brown
    };
    EyeColor e1 = EyeColor::blue;
}

/**********************************************************************
 * VECTORS
 **********************************************************************/
void vectors() {

    vector<int> vct;

    vct.push_back(1);
    vct.push_back(2);
    vct.push_back(3);

    cout << vct.size() << endl;
    for (vector<int>::iterator it = vct.begin(); it != vct.end(); ++it) {
        cout << *it << endl;
    }
}


