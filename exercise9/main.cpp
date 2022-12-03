#include <map>
#include <iostream>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    std::map<std::string, unsigned long> tele_numbers;
    tele_numbers.insert(std::pair<std::string, unsigned long>("Jack", 1000));
    tele_numbers.insert(std::pair<std::string, unsigned long>("Lucy", 1001));
    tele_numbers.insert(std::pair<std::string, unsigned long>("Tom", 1002));
    tele_numbers.insert(std::pair<std::string, unsigned long>("John", 1003));
    tele_numbers.insert(std::pair<std::string, unsigned long>("Tony", 1004));
    std::map<std::string, unsigned long>::iterator it;
    std::cout<<"all of the inserted information is:\n";
    for(it = tele_numbers.begin();it != tele_numbers.end();it++)
    {
        std::cout<<"<"<<it->first<<", "<<it->second<<">\n";
    }

    char name[20];
    std::cout<<"please input the name which you want to search:";
    std::cin>>name;

    //查找
    it = tele_numbers.find(name);
    if(it != tele_numbers.end())
    {
        std::cout<<"the "<<name<<"\'s tele_number is:"<<it->second<<std::endl;
    }
    else
    {
        std::cout<<"not find the information of "<<name<<std::endl;
    }

    std::cout<<"please input the name which you want to search:";
    std::cin>>name;

    it = tele_numbers.find(name);
    if(it != tele_numbers.end())
    {
        std::cout<<"the "<<name<<"\'s tele_number is "<<it->second<<std::endl;
    }
    else
    {
        std::cout<<"not find the information of "<<name<<std::endl;
    }

    char tele[20];
    std::cout<<"please input the telenumber which you want to search:";
    std::cin>>tele;
    std::cout<<"the people whose number is "<<tele<<" is:";
    for(it = tele_numbers.begin();it != tele_numbers.end();it++)
    {
        if(it->second == atoi(tele))
        {
            std::cout<<it->first<<std::endl;
            break;
        }
    }
    std::cout<<'\n';
    if(it == tele_numbers.end())
    {
        std::cout<<"not find "<<"the people whose number is "<<tele;
    }

    std::cout<<"please input the telenumber which you want to search:";
    std::cin>>tele;
    std::cout<<"the people whose number is "<<tele<<" is:";
    for(it = tele_numbers.begin();it != tele_numbers.end();it++)
    {
        if(it->second == atoi(tele))
        {
            std::cout<<it->first<<std::endl;
            break;
        }
    }
    std::cout<<'\n';
    if(it == tele_numbers.end())
    {
        std::cout<<"not find "<<"the people whose number is "<<tele;
    }
    return 0;
}
