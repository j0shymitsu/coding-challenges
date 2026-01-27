1. Hello world with your name and degree.
2. Ask for name and age, print age next year.
3. Convert Celsius to Fahrenheit and back.
4. Simple interest calculator.
5. Circle area and circumference from radius.
6. BMI calculator with categories.
7. Max of two integers using if/else.
8. Min, max, average of three integers.
9. Even or odd checker.
10. Leap year checker.
11. Grade classifier (A–F) from percentage.
12. Simple four-function calculator (switch).
13. Print multiplication table for a number.
14. Sum of first $n$ natural numbers (loop).
15. Factorial with loop.
16. Factorial with recursion.
17. Power function using loop (no std::pow).
18. Print first $n$ Fibonacci numbers (loop).
19. Check if a number is prime (naive).
20. Print all primes up to $n$.
21. Reverse digits of an integer.
22. Check if integer is a palindrome.
23. Count digits in an integer.
24. Sum of digits of an integer.
25. Guess-the-number game (fixed secret).
26. Guess-the-number with random secret (std::rand or <random>).
27. Menu-driven unit converter (km/miles, kg/lb, etc.).
28. Basic string input and echo (with spaces).
29. Count characters in a string.
30. Count vowels and consonants in a string.
31. Convert string to upper and lower case
32. Check if a string is a palindrome
33. Word frequency in a single-line string
34. Validate password strength (length + char classes)
35. Compute GCD and LCM
36. REPL calculator (exit on command)
37. Print ASCII table subset (32-126)
38. Use std::chrono to time operations
39. Generate first n prime numbers
40. Simple logging helper with timestamps
41. Simulate rolling dice N times (frequencies)
42. Rock-paper-scissors game
43. Mini quiz with scoring
44. Command-line arguments parser
45. Decimal ↔ Binary converter
46. Linear search
47. Binary search
48. Selection sort
49. Insertion sort
50. Bubble sort with optimization
51. Compare sort timings
52. Reverse array in-place
53. Find second largest element
54. Merge two sorted arrays
55. Rotate array by k positions
56. Median and mode calculator
57. Dynamic array wrapper (new/delete)
58. std::vector operations (add/remove/search)
59. Matrix addition
60. Matrix multiplication
61. Matrix transpose
62. Tic-tac-toe (two players)
63. Caesar cipher encoder/decoder *(security)*
64. Vigenère cipher *(security)*
65. Frequency analysis of text *(cryptanalysis)*
66. Parse CSV lines
67. Improved CSV parser (quoted fields)
68. Simple struct (Student records)
69. std::map phonebook (add/search/delete)
70. std::unordered_map word frequencies
71. Config loader (key=value parser)
72. Serialize structs to file
73. Command-line notes app (file-backed)
74. Mini grep (search files)
75. Count lines/words/chars (like `wc`)
76. Fraction class with methods
77. Operator overloading (+, -, *, /)
78. Comparison operators (==, <, >, etc.)
79. Complex number class
80. Vector2D class (dot product, length)
81. Date class with validation
82. Timer RAII class
83. Logger class (file output)
84. Stack class (dynamic array)
85. Queue class (circular buffer)
86. LinkedList (singly linked) with methods
87. Binary Search Tree (insert/search/traversal)
88. BST deletion (3 cases)
89. Hash table (chaining)
90. Trie (insert/search/prefix)
91. Merge sort
92. Quicksort
93. Basic thread printing numbers
94. std::mutex protecting shared counter
95. Producer-consumer queue
96. Thread-safe logging class
97. Simple thread pool
98. TCP echo server (blocking)
99. TCP echo client
100. **Capstone**: Secure Multi-Client Chat Server** *(Cybersecurity + Backend Integration)*

Build a complete networked application combining everything I've learned:

**Requirements:**

- Multi-threaded TCP server handling concurrent clients
- User authentication system (username/password)
- XOR encryption for message transport (toy crypto)
- Command system: `/login`, `/msg`, `/users`, `/quit`
- Thread-safe logging to file
- Config file for port/settings
- Graceful shutdown on SIGINT
- Rate limiting per client (prevent spam)
- GUI?