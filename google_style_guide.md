# GOOGLE CPP STYLE GUIDE CHEAT SHEET

---
## Naming Conventions
### Variables
- Use **lowercase with underscores** for variable names[^6]
- Example: `int my_variable;`, `std::string user_name;`

### Functions
- Use **mixed case** (camelCase) starting with lowercase[^6]
- Should be "command" verbs[^6]
- Examples: `myExcitingFunction()`, `calculateTotal()`, `getUserData()`

### Types (Classes, Structs, Enums)
- **CapitalCase** with capital letter for each new word[^6]
- Examples: `class MyClass`, `struct DataPoint`, `enum ColorType`

### Constants
- **ALL_CAPS with underscores**[^1]
- Example: `const int kNum = 10;`, `const char* const kMessages[]`[^1]

### Namespaces
- **All lowercase**, based on project names[^6]
- Example: `google_awesome_project`

### Files
- **All lowercase** with underscores (_) or dashes (-)[^6]
- Use consistent convention with your project

---
## Formatting
### Indentation
- **2 spaces** (no tabs)[^6]

### Braces
- **Opening brace on same line** for functions[^6]
- **else keyword on new line**[^6]

### Function Declarations
- Return type on **same line** as function name[^6]
- Parameters on same line if they fit[^6]

### Conditionals
- **No spaces inside parentheses**[^6]
- Example: `if (condition)` not `if ( condition )`

### Spacing
- No spaces inside angle brackets `<>`[^7]
- Example: `vector<string> x;` not `vector< string > x;`

---
## Headers
### Header Guards
```cpp
- Format: `<PROJECT>_<PATH>_<FILE>_H_`[^1]
```

- Example: `#ifndef FOO_BAR_BAZ_H_` for `foo/src/bar/baz.h`[^1]

### Include Order
1. Related header
2. C system headers
3. C++ standard library headers
4. Other libraries' headers
5. Your project's headers[^5]

Alphabetize within each section and separate categories with blank lines[^5][^1]
<span style="display:none">[^10][^11][^12][^13][^14][^15][^2][^3][^4][^8][^9]</span>

[^1]: https://google.github.io/styleguide/cppguide.html

[^2]: https://github.com/google/styleguide/blob/gh-pages/cppguide.html

[^3]: https://chenweixiang.github.io/docs/Google_C++_Style_Guide.pdf

[^4]: http://home.ustc.edu.cn/~hqp/RootClass/AddFiles2/Google C++ Style Guide.pdf

[^5]: https://drake.mit.edu/styleguide/cppguide.html

[^6]: http://hierarchical-cluster-engine.com/docs/pdf/CppCodingStyleGuideGoogle.pdf

[^7]: https://guiquanz.gitbooks.io/google-cc-style-guide/content/ebook/Formatting.html

[^8]: https://www.geeksforgeeks.org/cpp/naming-convention-in-c/

[^9]: https://usermanual.wiki/Document/Google20C2B2B20Style20Guide.875282820.pdf

[^10]: https://fenics.readthedocs.io/projects/dolfin/en/2017.2.0/styleguide_cpp.html

[^11]: https://github.com/MitchellTesla/Google-Cpp-Style-Guide

[^12]: https://www.reddit.com/r/learnprogramming/comments/hqoqov/does_any_of_you_have_a_cheat_sheet_for_name/

[^13]: https://www.linkedin.com/pulse/google-c-style-guide-summary-eric-gregori

[^14]: https://www.cl.cam.ac.uk/teaching/2425/ProgC/djg-materials/ccpp-notes-2425-djg-a.pdf

[^15]: https://github.com/google/styleguide

