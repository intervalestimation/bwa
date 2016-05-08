parallel suffix-array construction for fastq-style file
===

Create Suffix-Array for fastq-style file

## Dependency
* X10
* C++11

## Usage
```
$ ./a.out [num1] [num2] [num3] [filename]
```

* num1: Number of char types.(ex. 5 if /[ATGC$]/)
* num2: Number of lines of fastq-style file
* num3: Number of threads.(ex. 11)

Fastq-style file must be /[ATGC]{100}/ each line.

## Compile
```
$ JAVA_HOME=/usr ../x10/bin/x10c++ -g -v -t -O3 -NO_CHECKS Bwt.x10 SuffixArray.x10 SuffixArrayChar.x10 SuffixArraySimple.x10 SuffixArraySimpleChar.x10 -post 'icc # # -fopenmp'
```
