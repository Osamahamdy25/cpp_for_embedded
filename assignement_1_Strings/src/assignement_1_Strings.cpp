//============================================================================
// Name        : assignement_1_Strings.cpp
// Author      : Osama Hamdy
// Version     : 2022
// Copyright   :  osama
// Description : Example to explain the functionality of strings & stringstream
//============================================================================

#include <iostream>
#include<sstream>
#include<string>
using namespace std;
string file_extension(string file);
int file_size(string file);
void test_cases(int *size_music,int *size_imag,int *size_movie,int *size_other,int lines);
int main() {
	int num, test[num];
	string str;
	int size_music,size_imag,size_movie,size_other;
	cout<<"please enter the number of test cases "<<endl;
	cin>>num;
	cout<<"please enter the number of the lines in each test cases "<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>test[i];
	}
	for(int i=0;i<num;i++)
	{
		size_music=0;
		size_imag=0;
		size_movie=0;
		size_other=0;
		test_cases(&size_music,&size_imag,&size_movie,&size_other,test[i]);
		cout<<"music "<<size_music<<" movie "<<size_movie<<" image "<<size_imag<<" other "<<size_other<<endl;

	}

	return 0;
}
string file_extension(string file)
{
	size_t first =file.rfind(".");
	size_t last=file.rfind(" ");
	size_t pos=last-first;

	return file.substr(first+1,pos-1);

}
int file_size(string file)
{

	size_t first =file.rfind(" ");
	size_t last=file.rfind("b");
	size_t pos=last-first;
	int size=stoi(file.substr(first,pos));
	return size;

}

void test_cases(int *size_music,int *size_imag,int *size_movie,int *size_other,int lines)
{
	int i;
	string extension,str;
	int size_old;
	for(int i=0;i<lines;i++)
	{
		cout<<"please enter the file name "<< i+1<<" "<<endl;
		   cin.ignore();
		   getline(cin,str);
		extension=file_extension(str);
		size_old=file_size(str);
	if (extension=="mp3"||extension=="aac"||extension=="flac")
	{
		*(size_music)+=size_old;
	}
	else	if (extension=="jpg"||extension=="bmp"||extension=="gif")
		{
			*(size_imag)+=size_old;
		}
	else	if (extension=="mp4"||extension=="avi"||extension=="mkv")
			{
				*(size_movie)+=size_old;
			}
	else
	{

		*(size_other)+=size_old;
	}

	}
}
