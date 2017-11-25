#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc,char* argv[])
{
    string file_name=argv[1];
    ifstream file(file_name);
    string temp_text;
    file_name.append(".txt");
    ofstream new_file(file_name.c_str());
    for(int i;getline(file,temp_text,'\n')&&!file.eof();i++)
    {new_file<<"<<"<<"\""<<temp_text<<"\""<<"<<endl";}
    file.close();
    new_file.close();
}
