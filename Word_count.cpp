#include<iostream>
#include<fstream>

using namespace std;
int main()
{
   string f1, f2;
	cout<<"Enter the name you want to give to the 1st file : ";
	cin>>f1;
	cout<<"Enter the name you want to give to the 2nd file : ";
	cin>>f2;
	ofstream file1(f1);
	file1<<"C++ is a cross platform language that can be used to create high performance applications.";
	file1.close();
	ofstream file2(f2);
	file2<<"C++ is one of the world's most popular programming languages.";
	file2.close();
	ifstream fin1, fin2;
	fin1.open(f1);
	char word1[30], word2[30];
	int count1=0, count2=0;
	while(!fin1.eof())
	{
	fin1>>word1;
	count1++;
	}	
	fin2.open(f2);
	while(!fin2.eof())
	{
		fin2>>word2;
		count2++;
	}
	cout<<"Number of words in 1st file are : "<<count1<<endl;
	cout<<"Number of words in 2nd file are : "<<count2<<endl;
	int dif, sum;
	float per;
	dif=count1-count2;
	sum=count1+count2;
	per=(dif*100)/sum;
	cout<<"Percentage similarity based on number of words is : "<<per<<"%"<<endl;
	
	fin2.close();
   return 0;
}