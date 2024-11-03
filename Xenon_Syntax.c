// This is a single line comment

/*
This is a multi-line comment
*/


// Exemple of a custom type using a struct
struct myType {
    int x
    fixed<7> y
    char z
}

// Exemple of a custom type using a class
class myType {
    int x
    fixed<7> y
    char z
}

// Exemple of a custom type using typedef
#typedef myType {
    int x
    fixed<7> y
    char z
}

// Exemple of fighting different types with same name
myType<class> value1 = myType<class>(7, 0., '64')
myType<struct> value2 = myType<struct>(7, 0., '64')
myType<typdef> value3 = myType<typedef>(7, 0., '64')


// Exemple of a class method
class myClass {
    void func update_Pos ( int x; int y; int dy; int dx ) {
        self.x=x
        self.y=y
        self.dy+=dy
        self.dx+=dx
    }
    int x
    int y
    int dx
    int dy
}

// Exemple of struct/class limits
struct color {
    int r : 0 <= r <= 255
    int g : 0 <= g <= 255
    int b : 0 <= b <= 255
}

class color {
    int r : 0 <= r <= 255
    int g : 0 <= g <= 255
    int b : 0 <= b <= 255
}


// Exemples for arithmetic operations

// Multi-Type addition
int a = 5
fixed<1> b = 7.5

fixed<int> result = a + b

// Exponentiation
int a = 4
int b = 7
int result = a**b || a^b

// Logic Arithmetic Operations
byte a = 0xff
byte b = 0x97
// And/Or/Xor/Not
byte result = a && b || a | b || a !^b || !a


// Exemples for Control flow

for (int i = 0; 74) {
    log(char<int>(i))
}

// Uses a existing variable called a
while (a < 10) {
    a++
}

// Initiates a variable called A
while (int a < 10) {
    a++
}


// The Auto keyword does NOT exist in Xenon


// Type Conversion:
// To convert from a type to the other, use the following syntax:
int a = 7
char b = char<int>(a)


// You can use Lua implementation inside Xenon
#include <luaI.xe>

char lua_code = "e=io.popen('fsutils fsinfo drives','r')\nprint(e.read(*))\ne.close()"
lua_run(lua_code)

// For more complex Lua based APIs, you need to use a .luac file instead of .xe
#include <luaI.xe>
#include <luaAdv.luac>

char lua_code = "e = require 'system.xenon.handler\nprint(e.get_info_ENV('sys'))"
lua_run(lua_code)

// Same logic applies for Assembly
#include <io.xe>
#include <tdl.xe>

char asm_code = "LDI aax, 0x746F; LOD abx, aax"
dword returns = io.run_asm(asm_code)


// Xenon has it's own built-in support for file system I/O
#include <io.xe>
#include <fs.luac>

char root = 'C:'
log(fs_ls(root))


// There also is preprocessing support
#include <math.luac>
#define fixed<5> PI 3.14159
#typedef float {
    fixed<16> normal
    int exponent
    int real
}