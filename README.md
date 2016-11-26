

## Directory structure

```
$ tree
.
├── README.md
├── src
│   ├── add.c
│   └── add.h
└── test
    ├── Makefile
    ├── add_test.c
    ├── add_test_runner.c
    └── all_tests.c

2 directories, 7 files
```

## How to run the test

Steps,

1. Download unity framework code, then extract to the place you want to put.
2. Change `UNITY_HOME` variable name in file `test/Makefile`.
3. Enter to `test` directory, then execute

```
make
```
