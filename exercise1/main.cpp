#include <iostream>
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    unsigned int age = 0;
    char result[20];
    std::cout<<"What is your age?"<<std::endl;
    std::cin>>age;
    sprintf(result, "%u", age);
    FILE* fp = fopen("age.txt", "w+");
    if(!fp)
    {
        std::cout<<"open the file failed!"<<std::endl;
        exit(1);
    }
    fwrite(result, sizeof(char), strlen(result), fp);
    fclose(fp);
    return 0;
}
