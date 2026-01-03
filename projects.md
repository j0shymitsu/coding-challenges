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
31. Convert string to upper and lower case.
32. Check if a string is a palindrome.
33. Word frequency in a single-line string (split on spaces).
34. Validate password strength (length + char classes).
35. Compute nCr using factorial.
36. Compute GCD and LCM of two numbers.
37. Implement an integer calculator with a loop “REPL” (exit on command).
38. Print ASCII table subset (32–126).
39. Print a rectangle of stars with given width/height.
40. Print a right triangle of stars.
41. Print a centered pyramid of stars.
42. Print Pascal’s triangle up to n rows.
43. Swap two variables without a temp (arithmetic or xor).
44. Simple stopwatch: read start/stop timestamps (user input) and compute duration.
45. Use std::chrono to time a loop doing some busy work.
46. Generate first n perfect squares and print them.
47. Generate and print first n prime numbers (reusing code nicely).
48. Simple menu-driven program practicing functions decomposition.
49. Implement a basic logging helper (function that prefixes messages with level and timestamp).
50. Currency converter with configurable rate.
51. Simulate rolling a six-sided die N times and show frequencies.
52. Rock–paper–scissors versus computer (best of 5).
53. Implement a mini quiz (hard-coded questions, scoring).
54. Temperature logger: read N temperatures and compute stats.
55. Implement a simple “to-do” list in memory (vector of strings; add/remove/list).
56. Command-line arguments: echo arguments and count them.
57. Command-line calculator (operands and operator from argv).
58. Simple text banner: read a message and pad it with a decorative border.
59. “Number base” converter: decimal to binary.
60. Binary to decimal converter.
61. Implement linear search on an array.
62. Implement binary search on a sorted array.
63. Implement selection sort.
64. Implement insertion sort.
65. Implement bubble sort with early-exit optimisation.
66. Compare timing of bubble vs insertion vs selection for random arrays.
67. Reverse an array in-place.
68. Find second largest element in an array.
69. Remove duplicates from an array (simple O$n^2$ approach).
70. Merge two sorted arrays into a sorted result.
71. Rotate array by k positions (right rotation).
72. Check if two arrays are equal (same contents, same order).
73. Median and mode of a list of integers.
74. Implement a simple dynamic array wrapper around new/delete.
75. Use std::vector to manage an expanding list of integers (add/remove/search).
76. Matrix addition (2D arrays).
77. Matrix multiplication (2D arrays).
78. Transpose of a matrix.
79. Check if a matrix is symmetric.
80. Tic-tac-toe board representation and basic validity checks (no winner logic yet).
81. Full console tic-tac-toe (two human players).
82. Implement a simple “connect four” style board (win detection in 2D).
83. Caesar cipher encoder/decoder for text.
84. Vigenère cipher encoder/decoder (basic).
85. Frequency analysis of letters in a text (simple histogram).
86. Word wrap algorithm: break text into lines of max width.
87. Parse a CSV line into fields (commas, no quotes handling).
88. Improved CSV parser that handles quoted fields.
89. Simple URL parser: split scheme, host, path from a URL string.
90. Extract all unique words from a text and print sorted.
### *Classes*
91. Implement a simple struct for Student (name, id, marks) and print records.
92. Read a list of students, compute class average and topper.
93. Sort students by mark (using std::sort with custom comparator).
94. Search student by ID using linear search.
95. Use std::map<string, string> for a phonebook (add/search/delete).
96. Use std::unordered_map<string, int> to count word frequencies.
97. Implement a basic “config” loader: key=value per line into a map.
98. Serialize a list of structs (students) to a text file, then read them back.
99. Implement a minimal JSON-like key-value parser (very small subset).
100. Implement a simple command-line “notes” app using files (append, list).
101. Create a small log file rotator: when log exceeds size, rotate to .1.
102. Implement a mini “grep” that prints lines containing a substring from a file.
103. Implement a mini “tail” to print last N lines of a file.
104. Implement a mini “head” to print first N lines of a file.
105. Simple hex dump for a file (print bytes as hex).
106. Copy a file byte-by-byte.
107. Compare two files and report if they are identical.
108. Count lines, words, and characters in a file (like wc).
109. Implement a simple, line-based key-value database file (load, query, update).
110. Build an address book using a vector of structs, persisted to disk.
111. Implement a simple library catalog (books) with search by title/author.
112. Build a basic bookmark manager (URL + tags) backed by a file.
113. Simple maze representation (2D grid) and text rendering.
114. Implement depth-first search (DFS) in a maze.
115. Implement breadth-first search (BFS) in a maze.
116. Use BFS to compute shortest path in a grid maze.
117. Implement a small calendar util that given a month/year prints a calendar grid.
118. Check if a given date is valid and compute day of week (Zeller or similar).
119. Implement a stopwatch/timer CLI tool using std::chrono and a menu.
120. Implement a RNG benchmark: test different distributions and print histograms.
121. Create a simple Fraction class (numerator/denominator) with basic methods.
122. Add operator overloading for +, -, *, / on Fraction.
123. Implement == and != for Fraction.
124. Implement <, >, <=, >= for Fraction (normalized form).
125. Implement a basic Complex class with arithmetic operators.
126. Build a 2D Vector2D class (x, y) with length, dot product, etc.
127. Implement a simple Date class with validation and next_day() method.
128. Implement a TimeOfDay class with addition and difference operations.
129. Implement a basic Timer RAII class that prints elapsed time on destruction.
130. Implement a simple Logger class that writes to file (singleton or injected).
131. Build a Stack class using a dynamic array allocation.
132. Build a Queue class using a circular buffer.
133. Implement a LinkedList class (singly linked) with push, pop, insert, erase.
134. Add iterators to LinkedList (forward iterator).
135. Implement a dynamic string class (like a tiny std::string).
136. Implement a simplified unique_ptr for a single object (no arrays).
137. Implement a simplified shared_ptr with reference counting.
138. Implement a simple RAII wrapper around FILE* or fstream.
139. Design a basic Polymorphic Shape hierarchy (base Shape, derived Circle/Rect).
140. Implement area() and perimeter() with virtual functions.
141. Add serialization of shapes to text (type and parameters).
142. Implement a small drawing “engine” that stores shapes in a vector and prints them.
143. Implement an InventoryItem class and an Inventory system using a vector.
144. Build a simple RPG character class with stats and leveling.
145. Turn RPG character into a small turn-based combat simulator (two characters).
146. Implement composition: Character has Inventory, Equipment, etc.
147. Implement an interface-like abstract class (e.g., IRenderable).
148. Demonstrate object slicing and avoid it with references or pointers.
149. Implement copy constructor and copy assignment for a class managing dynamic memory.
150. Implement move constructor and move assignment for that class.
151. Build a small Matrix class with dynamic allocation and operator().
152. Implement matrix addition and multiplication operators for Matrix.
153. Implement a simple “BigInt” class that stores arbitrary-length integers as string or vector.
154. Implement BigInt addition and subtraction.
155. Implement BigInt multiplication (school algorithm).
156. Implement a lightweight Option<T>-style class using templates.
157. Implement a simple variant-like class for int/double/string using std::variant.
158. Implement a basic event system where listeners subscribe to events.
159. Construct a Plugin interface and simulate loading different “plugins” (as objects).
160. Build a simple state machine class (states, transitions) for a text-based game.
161. Implement a simple finite state machine to parse a subset of a protocol (e.g., simple command language).
162. Use std::array and std::span to manipulate fixed-size data.
163. Build a small LRU cache using std::list and std::unordered_map.
164. Implement a command pattern for an undo/redo system (simple text buffer).
165. Implement a small observer pattern example (subject/observers).
166. Implement a lightweight dependency injection container using factories.
167. Build a custom allocator that logs allocations/deallocations.
168. Implement a simple memory pool for fixed-size blocks.
169. Implement a reference-counted string class (copy-on-write).
170. Write a configuration-driven object builder (from a simple config file).
171. Implement a simple scheduling system: tasks with priorities using priority_queue.
172. Implement Dijkstra’s algorithm using adjacency list and priority_queue.
173. Represent a directed graph and perform topological sort.
174. Implement DFS-based cycle detection in a directed graph.
175. Implement a Trie for words with insert/search/prefix.
176. Implement a simple spell-checker using a Trie and a word list.
177. Implement a simple regex-like matcher supporting only .* and literal chars.
178. Implement a finite automaton for recognizing a small language of tokens.
179. Build a simple library (static .a or shared .so) from one of your classes and link to it.
180. Write tests (own mini testing harness) for several of your library classes.
181. Implement merge sort on a vector<int>.
182. Implement quicksort (Lomuto or Hoare partition).
183. Compare timing of std::sort vs your quicksort/merge sort.
184. Implement heap sort using std::vector as binary heap.
185. Implement a min-heap data structure with push/pop/top.
186. Implement a binary search tree (BST) with insert/search/inorder traversal.
187. Add deletion to BST (handle 3 cases).
188. Implement a balanced BST wrapper using std::set / std::map and hide STL.
189. Implement a hash table from scratch using open addressing.
190. Implement a hash table from scratch using chaining (linked lists).
191. Implement a disjoint-set (Union-Find) data structure.
192. Use Union-Find to count connected components in a graph.
193. Implement Kruskal’s algorithm for MST.
194. Implement Prim’s algorithm for MST.
195. Implement KMP substring search.
196. Implement Rabin–Karp substring search.
197. Implement a basic suffix array for a string.
198. Implement prefix-function / Z-algorithm for pattern matching.
199. Implement a simple dynamic programming solution: coin change.
200. Implement DP for longest increasing subsequence.
201. Implement DP for longest common subsequence.
202. Implement DP for edit distance between two strings.
203. Implement a knapsack 0/1 solver (DP table).
204. Implement Floyd–Warshall algorithm for all-pairs shortest paths.
205. Implement a basic A* pathfinding on a grid maze.
206. Implement a segment tree for range sum queries.
207. Extend segment tree for range min queries.
208. Implement a Fenwick tree (Binary Indexed Tree).
209. Time and compare segment tree vs Fenwick vs naive prefix sums.
210. Implement a basic polynomial class and fast exponentiation (binary exponentiation).
211. Implement matrix exponentiation for Fibonacci numbers.
212. Implement a simple SAT-like solver for 2-SAT using implication graph.
213. Implement backtracking solver for Sudoku.
214. Implement backtracking for N-Queens problem.
215. Implement a small constraint solver for a simple puzzle (e.g., cryptarithm).
216. Implement basic big rational type using BigInt for numerator/denominator.
217. Implement a “bignum” modular exponentiation (for crypto-style operations).
218. Implement a simple RSA toy demo (keygen, encrypt/decrypt for tiny numbers).
219. Build a small benchmarking harness that runs any function and measures time.
220. Write a generic “algorithm tester” that runs multiple algorithms on random data and logs results.
241. Implement a simple thread that prints numbers in a loop.
242. Start two threads printing different ranges; observe interleaving.
243. Use std::mutex to protect a shared counter incremented by multiple threads.
244. Implement a producer–consumer queue using condition_variable.
245. Implement a thread-safe logging class.
246. Build a simple thread pool that executes submitted tasks.
247. Stress-test the thread pool with many tasks and measure speedup.
248. Implement a simple “parallel sum” over a large vector using multiple threads.
249. Experiment with race condition: intentionally omit mutex and show wrong results.
250. Build a simple deadlock scenario and then fix it using std::lock.
251. Implement a read–write lock using std::shared_mutex.
252. Implement a concurrent queue using lock-free techniques or atomics (single-producer single-consumer).
253. Implement a simple stopwatch that runs in background thread and updates elapsed time.
254. Use std::async and futures to run tasks and retrieve results.
255. Implement a simple periodic timer using a sleeping thread.
256. Implement a bounded blocking queue with multiple producers/consumers.
257. Implement a simple reactor-like pattern: event loop that executes callbacks.
258. Build a simulation of a bank system: accounts, transfers, and lock ordering to prevent deadlocks.
259. Implement simple rate limiter (token bucket) for function calls.
260. Simulate a basic job scheduler: jobs have durations and are executed using a pool of worker threads.
261. Use std::filesystem to list files and directories recursively.
262. Build a command-line tool to search for files by name pattern (like a tiny “find”).
263. Build a tool that scans files and computes SHA-256 hashes (using a library or simple placeholder hash).
264. Implement a simple in-memory key-value store with persistence to disk on shutdown.
265. Implement a basic log analyzer: parse log file, aggregate stats.
266. Build a CLI “chat log viewer” that groups messages by user and time.
267. Implement a mini HTTP request parser for raw HTTP request text.
268. Implement a minimal URL encoder/decoder.
269. Implement a base64 encoder/decoder.
270. Implement a simple text-based protocol for a key-value store (SET/GET/DEL) parser.
271. Use POSIX or standard sockets (on your system) to implement a blocking TCP echo server.
272. Implement a TCP echo client that talks to your server.
273. Extend server to support multiple clients using threads.
274. Implement a line-based chat server where all messages are broadcast to connected clients.
275. Implement a basic HTTP 1.0 server that serves static files from a directory.
276. Add rudimentary logging and status codes to the HTTP server.
277. Add response headers for content-type based on file extension.
278. Implement basic query string parsing (?key=value\&...).
279. Implement a very simple REST-like API: /users, /users/<id> in your HTTP server.
280. Implement graceful shutdown of your server with signal handling.
281. Introduce a config file for your server (port, root directory, etc.).
282. Add simple access logging (remote address, URL, response code).
283. Implement keep-alive (persistent connections) if your platform/knowledge allows; if not, just design it on paper in code comments.
284. Add basic rate limiting per client IP to your HTTP server.
285. Implement a tiny proxy that forwards HTTP requests to another server.
286. Build a small command-line HTTP client using sockets (GET only).
287. Implement a very simple binary protocol (length + payload) and a server for it.
288. Add authentication-like token checks to your text protocol server.
289. Implement a simple encrypted channel using XOR (toy, not real crypto) between client and server.
290. Implement a basic DNS query using a library or raw UDP (if feasible), or simulate DNS parsing of a sample packet.
291. Build a simple command-line task manager: tasks with priorities, deadlines, tags; stored in a file.
292. Extend task manager: add search/filter and sorting by deadline/priority.
293. Build a basic markdown-to-plain-text converter (handling headings, lists, emphasis minimally).
294. Implement a basic expression parser (shunting-yard) and evaluator.
295. Extend expression parser with variables and assignments.
296. Implement a mini REPL for your expression language.
297. Build a simple INI configuration parser with sections and key/value.
298. Implement a small JSON parser for objects/arrays/strings/numbers/booleans/null.
299. Build a generic serialization framework that can serialize/deserialize structs to/from JSON-ish format.
300. Implement a toy SQL-like query processor for in-memory tables (SELECT columns WHERE condition).
301. Build a small key-value database with append-only log and an in-memory index.
302. Add snapshots/compaction to your key-value database.
303. Implement a basic B-Tree or B+Tree for on-disk indexing (simple, small order).
304. Build a tiny scripting language: tokenizer and parser for arithmetic + if/while.
305. Implement bytecode for that scripting language and a simple interpreter.
306. Add functions and variables to your scripting language.
307. Implement a tiny mark-and-sweep garbage collector for objects in the language (if ambitious).
308. Build a minimal HTTP framework: routing table, middleware concept, handlers.
309. Implement a small microservice-style application: user registration and login (in-memory DB).
310. Add password hashing (use a library or stub) and token-based sessions to the service.
311. Implement config-driven routing and middleware composition for your HTTP framework.
312. Build a CLI client for your microservice that interacts via HTTP.
313. Implement a basic logging library with severity levels, sinks (console/file), and log rotation.
314. Convert one of your earlier projects to header-only library form and showcase usage.
315. Implement concepts (C++20) to constrain template functions (e.g., arithmetic types only).
316. Write a generic algorithm that works on any range and uses concepts.
317. Implement a type-erased container (like std::any) with custom interface.
318. Implement a small reflection-like system via macros or registration functions.
319. Use constexpr to compute something interesting at compile time (e.g., hash of a string).
320. Implement a compile-time finite-state machine using constexpr and templates.
321. Write a small metaprogram that generates factorial values at compile time.
322. Implement tag-dispatching to choose optimized algorithms based on iterator category.
323. Implement a small framework for benchmark tests with RAII, templates, and policy classes.
324. Implement a simple dependency graph and topological sort for “build tasks” (like a toy build system).
325. Build a CLI build tool that reads a small config and runs tasks with dependencies in correct order.
326. Add parallel execution of independent tasks in your build tool using threads.
327. Implement a small CLI profiler that times commands and aggregates statistics.
328. Build a modular plugin system where shared libraries (or statically compiled modules) register commands.
329. Implement a small HTTP load tester that sends many requests concurrently and reports latency stats.
330. Build a mini monitoring agent that periodically collects system metrics (CPU usage, memory, disk usage) using platform APIs and logs them.
331. Add a simple text-dashboard UI (ASCII charts) for your metrics.
332. Implement a small pub/sub message bus in-process (topics, subscribers, publisher).
333. Extend pub/sub to work over TCP using your binary protocol.
334. Implement a simple distributed key-value store with primary/secondary replication (best-effort).
335. Add leader election simulation (no real cluster; simulate nodes in threads and elect leader).
336. Build a mini Raft-like log replication simulator (high-level, no full correctness).
337. Implement a basic static site generator: read markdown files, output HTML using templates.
338. Build a code generator: given a schema file, generate C++ structs and basic serialization code.
339. Implement a static analyzer for a subset of C++ code (very limited: count functions, lines, etc.).
340. Build a linter that checks a few style rules (line length, tabs vs spaces, etc.).
341. Implement a small testing framework with TEST(name){...} macros and assertions.
342. Use that framework to test at least three earlier data structures/algorithms.
343. Implement a coverage-like tool that instruments your own code (simple counters per branch).
344. Build a CLI for exploring your coverage data and listing untested branches.
345. Implement a basic template-based DSL for constructing SQL queries safely.
346. Implement a mini ORM-like layer that maps structs to SQLite tables (or your own DB engine).
347. Build a small REST API for CRUD on that ORM-backed model using your HTTP framework.
348. Implement pagination, filtering, and sorting in your REST API.
349. Add basic JWT-like token handling (stub cryptography if needed).
350. Implement rate-limiting and IP blocking middleware in your HTTP framework.
351. Build a command-line deployment helper that uploads a config and restarts your service (can be simulated).
352. Implement a rolling-log viewer that tails remote logs via your protocol.
353. Build a configuration reloader that watches a file and hot-reloads settings.
354. Implement feature flags in your service, driven by config.
355. Implement a metrics endpoint (/metrics) that returns counters in a Prometheus-like text format.
356. Build a small load-shedding mechanism: when overloaded, server starts rejecting or queuing requests.
357. Implement graceful restart: start new worker, stop old worker after current requests complete (simulated).
358. Build a ‘migration’ tool for your data (e.g., change schema version, upgrade records).
359. Implement a backup/restore tool for your database.
360. Build a CLI “admin” tool that talks to your service for maintenance tasks.
361. Implement a small client library (C++ API) for your service and demonstrate usage in another program.
362. Add integration tests that spin up the server, run a sequence of client requests, and check results.
363. Package one of your larger projects with CMake, install targets, and configuration headers.
364. Document one major project thoroughly with README, design notes, and usage examples.
365. Spend a day refactoring and polishing: apply modern C++ idioms, improve error handling, and add tests to any of the big projects.