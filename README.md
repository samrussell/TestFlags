# TestFlags
Sample code for testing various x86 opcodes and what they do to EFLAGS

## Output:

```
ADD 0, 0: 246
ADD 1, 0: 202
ADD 1, 1: 202
ADD 1, ffffffff: 257
ADD 1, f: 212
ADD 10, fffffff0: 247
ADD 1, fffffff0: 282
ADD f, fffffff0: 286
ADD fffffff0, fffffff0: 283
ADD ffffffff, 80000000: a07
ADD fffffffe, 80000000: a03
ADD 1, 7fffffff: a96
ADD 2, 7fffffff: a92
SUB 0, 0: 246
SUB 1, 0: 202
SUB 1, 1: 246
SUB 0, 1: 297
SUB 10, 1: 216
SUB 0, 10: 287
SUB ffffffff, f: 286
SUB 80000000, 1: a16
SUB 80000002, 1: 282
SUB 7fffffff, fffffff0: a87
SUB 7fffff00, fffffff0: 203
CMP 0, 0: 246
CMP 1, 0: 202
CMP 1, 1: 246
CMP 0, 1: 297
CMP 10, 1: 216
CMP 0, 10: 287
CMP ffffffff, f: 286
CMP 80000000, 1: a16
CMP 80000002, 1: 282
CMP 7fffffff, fffffff0: a87
CMP 7fffff00, fffffff0: 203
TEST 0, 0: 246
TEST 1, 0: 246
TEST 1, 1: 202
TEST 0, 1: 246
TEST ffffffff, ffffffff: 286
TEST ffffffff, 0: 246
```
