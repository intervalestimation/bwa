#include <fstream>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <stdio.h>
#include "input.h"

#define N 51

using namespace std;

void fileiocpp(const char* filename, long int* data)
{
    std::ifstream ifs(filename, std::ios::in);
    std::string str;
    if (ifs.fail())
    {
        std::cerr << "Error" << std::endl;
        return;
    }
    long int i = 0;
    while (getline(ifs, str))
    {
      data[0] = 1;
    } 
    return;
}

void input_fgets(const char* filename, long int* data)
{
    FILE *fp;
    char buf[N] = {'\0'};
    long int j = 0;

    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Fail to open %s\n", filename);
        exit(EXIT_FAILURE);
    }

    while (fgets(buf, N, fp) != NULL) {
        for (int i = 0; i < N; i++, j++){
            if (buf[i] == '\0' ){
                data[j] = 0;
                i = N;
            } else {
                data[j] = (((buf[i] >> 2) ^ (buf[i] >> 1)) & 3) + 1;
            }
        }
    }

    fclose(fp);

    return;
}