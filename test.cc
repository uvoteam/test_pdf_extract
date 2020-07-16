#include <fstream>
#include <iostream>

#include <pdf_extractor.h>

using namespace std;

int main(int argc, char *argv[])
{
    std::ifstream t(argv[1]);
    std::string str((std::istreambuf_iterator<char>(t)),
                    std::istreambuf_iterator<char>());
    cout << pdf2txt(str);
    
    return 0;
}
